#include "C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Sponsor.h"

int sponsor::nextID = 1;

sponsor::sponsor() {
    id = nextID++;
}

sponsor::sponsor(string n, string e, double t, float m) {
    id = nextID++;
    nom = n;
    email = e;
    tel = t;
    montant_de_sponsoring = m;
}

sponsor::~sponsor() {}

void sponsor::modifier_sponsor() {
    int choix;

    cout << "Que souhaitez-vous modifier ?" << endl;
    cout << "1 - ID" << endl;
    cout << "2 - Nom" << endl;
    cout << "3 - Email" << endl;
    cout << "4 - Telephone" << endl;
    cout << "5 - Montant de sponsoring" << endl;
    cout << "6 - Ajouter un produit de sponsoring" << endl;
    cout << "7 - Supprimer un produit de sponsoring" << endl;
    cout << "0 - Quitter" << endl;
    do{
        cout << "Votre choix : ";
        cin >> choix;
    } while (choix < 0 || choix > 7);


    switch (choix) {
        case 1: {
            cout << endl<< "Entrez le nouvel ID : ";
            cin >> id;
            break;
        }
        case 2: {
            cout << endl<< "Entrez le nouveau nom : ";
            cin >> nom;
            break;
        }
        case 3: {
            cout << endl<< "Entrez le nouvel email : ";
            cin >> email;
            break;
        }
        case 4: {
            cout << endl<< "Entrez le nouveau numero de telephone : ";
            cin >> tel;
            break;
        }
        case 5: {
            cout << endl<< "Entrez le nouveau montant de sponsoring : ";
            cin >> montant_de_sponsoring;
            break;
        }
        case 6: {
            this->ajouter_produit() ;
            break;
        }
        case 7: {
            this->spprimer_produit() ;
            break;
        }
        case 0: {
            break;
        }
    }
}


istream& operator >>(istream& is, sponsor& s) {
    cout << "Saisir le nom : ";
    is >> s.nom;
    cout << "Saisir l'email : ";
    is >> s.email;
    cout << "Saisir le numero de telephone : ";
    is >> s.tel;
    cout << "Saisir le montant de sponsoring : ";
    is >> s.montant_de_sponsoring;
    return is;
}

ostream& operator <<(ostream& os, sponsor& s) {
    list<string>::iterator it ;
    os << " Nom : " << s.nom << endl
        << " Email : " << s.email << endl
        << " Tel : " << s.tel << endl
        << " Montant de sponsoring : " << s.montant_de_sponsoring << endl;
        cout <<"Prosuits de sponsoring :   ";
        if(!s.produits_sponso.empty()){
            for (it=s.produits_sponso.begin() ; it!=s.produits_sponso.end() ; it++) {
                os << *it <<" - "<<"\t";
            }
        }
        else cout <<"Pas encore de prosuits de sponsoring "<<endl;

    cout << endl ;
    return os;
}


void sponsor::ajouter_produit() {
    list<string>::iterator it ;
    int choix, K = 0;
    string prod;
    cout << endl << " Saisir un produit a ajouter : ";
    cin >> prod;

    for (it=produits_sponso.begin() ; it!=produits_sponso.end() ; it++) {
        if (*it == prod) {
            cout << endl << " La produit existe deja." << endl;
            K = 1;
            break;
        }
    }

    if (K == 0) {
        produits_sponso.push_back(prod);
    } else {
        do {
            cout << endl << "Veuillez choisir : " << endl;
            cout << "1 - Ajouter une autre produit" << endl;
            cout << "0 - Annuler" << endl;
            cin >> choix;
        } while (choix != 0 && choix != 1);

        if (choix == 1) {
            this->ajouter_produit();
        }
    }

}
void sponsor::spprimer_produit() {
    list<string>::iterator it ;
    if (produits_sponso.empty()) {
        cout << "Aucune produit a supprimer." << endl;
        return;
    }

    cout << "Produits actuelles :" << endl;
    for (it=produits_sponso.begin() ; it!=produits_sponso.end() ; it++) {
        cout <<"1- "<< *it <<"\t";
    }
    cout<<endl ;

    int choix;
    cout <<endl<< "Entrez le numero du produit a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int>(produits_sponso.size())) {
        it = produits_sponso.begin();
        advance(it, choix - 1);
        produits_sponso.erase(it);
        cout << "Produits supprimee avec succes." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }

}
