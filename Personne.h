#ifndef Personne_H_INCLUDED
#define Personne_H_INCLUDED

#include<iostream>
#include <string>
#include<vector>

using namespace std;

class Personne {
    static int nextID;

    int Id_personne;
    string nom;
    string prenom;
    string email;

public:

    Personne() ;
    Personne(string , string , string ) ;
    Personne(const Personne&);
    virtual ~Personne(){}

    int getid() {return Id_personne;}
    string getnom()  { return nom; }
    string getprenom()  { return prenom; }
    string getemail()  { return email; }

    void set_nom(string nom) { this->nom = nom; }
    void set_prenom(string prenom) { this->prenom = prenom; }
    void set_email(string email) { this->email = email; }


    friend istream& operator >>(istream& is ,Personne& p) {

        cout<<" Saisir le nom : " ;
        is >> p.nom ;
        cout<<" Saisir le prenom : " ;
        is >> p.prenom ;
        cout<<" Saisir l'email : " ;
        is >> p.email ;
        return is ;
    }
    friend ostream& operator <<(ostream& os,Personne& p){
        os <<endl<<" Id : "<<p.Id_personne<<endl<<" Nom et Prenom : "<<p.nom<<" "<<p.prenom<<endl<<" Email : "<<p.email;
        return os;
    }



    virtual void modifier() = 0;


};


#endif // Personne_H_INCLUDED
