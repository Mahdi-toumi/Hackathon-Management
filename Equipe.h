#ifndef EQUIPE_H_INCLUDED
#define EQUIPE_H_INCLUDED
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Participants.h>

#include <vector>
#include <string>
using namespace std;

class Equipe {
    int Id_Equipe ;
    string Nom_Equipe ;
    vector <Participant*> Membres ;

public :
    Equipe () ;
    Equipe (const Equipe&) ;
    ~Equipe();
    void Saisir_Equipe () ;
    void Afficher_Equipe () ;
    void Modifier_Equipe () ;
    void Ajouter_membre (Participant * ) ;
    void Supprimer_membre (Participant) ;
//    void Creer_projet () ;

};


#endif // EQUIPE_H_INCLUDED
