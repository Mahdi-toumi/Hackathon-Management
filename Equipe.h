#ifndef EQUIPE_H_INCLUDED
#define EQUIPE_H_INCLUDED

#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Participant.h>
#include <algorithm>

class Equipe {
    static int nextID;


    int Id_Equipe ;
    string Nom_Equipe ;
    vector <Participant*> Membres ;
    Participant* Chef_equipe ;
    int nbr_Membres ;

public :
    Equipe () ;
    Equipe (string) ;
    Equipe (const Equipe&) ;
    ~Equipe();

    string getnom () {return Nom_Equipe ;}
    void setChef_equipe (Participant* Chef_equipe) {this->Chef_equipe = Chef_equipe ;}



    void Ajouter_membre () ;
    void Ajouter_membre(Participant* p) ;

    void Supprimer_membre () ;
    void Supprimer_membre(string , string ) ;

    bool chercher_membre(string , string ) ;
    bool estChefEquipe(Participant *) ;

    Equipe & operator=(const Equipe&) ;
    friend ostream& operator<<(ostream&, Equipe& );
    friend istream& operator>>(istream&, Equipe& );

    void Assigner_chef (Participant * ) ;
    void Modifier_Equipe () ;



};


#endif // EQUIPE_H_INCLUDED
