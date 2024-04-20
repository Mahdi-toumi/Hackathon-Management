
#include<C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Personne.h>
#include <iostream>
#include <string>

using namespace std;


int Personne::nextID = 1;

Personne::Personne() : Id_personne(nextID++) {}
Personne::Personne(string nom , string prenom, string email) :Id_personne(nextID++) , nom(nom), prenom(prenom), email(email) {}



Personne::Personne(const Personne& p ){
    this->Id_personne=p.Id_personne;
    this->nom=p.nom;
    this->prenom=p.prenom;
    this->email=p.email;
}






