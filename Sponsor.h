#ifndef SPONSOR_H_INCLUDED
#define SPONSOR_H_INCLUDED

#include<iostream>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

class sponsor {
    static int nextID;

    int id;
    string nom;
    string email;
    double tel;
    float montant_de_sponsoring;
    list<string> produits_sponso;

public:
    sponsor();
    sponsor(string, string, double, float);
    ~sponsor();

    int get_id_sponosr() { return id; }
    float getmontant() {return montant_de_sponsoring ;}
    string getnom() { return nom; }

    void modifier_sponsor();

    void ajouter_produit() ;

    void spprimer_produit() ;



    friend istream& operator >>(istream& entree, sponsor& s);
    friend ostream& operator <<(ostream& sortie, sponsor& s);

};

#endif // SPONSOR_H_INCLUDED
