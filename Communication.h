#ifndef message_H_INCLUDED
#define message_H_INCLUDED

#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Hackathon.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Date.h>
#include <iostream>
#include <string>
#include <vector>



using namespace std;

class message {
    static int nextId ;

    int id;
    organisateur* auteur;
    string contenu;
    int destinataires;
    Date Date_envoi;

public:
    message() ; /// constructeur de la classe communication

    message( string contenu ) ;




    ~message(){} /// destructeur

    friend istream& operator >>(istream& entree,message& c) ;

    friend ostream& operator <<(ostream& sortie,message& c);

    int getdestinataires() { return destinataires ;}


    void envoyer_message (Hackathon  , vector<message*> ) ; /// Envoi d'un message a un organisateur lors d'un hackathon

    void afficher_messages (   organisateur* o, vector<message*> Message   ); /// Affichage des messages destines a un organisateur




    void creerFichier(const string& ) ; /// Ouverture du fichier

    void remplirDansFichier(const string&) ;  /// remplissage du fichier

    void lireFichier(const string&); /// affichage du fichier


};

#endif // message_H_INCLUDED
