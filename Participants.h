#ifndef PARTICIPANTS_H_INCLUDED
#define PARTICIPANTS_H_INCLUDED
#include <vector>
#include <string>

using namespace std;


class Participant {
    int age ;
    vector <string> competence  ;

public :
    Participant () ;
    int getage(){return age ; } ; // juste bech nchouf 7aja
    void Saisir_Particpant () ;
    void Afficher_Participant () ;
    void Modifier_Participant () ;
    void Ajouter_competence (string) ;
    void Supprimer_competence (string) ;
//    void Creer_equipe () ;
//    void Rejoindre_equipe () ;
};



#endif // PARTICIPANTS_H_INCLUDED
