#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>

class Date
{
    int jour;
    int mois;
    int annee;

public:
    Date(){} // constructeur de la classe date
    Date(int jour , int mois , int annee):jour(jour),mois(mois),annee(annee) {};
    ~Date(){};
    friend istream& operator >>(istream& is,Date& d)
    {

        cout<<endl<<" Entrer le jour : ";
        is>>d.jour;
        cout<<" Entrer le mois : ";
        is>>d.mois;
        cout<<" Entrer l'annee : ";
        is>>d.annee;
        return is;
    }

    friend ostream& operator <<(ostream& os,Date& d)
    {os <<d.jour<<"/"<<d.mois<<"/"<<d.annee<<endl ;
        return os;}


};


#endif // DATE_H_INCLUDED
