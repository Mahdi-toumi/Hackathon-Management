#include<C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Equipe_organisatrice.h>

int Equipe_organisatrice:: nextID = 1 ;

Equipe_organisatrice::Equipe_organisatrice():Id(nextID++){}

Equipe_organisatrice::Equipe_organisatrice( string role ): Id(nextID++),role(role) {}

Equipe_organisatrice::Equipe_organisatrice(const Equipe_organisatrice& E ){
    this->Id = E.Id;
    this->nb_de_membres = E.nb_de_membres;
    this->role = E.role;
    for (unsigned i = 0; i < E.membres.size(); i++) {
        this->membres.push_back(E.membres[i]);
    }
}

Equipe_organisatrice::~Equipe_organisatrice(){
    for (unsigned i = 0; i < membres.size(); i++) {
        delete membres[i];
    }
    membres.clear();
}



void Equipe_organisatrice::Modifier_Equipe_organisatrice() {

    cout << endl << " Saisir le nouveau role : ";
    cin >> role;

}

void Equipe_organisatrice::Ajouter_membre() {
        int choix;
        organisateur *o = new organisateur;
        cout << "Saisir l'organisateur a ajouter : " << endl;
        cin >> *o;
        for (unsigned i = 0; i < membres.size(); i++) {
            if (membres[i]->getnom() == o->getnom() && membres[i]->getprenom() == o->getprenom() &&  membres[i]->getemail() == o->getemail()) {
                cout << "Le membre '" << o->getnom() << " " << o->getprenom() << "' est déjà dans l'équipe." << endl;
                do {
                    cout << endl << "Choisissez : 1 - Ajouter un autre membre       0 - Annuler   ";
                    cin >> choix;
                } while (choix != 1 && choix != 0);
                if (choix == 1) {
                    this->Ajouter_membre();
                }
                delete o;
                return;
            }
        }
        membres.push_back(o);
        nb_de_membres +=1 ;
    }

void Equipe_organisatrice::Ajouter_membre(organisateur* o) {
        for (unsigned i = 0; i < membres.size(); i++) {
            if (membres[i]->getnom() == o->getnom() && membres[i]->getprenom() == o->getprenom() &&  membres[i]->getemail() == o->getemail() ) {
                cout << "Le membre '" << o->getnom() << " " << o->getprenom() << "' est déjà dans l'équipe." << endl;
                return;
            }
        }
        membres.push_back(o);
        nb_de_membres +=1 ;
    }

void Equipe_organisatrice::Supprimer_membre() {
    int choix;
    if (membres.empty()) {
        cout << "Aucun membre a supprimer de l'equipe." << endl;
        return;
    }
    cout << "Affichage des membres :" << endl;
    for (unsigned i = 0; i < membres.size(); ++i) {
        cout << "Membre " <<i + 1 << ":  " <<endl << membres[i] << endl;
    }
    cout << "Entrez le numero du membre a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int>(membres.size())) {
        membres.erase(membres.begin() + choix - 1);
        cout << "Membre supprime avec succes." << endl;
        nb_de_membres -=1 ;
    } else {
        cout << "Choix invalide." << endl; }




}

void Equipe_organisatrice::Supprimer_membre(string nom, string prenom) {
    if (membres.empty()) {
        cout << "Aucun membre à supprimer de l'équipe." << endl;
        return;
    }
    vector<organisateur*>::iterator it ;
    bool trouve = false;
    for (it=membres.begin() ; it!=membres.end() ; it++) {
        if ((*it)->getnom() == nom && (*it)->getprenom() == prenom) {
            delete *it ;
            membres.erase(it);
            nb_de_membres -=1 ;
            trouve = true;
            cout << "Membre " << nom << " " << prenom << " supprime avec succes." << endl;
            break;
        }
    }

    if (trouve == true) {
        cout << "Aucun membre trouve avec le nom " << nom << " et le prenom " << prenom << "." << endl;
    }
}

bool Equipe_organisatrice::chercher_membre(string nom, string prenom) {
    for (unsigned j = 0; j < membres.size(); ++j) {
            if (membres[j]->getnom() ==nom && membres[j]->getprenom() == prenom ) {
                return true ;
            }
    }
    return false ;

}



