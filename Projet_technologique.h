#ifndef PROJET_TECHNOLOGIQUE_H_INCLUDED
#define PROJET_TECHNOLOGIQUE_H_INCLUDED

#include <string>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Projet.h>

class Projet_technologique : public Projet {
    string Domaine ;
    vector <string> Technologie_utulisees ;

public :


    Projet_technologique () {}
    Projet_technologique (string , string , string ) ;
    ~Projet_technologique () {};

    void Modifier_Projet () ;

    void Ajouter_technologie () ;
    void Supprimer_technologie () ;

    void attribuer_note(int idJuge) ;


    friend istream& operator>>(istream& is, Projet_technologique& p ) ;
    friend ostream& operator<<(ostream& os , Projet_technologique& p ) ;
};


#endif // PROJET_TECHNOLOGIQUE_H_INCLUDED
