#ifndef PROJET_DESIGN_H_INCLUDED
#define PROJET_DESIGN_H_INCLUDED
#include <vector>
#include <string>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Projet.h>


using namespace std;


class Projet_design : public Projet {
    vector <string> Logiciels ;
    string Concept ;
public :
    Projet_design (){}
    Projet_design (string , string , string ) ;

    void Modifier_Projet () ;

    void Ajouter_logiciel () ;
    void Supprimer_logiciel () ;

    void attribuer_note(int idJuge) ;

    friend istream& operator>>(istream& is, Projet_design& p ) ;
    friend ostream& operator<<(ostream& os , Projet_design& p ) ;
};



#endif // PROJET_DESIGN_H_INCLUDED
