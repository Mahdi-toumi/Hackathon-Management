
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Equipe.h>

using namespace std;


int Equipe::nextID = 1;

Equipe::Equipe( ) : Id_Equipe(nextID++){}

Equipe::Equipe(string nom) : Id_Equipe(nextID++), Nom_Equipe(nom), Chef_equipe(nullptr) {}

Equipe::Equipe(const Equipe& E) {
    this->Id_Equipe = E.Id_Equipe;
    this->Nom_Equipe = E.Nom_Equipe;
    this->Nom_Equipe = E.Nom_Equipe;
    this->Chef_equipe = E.Chef_equipe ;
    for (unsigned i = 0; i < E.Membres.size(); i++) {
        this->Membres.push_back(E.Membres[i]);
    }
}

Equipe::~Equipe() {
    for (unsigned i = 0; i < Membres.size(); i++) {
        delete Membres[i];
    }
    Membres.clear();
    Chef_equipe = nullptr;
}




ostream& operator<<(ostream& os, Equipe& e) {
    os << endl << " Id de l'equipe : " << e.Id_Equipe << endl;
    cout << endl << " Nom de l'equipe : ";
    os << e.Nom_Equipe << endl;
    if (e.Membres.size() >= 1) {
        cout << endl << " Affichage des membres : " << endl;
        for (unsigned i = 0; i < e.Membres.size(); i++) {
            cout << endl << " Membre numero " << i + 1 << " : " << endl;
            os << *e.Membres[i];
        }
    } else {
        cout << endl << " Pas encore de membres dans cette equipe." << endl;
    }
    return os;
}
//TERMINER

istream& operator>>(istream& is, Equipe& e) {

    cout << endl << " Saisir le nom de l'equipe : ";
    is >> e.Nom_Equipe;
    return is;

}
//TERMINER

Equipe& Equipe::operator=(const Equipe& E) {
    if (this != &E) {
        for (unsigned int i = 0; i < Membres.size(); i++) {
            delete Membres[i];
        }
        Membres.clear();

        for (unsigned int i = 0; i < E.Membres.size(); i++) {
            Participant* nouveauParticipant = new Participant(*E.Membres[i]);
            Membres.push_back(nouveauParticipant);
        }

        Id_Equipe = E.Id_Equipe;
        Nom_Equipe = E.Nom_Equipe;
        Chef_equipe = E.Chef_equipe ;
    }
    return *this;
}
//TERMINER




void Equipe::Modifier_Equipe() {
    int choix;
    string Q;
    do {
        cout << endl << "Veuillez choisir l'action a effectuer :" << endl;
        cout << "1 - Modifier le nom de l'equipe" << endl;
        cout << "2 - Ajouter un membre l'equipe" << endl;
        cout << "3 - Supprimer un membre l'equipe" << endl;
        cout << "0 - Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;
    } while (choix < 0 || choix > 3);

    switch (choix) {
        case 1:
            cout << endl << " Saisir le nouveau nom : ";
            cin >> Nom_Equipe;
            break;
        case 2:
            Ajouter_membre() ;
            break;
        case 3:
            Supprimer_membre() ;
            break;
        case 0:
            break;
    }
}
//TERMINER


void Equipe::Ajouter_membre() {
    int choix;
    if (nbr_Membres==5) {
        cout << " Equipe saturee " << endl ;
        return ;
    }
    Participant *p = new Participant;
    cout << " Saisir le participant a ajouter : " << endl;
    cin >> *p;
    for (unsigned i = 0; i < Membres.size(); i++) {
        if (Membres[i]->getnom() == p->getnom() && Membres[i]->getprenom() == p->getprenom() &&  Membres[i]->getemail() == p->getemail() && Membres[i]->getage() == p->getage()) {
            cout << " Le membre '" << p->getnom() << " " << p->getprenom() << "' est deja dans cette equipe ." << endl;
            do {
                cout << endl << " Choisissez : 1 - Ajouter un autre membre       0 - Annuler   ";
                cin >> choix;
            } while (choix != 1 && choix != 0);
            if (choix == 1) {
                this->Ajouter_membre();
            }
            delete p;
            return;
        }
    }
    Membres.push_back(p);
    nbr_Membres+=1 ;
}
//TERMINER

void Equipe::Ajouter_membre(Participant* p) {
    if (nbr_Membres==5) {
        cout << " Equipe saturee " << endl ;
        return ;}
    for (unsigned i = 0; i < Membres.size(); i++) {
        if (Membres[i]->getnom() == p->getnom() && Membres[i]->getprenom() == p->getprenom() &&  Membres[i]->getemail() == p->getemail() && Membres[i]->getage() == p->getage()) {
            cout << " Le membre '" << p->getnom() << " " << p->getprenom() << "' est deja dans l'equipe." << endl;
            return;
        }
    }
    Membres.push_back(p);
    nbr_Membres+=1 ;

}
//TERMINER

void Equipe::Supprimer_membre() {
    int choix;
    if (Membres.empty()) {
        cout << " Aucun membre a supprimer de l'equipe." << endl;
        return;
    }
    cout << " Affichage des membres :" << endl;
    for (unsigned i = 0; i < Membres.size(); ++i) {
        cout << " Membre " <<i + 1 << ":  " <<endl << Membres[i] << endl;
    }
    cout << " Entrez le numero du membre a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int>(Membres.size())) {
        Membres.erase(Membres.begin() + choix - 1);
        cout << " Membre supprime avec succes." << endl;
        nbr_Membres-=1 ;

    } else {
        cout << " Choix invalide." << endl; }

}
//TERMINER


void Equipe::Supprimer_membre(string nom, string prenom) {
    if (Membres.empty()) {
        cout << " Aucun membre a supprimer de l'equipe." << endl;
        return;}

    vector<Participant*>::iterator it ;
    bool trouve = false;
    for (it=Membres.begin() ; it!=Membres.end() ; it++) {
        if ((*it)->getnom() == nom && (*it)->getprenom() == prenom) {
            delete *it ;
            Membres.erase(it);
            nbr_Membres-=1 ;
            trouve = true;
            cout << " Membre " << nom << " " << prenom << " supprime avec succes." << endl;
            if ((Chef_equipe->getnom() == nom) && (Chef_equipe->getprenom() == prenom )) {
                this->Chef_equipe = nullptr ;
            }
            break;
        }
    }

    if (trouve == false) {
        cout << "Aucun membre trouve avec le nom " << nom << " et le prenom " << prenom << "." << endl;

    }
}
//TERMINER

bool Equipe::chercher_membre(string nom, string prenom) {
    for (unsigned j = 0; j < Membres.size(); ++j) {
            if (Membres[j]->getnom() ==nom && Membres[j]->getprenom() == prenom ) {
                return true ;
            }
    }
    return false ;

}
//TERMINER






void Equipe::Assigner_chef(Participant* p) {
    int choix;
    if (Chef_equipe != nullptr) {
        cout << " Un chef d'equipe est deja designe." << endl;
        cout << " Le chef actuel est : " << endl;
        cout << *Chef_equipe;

        cout << endl << " Voulez-vous le remplacer ? Tapez (1) pour oui, (0) pour non : ";
        cin >> choix;
        if (choix == 1) {
            Chef_equipe = p;
            cout << endl << " Nouveau chef d'equipe designe avec succes." << endl;
        } else {
            cout << endl << " Operation annulee. Le chef d'equipe reste inchange." << endl;
        }
    } else {
        Chef_equipe = p;
        Ajouter_membre(p);
        cout << endl << " Chef d'equipe Assignee avec succes." << endl;
    }
}
//TERMINER

 bool Equipe::estChefEquipe(Participant * p) {
           return(Chef_equipe->getnom() == p->getnom() && Chef_equipe->getprenom() == p->getprenom())  ;
    }
//TERMINER

