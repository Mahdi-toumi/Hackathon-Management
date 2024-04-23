#ifndef SPONSOR_H_INCLUDED
#define SPONSOR_H_INCLUDED

#include<iostream>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

class sponsor {
    static int nextID; // pour generer des id consecutifs et uniques

    int id;
    string nom;
    string email;
    double tel;
    float montant_de_sponsoring;
    list<string> produits_sponso;

public:
    sponsor(); // constructeur de la classe sponsor 
    sponsor(string, string, double, float);
    ~sponsor(); // destructeur de la classe sponosr

    int get_id_sponosr() { return id; } // retourne la valeur de l'id 
    float getmontant() {return montant_de_sponsoring ;} //retourne la valeur du montant de sponsoring 
    string getnom() { return nom; } // retourne le'attribut nom 

    void modifier_sponsor(); // fpnction qui modifie l'un des attributs des sponsors 

    void ajouter_produit() ; // fonction qui ajoute des produits a l'attribut produits_sponso

    void spprimer_produit() ; // fonction qui supprime des produits de la liste des produits 



    friend istream& operator >>(istream& entree, sponsor& s);
    friend ostream& operator <<(ostream& sortie, sponsor& s);

};

#endif // SPONSOR_H_INCLUDED
