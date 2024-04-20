#include <iostream>
#include <string>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Projet_design.h>

using namespace std;




Projet_design::Projet_design(string Titre_projet, string Statut, string concept) : Projet(Titre_projet, Statut), Concept(concept) {}

istream& operator>>(istream& is, Projet_design& p) {
    int choix;
    string logiciel;
    is >> static_cast<Projet&>(p);
    cout << endl << " Entrez le concept du projet : ";
    is >> p.Concept;
    do {
        cout << endl << " Entrez un logiciel utilisé dans le projet : ";
        cin >> logiciel;
        p.Logiciels.push_back(logiciel);
        do {
            cout << endl << " Choisissez : 1 - Ajouter un autre logiciel        0 - Terminer   ";
            cin >> choix;
        } while (choix != 1 && choix != 0);
    } while (choix == 1 && choix != 0);
    return is;
}

ostream& operator<<(ostream& os, Projet_design& p) {
    os << static_cast<Projet&>(p);
    os << " Concept du projet design : " << p.Concept << endl;
    os << " Logiciels utilisés : ";
    if (!p.Logiciels.empty()){
    for (unsigned i = 0; i < p.Logiciels.size(); i++) {
        os << p.Logiciels[i]<< ", \t ";
        }
    }
    else    cout << " Pas encore de logiciels ajoutees ";

    os << endl;
    return os;
}




void Projet_design::Modifier_Projet() {
    int choix;
    string Q ;
    do {
        cout << endl << "Veuillez choisir : " << endl;
        cout << "1 - Modifier le titre du projet" << endl;
        cout << "2 - Modifier le statut du projet" << endl;
        cout << "3 - Modifier le concept du projet" << endl;
        cout << "4 - Ajouter un logiciels" << endl;
        cout << "5 - Supprimer un logiciels" << endl;
        cout << "0 - Quitter " << endl;
        cout << " Votre choix" << endl;
        cin >> choix;
    } while (choix < 0 || choix > 5);

    switch (choix) {

        case 1:
            cout << endl << " Saisir le nouveau titre : ";
            cin >> Q;
            this->set_Titre_projet (Q) ;

            break;
        case 2:
            cout << endl << " Saisir le nouveau statut : ";
            cin >> Q;
            this->set_Statut(Q) ;
            break;
        case 3:
            cout << endl << " Saisir le nouveau concept : ";
            cin >> Concept;
            break;
        case 4:
            Ajouter_logiciel() ;
            break;
        case 5:
            Supprimer_logiciel() ;
            break;
        case 0:
            break;
    }
}
//TERMINER


void Projet_design::Ajouter_logiciel() {
    string logiciel;
    int choix;
    cout << " Entrez le nom du logiciel a ajouter : ";
    cin >> logiciel;

    for (unsigned i = 0 ; i < Logiciels.size() ; i++) {
        if (Logiciels[i] == logiciel) {
            cout << " Le logiciel '" << logiciel << "' est deja utilise dans le projet." << endl;
            do {
                cout << endl << " Choisissez : 1 - Ajouter un autre logiciel       0 - Annuler   ";
                cin >> choix;
            } while (choix != 1 && choix != 0);
            if (choix == 1) {
                this->Ajouter_logiciel();
            }
            return;
        }
    }
    Logiciels.push_back(logiciel);
}
//TERMINER

void Projet_design::Supprimer_logiciel() {
    int choix;
    if (Logiciels.empty()) {
        cout << " Aucun logiciel à supprimer." << endl;
        return;
    }

    cout << " Logiciels actuellement utilises :" << endl;
    for (unsigned i = 0; i < Logiciels.size(); ++i) {
        cout << i + 1 << ". " << Logiciels[i] << endl;
    }
    cout << " Entrez le numéro du logiciel a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int>(Logiciels.size())) {
        Logiciels.erase(Logiciels.begin() + choix - 1);
        cout << " Logiciel supprimé avec succès." << endl;
    } else {
        cout << " Choix invalide." << endl;
    }
}
//TERMINER

void Projet_design::attribuer_note(int idJuge) {
    float note ;
    do {
        cout << endl << "Saisir une note entre 0 et 20 : ";
        cin >> note;
        if (note < 0 || note > 20) {
            cout << "La note doit etre comprise entre 0 et 20. Veuillez reessayer." << endl;
        }
    } while (note < 0 || note > 20);
    this->setNotes (idJuge,note) ;
}
//TERMINER
