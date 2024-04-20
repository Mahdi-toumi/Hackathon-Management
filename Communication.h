#ifndef COMMUNICATION_H_INCLUDED
#define COMMUNICATION_H_INCLUDED
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Date.h>
#include <iostream>
#include <string>
#include <vector>



using namespace std;

class communication {
    int id;
    organisateur* auteur;
    string contenu;
    vector<organisateur> destinataires;
    Date date_envoi;

public:
    communication();

    communication(int id, utilisateur auteur, string contenu, int nb_dest, string date_envoi);


    communication(const communication &c)
    {
        auteur=c.auteur;
        contenu=c.contenu;
        date_envoi=c.date_envoi;
        for(int i=0;i<c.destinataires.size();i++)
        {
            destinataires.push_back(c.destinataires[i]);
        }
    };

    ~communication();

    friend istream& operator >>(istream& entree,communication& c)
    {
        organisateur* o;
        date d;
        cout<<"saisir id"<<"endl";
        cin>>c.id;
        cin>>d;
        c.date_envoi=d;

        cin>>*o;
        c.auteur=o;
        cout<<"saisir le message"<<"endl";
        cin>>c.contenu;

    };
    friend ostream& operator <<(ostream& sortie,communication& c)
    {
        cout<<c.auteur->get_nom();
        cout<<c.contenu;
        cout<<c.date_envoi;
    };

    void ajouter_destin()
    {
        organisateur u;
        cin>>u;
        destinataires.push_back(u);
    };

    bool supprimer_dest(int id1)
    {
            for(int i=0;i<destinataires.size();i++)
            {
                if(id1==destinataires[i].get_id())
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
                if(destinataires[i].get_nom()>destinataires[j].get_nom())
                    swap(destinataires[j],destinataires[j+1]);
            }
        }
        for(unsigned i=0;i<destinataires.size();i++)
        {
            cout<<destinataires[i].get_nom()<<"endl";
        }

    }



};


#endif
