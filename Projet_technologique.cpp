#include <iostream>
#include <vector>
#include <string>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Projet_technologique.h>

using namespace std;




Projet_technologique::Projet_technologique(string Titre_projet, string Statut, string Domaine) : Projet(Titre_projet, Statut), Domaine(Domaine) {}




istream& operator>>(istream& is, Projet_technologique& p) {
    string tech;
    int choix;
    is >> static_cast<Projet&>(p);
    cout << endl << " Entrez le domaine du projet : ";
    is >> p.Domaine;
    do {
        cout << endl << " Entrez une technologie utilisée dans le projet : ";
        cin >> tech;
        p.Technologie_utulisees.push_back(tech);
        do {
            cout << endl << " Choisissez : 1 - Ajouter une autre technologie        0 - Terminer   ";
            cin >> choix;
        } while (choix != 1 && choix != 0);
    } while (choix == 1 && choix != 0);
    return is;
}




ostream& operator<<(ostream& os, Projet_technologique& p) {
    os << static_cast<Projet&>(p);
    os << " Domaine : " << p.Domaine << endl;
    os << " Technologies utilisees : ";
    if (!p.Technologie_utulisees.empty()){
        for (unsigned i = 0; i < p.Technologie_utulisees.size(); i++) {
        os << p.Technologie_utulisees[i]<< ", \t ";
        }
    }
    else    cout << " Pas encore de technologies ajoutees ";


    os << endl;
    return os;
}




void Projet_technologique::Modifier_Projet() {
    int choix;
    string Q ;
    do {
        cout << endl << "Veuillez choisir : " << endl;
        cout << "1 - Modifier le titre du projet" << endl;
        cout << "2 - Modifier le statut du projet" << endl;
        cout << "3 - Modifier le domaine du projet" << endl;
        cout << "4 - Ajouter une technologie " << endl;
        cout << "5 - Supprimer une technologie " << endl;
        cout << "0 - Quitter " << endl;
        cout << " Votre choix : " ;
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
            cout << endl << " Saisir le nouveau doamine : ";
            cin >> Domaine;
            break;
        case 4:
            Ajouter_technologie() ;
            break;
        case 5:
            Supprimer_technologie() ;
            break;
        case 0:
            break;

    }
}
//TERMINER



void Projet_technologique::Ajouter_technologie() {
    int choix;
    string tech;
    cout << endl << "Saisir une technologie a ajouter : ";
    cin >> tech;

    for (unsigned i = 0; i < Technologie_utulisees.size(); i++) {
        if (Technologie_utulisees[i] == tech) {
            cout << "La technologie '" << tech << "' existe daja dans le projet." << endl;
            do {
                cout << endl << "Choisissez : 1 - Ajouter une autre technologie        0 - Annuler   ";
                cin >> choix;
            } while (choix != 1 && choix != 0);
            if (choix == 1) {
                this->Ajouter_technologie();
            }
            return;
        }
    }

    Technologie_utulisees.push_back(tech);
}
//TERMINER




void Projet_technologique::Supprimer_technologie() {
    int choix;
    if (Technologie_utulisees.empty()) {
        cout << "Aucune technologie a supprimer." << endl;
        return;
    }

    cout << "Technologies utilisees :" << endl;
    for (size_t i = 0; i < Technologie_utulisees.size(); ++i) {
        cout << i + 1 << ". " << Technologie_utulisees[i] << endl;
    }
    cout << "Entrez le numéro de la technologie a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int>(Technologie_utulisees.size())) {
        Technologie_utulisees.erase(Technologie_utulisees.begin() + choix - 1);
        cout << "Technologie supprimee avec succes." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }
}
//TERMINER

void Projet_technologique::attribuer_note(int idJuge) {
    float note ;
    do {
        cout << endl << " Saisir une note entre 0 et 20 : ";
        cin >> note;
        if (note < 0 || note > 20) {
            cout << " La note doit etre comprise entre 0 et 20. Veuillez reessayer." << endl;
        }
    } while (note < 0 || note > 20);
    setNotes (idJuge,note) ;
}
//TERMINER

