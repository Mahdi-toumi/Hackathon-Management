#ifndef HACKATHON_H_INCLUDED
#define HACKATHON_H_INCLUDED
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Participant.h>
#include<C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Juge.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Organisateur.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Equipe.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Projet_technologique.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Projet_design.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Equipe_organisatrice.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Date.h>
#include<C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Sponsor.h>




#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;

class Hackathon
{
    static int nextID ;

    int Id;
    string titre;
    string theme;
    Date date;
    string lieu;

    vector<Participant*> participants;
    vector<juge*> juges;
    vector<organisateur*> organisateurs;
    vector<Equipe*> equipes;
    vector<Projet_technologique*> projets_technologique;
    vector<Projet_design*> projets_design;
    vector<Equipe_organisatrice*> equipes_organisatrice;
    vector<sponsor*> sponsors;
    map<int,float> Budgets ;


public:
    Hackathon();
    Hackathon(string titre,string theme,Date date,string lieu);
    Hackathon(const Hackathon&);
    ~Hackathon(){};



    friend istream& operator>>(istream& is , Hackathon& h){
        cout << endl << "Saisir le titre du hackathon : ";
        is >> h.titre;
        cout << endl << "Saisir le theme du hackathon : ";
        is >> h.theme;
        cout << endl << "Saisir la date du hackathon : ";
        is >> h.date;
        cout << endl << "Saisir le lieu du hackathon : ";
        is >> h.lieu;
        return is ;
    }
    friend ostream& operator<<(ostream& os, const Hackathon& h){
    os << "ID Hackathon : " << h.Id << endl;
    os << "Titre : " << h.titre << endl;
    os << "Theme : " << h.theme << endl;
    os << "Lieu : " << h.lieu << endl;

    return os;
}
    void modifier();



    void Afficher_nom_participants ();
    void Afficher_nom_juges ();
    void Afficher_nom_organisateurs ();
    void Afficher_nom_equipes ();
    void Afficher_classement_projet () ;
    void Afficher_equipes_organisatrice() ;
    void afficher_sponsors() ;



    void ajouter_participant(Participant*);
    void ajouter_juge(juge*);
    void ajouter_organisateur(organisateur*);
    void ajouter_equipe(Equipe *);
    void ajouter_equipe(Participant* ) ;
    void ajouter_projet(Participant*);
    void ajouter_equipes_organisatrice() ;
    void ajouter_sponsor() ;



    void supprimer_participant();
    void supprimer_juge();
    void supprimer_organisateur();
    void supprimer_equipe();
    void supprimer_projet () ;
    void supprimer_equipe_organisatrice() ;
    void supprimer_sponsor() ;



    Participant* rechercher_Participant (string  , string ) ;
    juge* rechercher_juge (string , string) ;
    organisateur* rechercher_organisateur (string , string) ;
    Equipe* rechercher_equipe(string )  ;
    Projet_technologique* rechercher_projet_technologique(string ) ;
    Projet_design* rechercher_projet_design(string ) ;
    Equipe_organisatrice* rechercher_equipe_organisatrice(string ) ;
    sponsor* rechercher_sponsor(string nom);



    void supprimer_participant_dans_equipe(Participant* ) ;
    void supprimer_organisateur_dans_equipe_organisatrice(organisateur*  )  ;
    void ajouter_participant_equipe(Participant*) ;
    void ajouter_organisateur_equipe_organisatrice(organisateur* ) ;



    void ajouter_note_projets (juge*);
    void Annoncer_gagnants () ;
    float Calculer_budget () ;



    void inscription() ;
    int identifier(string& , string&) ;



    void ajouter_equipes_organisatrice(Equipe_organisatrice* e) {
        equipes_organisatrice.push_back(e);
    }
    void ajouter_projet(Projet_design* e) {
        projets_design.push_back(e);
    }
    void ajouter_projet(Projet_technologique* e) {
        projets_technologique.push_back(e);
    }
    void ajouter_sponsor(sponsor* s){
         sponsors.push_back(s);
         Budgets[s->get_id_sponosr()]=s->getmontant() ;
    }
    void Remplir_donnes ();
};


#endif // HACKATHON_H_INCLUDED
