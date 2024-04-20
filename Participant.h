#ifndef PARTICIPANTS_H_INCLUDED
#define PARTICIPANTS_H_INCLUDED
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Personne.h>

#include <list>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;


class Participant : public Personne {
    int age ;
    list <string> competence  ;

public :
    Participant (){} ;
    Participant (string , string , string , int ) ;
    ~Participant (){} ;


    int getage (){return age ; }

    void modifier () ;
    void Ajouter_competence () ;
    void Supprimer_competence () ;


    friend ostream& operator<<(ostream&, Participant& );
    friend istream& operator>>(istream&, Participant& );

    void remplirFichier(const string& nomFichier);
    void afficherFichier(const string& nomFichier);
    void ouvrirFichier(const string& nomFichier);
    void viderFichier(const string& nomFichier);
};



#endif // PARTICIPANTS_H_INCLUDED
