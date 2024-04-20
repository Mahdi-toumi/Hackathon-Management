#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Participant.h>
#include <iostream>
#include <string>

using namespace std;




Participant::Participant(string nom, string prenom, string email, int age) : Personne(nom, prenom, email), age(age) {}



void Participant::modifier() {
    int choix;
    string Q;
    do {
        cout << endl << "Veuillez choisir : " << endl;
        cout << "1 - Modifier le nom" << endl;
        cout << "2 - Modifier le prenom" << endl;
        cout << "3 - Modifier l'email" << endl;
        cout << "4 - Modifier l'age" << endl;
        cout << "0 - Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;
    } while (choix < 0 || choix > 4);

    switch (choix) {

        case 1:
            cout << endl << "Saisir le nouveau nom : ";
            cin >> Q;
            this->set_nom(Q);
            break;
        case 2:
            cout << endl << "Saisir le nouveau prenom : ";
            cin >> Q;
            this->set_prenom(Q);
            break;
        case 3:
            cout << endl << "Saisir le nouvel email : ";
            cin >> Q;
            this->set_email(Q);
            break;
        case 4:
            cout << endl << "Saisir le nouvel age : ";
            cin >> age;
            break;
        default:
            break;
    }
}
//TERMINER



void Participant::Ajouter_competence() {
    list<string>::iterator it ;
    int choix, K = 0;
    string comp;
    cout << endl << " Saisir une competence a ajouter : ";
    cin >> comp;

    for (it=competence.begin() ; it!=competence.end() ; it++) {
        if (*it == comp) {
            cout << endl << " La competence existe deja." << endl;
            K = 1;
            break;
        }
    }

    if (K == 0) {
        competence.push_back(comp);
    } else {
        do {
            cout << endl << "Veuillez choisir : " << endl;
            cout << "1 - Ajouter une autre competence" << endl;
            cout << "0 - Annuler" << endl;
            cin >> choix;
        } while (choix != 0 && choix != 1);

        if (choix == 1) {
            this->Ajouter_competence();
        }
    }
}
//TERMINER

void Participant::Supprimer_competence() {
    list<string>::iterator it ;
    if (competence.empty()) {
        cout << "Aucune compétence a supprimer." << endl;
        return;
    }

    cout << "Competences actuelles :" << endl;
    for (it=competence.begin() ; it!=competence.end() ; it++) {
        cout << *it <<"\t";
    }
    cout<<endl ;

    int choix;
    cout <<endl<< "Entrez le numero de la competence a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int>(competence.size())) {
        it = competence.begin();
        advance(it, choix - 1);
        competence.erase(it);
        cout << "Competence supprimee avec succes." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }
}
//TERMINER




ostream& operator<<(ostream& os, Participant& p) {
    list<string>::iterator it ;
    os << endl << static_cast<Personne&>(p);
    os << endl << " Age : " << p.age;
    cout << endl << " Competences du participant : "<<endl;
    for (it=p.competence.begin() ; it!=p.competence.end() ; it++) {
        cout << *it <<"\t";
    }
    cout << endl ;
    return os;
}
//TERMINER
istream& operator>>(istream& is, Participant& p) {
    string comp;
    int choix;
    is >> static_cast<Personne&>(p);
    cout << " Saisir l'age : ";
    is >> p.age;

    do {
        cout << endl << " Saisir une competence du participant : ";
        cin >> comp;
        p.competence.push_back(comp);

        do {
            cout << endl << "Veuillez choisir :  1 - Saisir une autre competence    0 - Terminer" << endl;
            cin >> choix;
        } while (choix != 0 && choix != 1);
    } while (choix == 1);

    return is;
}
//TERMINER




void Participant::remplirFichier(const string& nomFichier) {
    ofstream fichier(nomFichier, ios::app);
    if (!fichier.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier en écriture." << endl;
        return;
    }
    fichier << *this;
    fichier.close();
}


void Participant::afficherFichier(const string& nomFichier) {
    ifstream fichier(nomFichier);
    if (!fichier.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier en lecture." << endl;
        return;
    }
    string ligne;
    while (getline(fichier, ligne)) {
        cout << ligne << endl;
    }
    fichier.close();
}


void Participant::ouvrirFichier(const string& nomFichier) {
    ifstream fichier(nomFichier, ofstream::out | ofstream::trunc);

    if (!fichier.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier." << endl;
        return;
    }

    cout << "Fichier ouvert avec succes." << endl;
    fichier.close();
}


void Participant::viderFichier(const string& nomFichier) {
    ofstream fichier(nomFichier, ofstream::out | ofstream::trunc);
    if (!fichier.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier." << endl;
        return;
    }
    fichier.close();
    cout << "Fichier vide avec succes." << endl;
}


