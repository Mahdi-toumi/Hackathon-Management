#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

#include <vector>
#include <string>

class Projet {
protected :

    int Id_Projet ;
    string Titre_projet ;
    Equipe Equipe ;
    string Statut ;
    vector <float> Notes ;

public :
    Projet () ;
    virtual void Saisir_Projet () ;
    virtual void Afficher_Projet () ;
    virtual void Modifier_Projet () ;
    float Note_final () ;
};



#endif // PROJET_H_INCLUDED
