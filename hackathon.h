#include<iostream>
#include <string>
#include<vector>
#include"sponsor_date.h"
using namespace std;

class hackathon
{
    int id;
    string titre;
    string theme;
    int budget;
    date date_deb;
    date date_fin;
    string lieu;
    vector<sponsor*> sponsor;

public:
    hackathon(){};
    hackathon(int id, string titre,string theme, int budget,string date_deb,string date_fin,string lieu,int nb_equipes,int nb_sponors);
    hackathon(const hackathon&);
    ~hackathon(){};
    void saisir();
    void afficher();
    void modifier();
    void ajouter_equipe(equipe_organisatrice);
    void supprimer_equipe(equipe_organisatrice);
    void ajouter_sponsor(string);
    void supprimer_sponsor(string);
};