#ifndef message_H_INCLUDED
#define message_H_INCLUDED


#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Date.h>
#include <iostream>
#include <string>
#include <vector>



using namespace std;

class message {
    int id;
    organisateur* auteur;
    string contenu;
    vector<organisateur> destinataires;
    Date Date_envoi;

public:
    message(){};

    message(int id, organisateur* auteur , string contenu, int nb_dest, string Date_envoi);



    message(const message &c)
    {
        auteur=c.auteur;
        contenu=c.contenu;
        Date_envoi=c.Date_envoi;
        for(unsigned i=0;i<c.destinataires.size();i++)
        {
            destinataires.push_back(c.destinataires[i]);
        }
    };

    ~message(){};

    friend istream& operator >>(istream& entree,message& c)
    {
        organisateur o;
        Date d;
        cout<<"Saisir id : "<<"endl";
        cin>>c.id;
        cin>>d;
        c.Date_envoi=d;

        cin>>o;
        c.auteur=&o;
        cout<<"Saisir le message"<<"endl";
        cin>>c.contenu;
        return entree ;

    };
    friend ostream& operator <<(ostream& sortie,message& c)
    {
        cout<<c.auteur->getnom();
        cout<<c.contenu;
        cout<<c.Date_envoi;
        return sortie ;
    };

    void ajouter_destin()
    {
        organisateur u;
        cin>>u;
        destinataires.push_back(u);
    };

    bool supprimer_dest(int id1)
    {
            for(unsigned i=0;i<destinataires.size();i++)
            {
                if(id1==destinataires[i].getid())
                {
                    destinataires.erase(destinataires.begin()+i);
                    return true;
                }
            }
            return false;
        };

    void afficher_dest()
    {
        for(unsigned i=0;i<destinataires.size()-1;i++)
        {
            for(unsigned j=0;j<destinataires.size()-i-1;j++)
            {
                if(destinataires[i].getnom ()>destinataires[j].getnom ())
                    swap(destinataires[j],destinataires[j+1]);
            }
        }
        for(unsigned i=0;i<destinataires.size();i++)
        {
            cout<<destinataires[i].getnom ()<<"endl";
        }

    }



};

#endif // message_H_INCLUDED
