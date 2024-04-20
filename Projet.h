#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Equipe.h>
#include<map>

class Projet {
    static int nextID ;

    int Id_Projet ;
    string Titre_projet ;
    string Statut ;
    Equipe* equipe ;
    map <int, float> Notes ;


public :
    Projet () ;
    Projet (string , string ) ;
    virtual ~Projet() { };

    string gettitre() {return Titre_projet ;}
    Equipe* getEquipe() const {return equipe;}

    void setEquipe(Equipe* nouvelleEquipe) {equipe = nouvelleEquipe; }
    void setNotes (int idJuge,float note) { Notes[idJuge] = note; }
    void set_Titre_projet(string Titre){this->Titre_projet = Titre ; }
    void set_Statut(string Statut){this->Statut = Statut ; }

    virtual void Modifier_Projet ()  = 0 ;

    float Calculer_Note_final ()  ;

    friend istream& operator>>(istream& is, Projet& p ) ;
    friend ostream& operator<<(ostream& os , Projet& p ) ;

};



#endif // PROJET_H_INCLUDED
