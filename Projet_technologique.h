#ifndef PROJET_TECHNOLOGIQUE_H_INCLUDED
#define PROJET_TECHNOLOGIQUE_H_INCLUDED

class Projet_technologique : protected Projet {
    string Domaine ;
    vector <string> Technologie_utulisees ;

public :
    Projet_technologique () ;
    void Saisir_Projet_technologique () ;
    void Afficher_Projet_technologique () ;
    void Modifier_Projet_technologique () ;
    void Ajouter_technologie (string) ;
    void Supprimer_technologie (string) ;

};


#endif // PROJET_TECHNOLOGIQUE_H_INCLUDED
