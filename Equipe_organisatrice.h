#ifndef Equipe_organisatrice_H_INCLUDED
#define Equipe_organisatrice_H_INCLUDED
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Organisateur.h>


class Equipe_organisatrice
{
    static int nextID ; // initialisation d'un id statique puis il donne des id uniques et consecutif a chaque objet de la classe

    int Id;


    int nb_de_membres ;
    string role ;
    vector<organisateur*> membres;

public:

    Equipe_organisatrice();// constructeur de la classe 
    Equipe_organisatrice(string );
    Equipe_organisatrice(const Equipe_organisatrice&);
    ~Equipe_organisatrice();

    string getrole() {return role ; }// fonction qui retourne la valeur de l'attribut role

    void Modifier_Equipe_organisatrice() ;// fonction qui sert a modifer la valeur de l'un des attributs de la classe 


    friend ostream& operator<<(ostream& os, Equipe_organisatrice& e) {
        os << endl << " Id de l'equipe : " << e.Id << endl;
        cout << endl << " Role de l'equipe : ";
        os << e.role << endl;
        if (e.membres.size() >= 1) {
            cout << endl << " Affichage des membres : " << endl;
            for (unsigned i = 0; i < e.membres.size(); i++) {
                cout << endl << " Membre numero " << i + 1 << " : " << endl;
                os << *e.membres[i];
            }
        } else {
            cout << endl << " Pas encore de membres dans cette equipe." << endl;
        }
        return os;
}


    friend istream& operator>>(istream& is, Equipe_organisatrice& e) {
        cout << endl << " Saisir le role de l'equipe : ";
        is >> e.role;
        return is;

}


    void Ajouter_membre(); // ajouter un membre a la liste ( vector) des organisateurs
    void Ajouter_membre(organisateur* o);
    void Supprimer_membre();// supprimer un membre a la liste ( vector) des organisateurs
    void Supprimer_membre(string,string); 
    bool chercher_membre(string , string );

};


#endif // Equipe_organisatrice_H_INCLUDED
