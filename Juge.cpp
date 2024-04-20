#include<iostream>
#include <string>
#include<vector>
#include<C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Juge.h>

using namespace std;

juge::juge(){}
juge::juge (string nom   , string prenom  , string email   , int age , string experience , string domaine_expertise): Personne(nom  ,  prenom ,  email ) {
    this->experience=experience;
    this->domaine_expertise=domaine_expertise;
}



juge::~juge(){}


void juge::modifier() {
    int choix;
    string Q;
    do {
        cout << endl << "Veuillez choisir l'action a effectuer :" << endl;
        cout << "1 - Modifier le nom" << endl;
        cout << "2 - Modifier le prenom" << endl;
        cout << "3 - Modifier l'email" << endl;
        cout << "4 - Modifier l'experience" << endl;
        cout << "5 - Modifier le domaine d'expertise" << endl;
        cout << "0 - Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;
    } while (choix < 0 || choix > 5);

    switch (choix) {
        case 1:
            cout << endl << "Saisissez le nouveau nom : ";
            cin >> Q;
            this->set_nom(Q);
            break;
        case 2:
            cout << endl << "Saisissez le nouveau prenom : ";
            cin >> Q;
            this->set_prenom(Q);
            break;
        case 3:
            cout << endl << "Saisissez le nouvel email : ";
            cin >> Q;
            this->set_email(Q);
            break;
        case 4:
            cout << endl << "Saisissez la nouvelle experience : ";
            cin >> experience;
            break;
        case 5:
            cout << endl << "Saisissez le nouveau domaine d'expertise : ";
            cin >> domaine_expertise;
            break;
        case 0:
            cout << "Fin de la modification." << endl;
            break;
    }
}
//TERMINER
