#include<iostream>
#include <string>
#include<vector>
#include "utilisateur.h"
using namespace std;

utilisateur::utilisateur(int id,string nom,string prenom,string email)
{
    this->id_user=id;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
}

utilisateur::utilisateur(const utilisateur& u )
{
    hackathon* h;
    this->id_user=u.id_user;
    this->nom=u.nom;
    this->prenom=u.prenom;
    this->email=u.email;
    if (u.hackathons_prec.size()>0) {
        for (int i = 0; i < u.hackathons_prec.size(); i++)
        { if(typeid(*u.hackathons_prec[i] == typeid(*hackathon)) }
    };
}