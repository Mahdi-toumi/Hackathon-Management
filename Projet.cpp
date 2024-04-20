#include <iostream>
#include <string>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Projet.h>

using namespace std;


int Projet::nextID = 1 ;

Projet::Projet () : Id_Projet(nextID++) {}

Projet::Projet(string Titre_projet, string Statut) : Id_Projet(nextID++), Titre_projet(Titre_projet), Statut(Statut) {}




ostream& operator<<(ostream& os, Projet& p) {
    os << endl << "ID du projet : " << p.Id_Projet;
    os << endl << "Titre du projet : " << p.Titre_projet;
    os << endl << "Statut du projet : " << p.Statut;
    if (p.Notes.empty()) {
        os << endl << "Pas encore de notes." << endl;
    } else {

        os << endl << "Affichage des notes :" << endl;
        for (unsigned i = 0; i < p.Notes.size(); i++) {
                if (p.Notes[i]!=0) os << p.Notes[i] << "\t";
        }
        cout<<endl ;
    }
    return os;
}

istream& operator>>(istream& is, Projet& p) {

    cout << endl << "Saisir le titre du projet : ";
    is >> p.Titre_projet;
    cout << endl << "Saisir le statut du projet : ";
    is >> p.Statut;
    return is;
}


float Projet::Calculer_Note_final() {
    float somme = 0;
    map<int,float>::iterator it ;
    int N = 0; // nombre des juges qui ount donner une note

    for ( it = Notes.begin(); it != Notes.end(); ++it) {
        somme += it->second;
        if (it->second!= 0) N++ ;

    }
    if (N > 0) return somme / N ;
    else return 0.0 ;

}
