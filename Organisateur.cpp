



#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Organisateur.h>

void organisateur::modifier() {
    int choix;
    string Q;
    do {
        cout << endl << "Veuillez choisir l'action à effectuer :" << endl;
        cout << "1 - Modifier le nom" << endl;
        cout << "2 - Modifier le prenom" << endl;
        cout << "3 - Modifier l'email" << endl;
        cout << "4 - Modifier la tache" << endl;
        cout << "0 - Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;
    } while (choix < 0 || choix > 4);

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
        cout << endl << "Saisissez la nouvelle tache : ";
        cin >> tache;
        break;

    case 0:
        cout << "Fin de la modification." << endl;
        break;
    }
}
//TERMINER
