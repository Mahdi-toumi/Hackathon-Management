#ifndef ORGANISATEUR_H_INCLUDED
#define ORGANISATEUR_H_INCLUDED

#include <iostream>
#include <string>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Personne.h>

using namespace std;



class organisateur : public Personne {

    string tache;
public:
    organisateur(){}; // constructeur de la classe organisateur
    organisateur(string nom,string prenom,string email , string tache):Personne(nom,prenom, email) {this->tache=tache;}; // appel au constructeur de la clase mère personne 
    ~organisateur(){}; //destructeur de la classe organisateur

    friend istream& operator>>(istream& is, organisateur& o) {

        cin >> static_cast<Personne&>(o) ;
        cout << "Saisir la tache de l'organisateur : ";
        is >> o.tache;
        return is;
    }

    friend ostream& operator<<(ostream& os, organisateur& o) {
        cout << endl << static_cast<Personne&>(o);
        os << endl << " Tache : " << o.tache;

        cout << endl ;
        return os;
    }

    void modifier() ; // fonction pour modifier l'un des attributs de la classe organisateur
};



#endif // ORGANISATEUR_H_INCLUDED
