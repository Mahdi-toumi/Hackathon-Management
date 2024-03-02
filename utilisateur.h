#include<iostream>
#include <string>
#include<vector>
#include"hackathon.h"
using namespace std;

class utilisateur
{
protected:
    int id_user;
    string nom;
    string prenom;
    string email;
    vector<hackathon*> hackathons_prec;

public:
    utilisateur(){};
    utilisateur(int id,string nom,string prenom,string email);
    utilisateur(const utilisateur& );
    ~utilisateur(){};
    void saisir();
    void afficher();
    void modifier();
    void ajouterhack();
    void supprimer();
};

class juge:public utilisateur
{
   string expereince ;
   string domaine_expertise;

public:
    juge(){};

    juge(int id,string nom,string prenom,string email,int nb_hack,string exp,string domaine_expertise) : utilisateur(id, nom,prenom, email, nb_hack)
    {this->expereince=exp;
    this->domaine_expertise=domaine_expertise;};

    juge(const juge& );
    ~juge(){};
    void saisir();
    void afficher();
    void modifier();
};

class organisateur:public utilisateur
{
    string tache;
public:
    organisateur(){};

    organisateur(int id,string nom,string prenom,string email,int nb_hack,string tache):utilisateur(id, nom,prenom, email, nb_hack)
    {this->tache=tache;};

    organisateur(const organisateur&);
    ~organisateur(){};
    void saisir();
    void afficher();
    void creer_equipe();
    void rejoindre_equipe();
};


class equipe_organisatrice
{
    int id;
    vector<organisateur*> membres;

public:
    equipe_organisatrice(){};
    equipe_organisatrice(int nb_de_membres);
    equipe_organisatrice(const equipe_organisatrice&);
    ~equipe_organisatrice(){};
    void saisir();
    void afficher();
    void ajouter_membre(organisateur);
    void supprimer_membre(organisateur);

};
//-----------------------------------------------------
class communication
{
    int id;
    utilisateur auteur;
    string contenu;
    vector<utilisateur> destinataires;
    date date_envoi;

public:
    communication();
    communication(int id,utilisateur auteur,string contenu,int nb_dest,string date_envoi);
    communication(const communication&);
    ~communication();
    void afficher();
    void modifier();

};
