#ifndef JUGE_H_INCLUDED
#define JUGE_H_INCLUDED
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Personne.h>

#include<iostream>
#include <string>
#include<vector>

using namespace std;


class juge : public Personne {

   string experience ;
   string domaine_expertise;

public:
    juge();
    juge(string ,string ,string ,int ,string ,string ) ;
    ~juge();

    friend ostream& operator<< (ostream& os,juge& j){
        cout << static_cast<Personne&>(j);
        cout<<endl<<" Experince : " ;
        os<< j.experience ;
        cout<<endl<<" Domaine d'expertise : " ;
        os<< j.domaine_expertise ;
        return os;
    }
    friend istream& operator>> (istream& is,juge& j){
    cin >> static_cast<Personne&>(j);
    cout<<endl<<" Saisir l'experience : " ;
    is>> j.experience ;
    cout<<endl<<" Saisir le domaine d'expertise : " ;
    is>> j.domaine_expertise ;
    return is ;
}
    void modifier();
};

#endif // JUGE_H_INCLUDED
