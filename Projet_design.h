#ifndef PROJET_DESIGN_H_INCLUDED
#define PROJET_DESIGN_H_INCLUDED

class Projet_design : protected Projet {
    string <vector> Logiciels ;
    string Concept ;
public :
    Projet_design () ;
    void Saisir_Projet_design () ;
    void Afficher_Projet_design () ;
    void Modifier_Projet_design () ;
};

#endif // PROJET_DESIGN_H_INCLUDED
