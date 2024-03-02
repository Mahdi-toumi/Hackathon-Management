#include<iostream>
#include <string>
#include<vector>

using namespace std;

//---------------------------------------------------------

class date
{
    int jour;
    int mois;
    int année;

public:
    date();
    ~date();
    void saisir();
    void afficher();
};

//---------------------------------------------------------

class sponsor
{
    int id;
    string nom;
    string email;
    int tel;
    float montant_de_sponosring;

};



