
#include <algorithm>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Hackathon.h>


int Hackathon::nextID = 1 ;




Hackathon::Hackathon():Id(nextID++) {} ;

Hackathon::Hackathon(string titre,string theme, Date date ,string lieu ):Id(nextID++),titre(titre),theme(theme),lieu(lieu) {}

Hackathon::Hackathon(const Hackathon& h) {

    this->Id = h.Id;
    this->titre = h.titre;
    this->theme = h.theme;
    this->date = h.date;
    this->lieu = h.lieu;

    for (unsigned i = 0; i < h.participants.size(); i++) {
        Participant* p = new Participant(*h.participants[i]);
        this->participants.push_back(p);
    }

    for (unsigned i = 0; i < h.juges.size(); i++) {
        juge* j = new juge(*h.juges[i]);
        this->juges.push_back(j);
    }

    for (unsigned i = 0; i < h.organisateurs.size(); i++) {
        organisateur* o = new organisateur(*h.organisateurs[i]);
        this->organisateurs.push_back(o);
    }

    for (unsigned i = 0; i < h.equipes.size(); i++) {
        Equipe* e = new Equipe(*h.equipes[i]);
        this->equipes.push_back(e);
    }

    for (unsigned i = 0; i < h.projets_technologique.size(); i++) {
        Projet_technologique* pt = new Projet_technologique(*h.projets_technologique[i]);
        this->projets_technologique.push_back(pt);
    }

    for (unsigned i = 0; i < h.projets_design.size(); i++) {
        Projet_design* pd = new Projet_design(*h.projets_design[i]);
        this->projets_design.push_back(pd);
    }

    for (unsigned i = 0; i < h.equipes_organisatrice.size(); i++) {
        Equipe_organisatrice* eo = new Equipe_organisatrice(*h.equipes_organisatrice[i]);
        this->equipes_organisatrice.push_back(eo);
    }

    for (unsigned i = 0; i < h.sponsors.size(); i++) {
        sponsor* s = new sponsor(*h.sponsors[i]);
        this->sponsors.push_back(s);
    }

   // this->montants = h.montants;
}




void Hackathon::modifier() {
    int choix;

    do {
        cout << endl << "Veuillez choisir :" << endl;
        cout << "1 - Modifier le titre" << endl;
        cout << "2 - Modifier le theme" << endl;
        cout << "4 - Modifier la date" << endl;
        cout << "5 - Modifier le lieu" << endl;
        cout << "0 - Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;
    } while (choix < 0 || choix > 4);

    switch (choix) {
        case 1:
            cout << endl << "Saisir le nouveau titre : ";
            cin >> titre;
            break;
        case 2:
            cout << endl << "Saisir le nouveau thème : ";
            cin >> theme;
            break;

        case 3:
            cout << endl << "Saisir la nouvelle date : ";
            cin >> date;
            break;
        case 4:
            cout << endl << "Saisir le nouveau lieu : ";
            cin >> lieu;
            break;
        default:
            break;
    }
}
//TERMINER



void Hackathon::Afficher_nom_participants() {
    if (participants.empty()) {
        cout << "Aucun participant inscrit au hackathon." << endl;
    } else {
        for (unsigned i = 0; i < participants.size() - 1; i++) {
            for (unsigned j = 0; j < participants.size() - i - 1; ++j) {
                if (participants[j]->getnom() > participants[j + 1]->getnom()) {
                    swap(participants[j], participants[j + 1]);
                }
            }
        }

        cout << "Liste des participants inscrits au hackathon :" << endl;
        for (unsigned i = 0; i < participants.size(); i++) {
            cout << participants[i]->getnom() << " " << participants[i]->getprenom() << endl;
        }
    }
}

void Hackathon::Afficher_nom_juges() {
    if (juges.empty()) {
        cout << "Aucun juge inscrit au hackathon." << endl;
    } else {

        for (unsigned i = 0; i < juges.size() - 1; i++) {
            for (unsigned j = 0; j < juges.size() - i - 1; ++j) {
                if (juges[j]->getnom() > juges[j + 1]->getnom()) {
                    swap(juges[j], juges[j + 1]);
                }
            }
        }

        cout << "Liste des juges inscrits au hackathon :" << endl;
        for (unsigned i = 0; i < juges.size(); i++) {
            cout << juges[i]->getnom() << " " << juges[i]->getprenom() << endl;
        }
    }
}

void Hackathon::Afficher_nom_organisateurs() {
    if (organisateurs.empty()) {
        cout << "Aucun organisateur inscrit au hackathon." << endl;
    } else {
        for (unsigned i = 0; i < organisateurs.size() - 1; i++) {
            for (unsigned j = 0; j < organisateurs.size() - i - 1; ++j) {
                if (organisateurs[j]->getnom() > organisateurs[j + 1]->getnom()) {
                    swap(organisateurs[j], organisateurs[j + 1]);
                }
            }
        }

        cout << "Liste des organisateurs inscrits au hackathon :" << endl;
        for (unsigned i = 0; i < organisateurs.size(); i++) {
            cout << organisateurs[i]->getnom() << " " << organisateurs[i]->getprenom() << endl;
        }
    }
}

void Hackathon::Afficher_nom_equipes() {
    if (equipes.empty()) {
        cout << "Aucune equipe inscrite au hackathon." << endl;
    } else {
        cout << "Liste des equipes inscrites au hackathon :" << endl;
        for (unsigned i = 0; i < equipes.size(); i++) {
            cout <<i+1<<" - "<< equipes[i]->getnom() << endl;
        }
    }
}

void Hackathon::Afficher_classement_projet() {


    if (projets_technologique.empty()) {
        cout << "Aucun projet technologique disponible." << endl;
    } else {
        cout <<endl << "Projets technologiques :" << endl;
        for (unsigned i = 0; i < projets_technologique.size() - 1; i++) {
            for (unsigned j = 0; j < projets_technologique.size() - i - 1; ++j) {
                if (projets_technologique[j]->Calculer_Note_final() < projets_technologique[j + 1]->Calculer_Note_final()) {
                    swap(projets_technologique[j], projets_technologique[j + 1]);
                }
            }
        }
        for (unsigned i = 0; i < projets_technologique.size(); i++) {
            cout <<i+1<<" - "<<projets_technologique[i]->gettitre() << " ---> "<<projets_technologique[i]->Calculer_Note_final ()<< endl;
        }
    }


    if (projets_design.empty()) {
        cout << "Aucun projet de design disponible." << endl;
    } else {
        cout << endl <<"Projets design :" << endl;
        for (unsigned i = 0; i < projets_design.size() - 1; i++) {
            for (unsigned j = 0; j < projets_design.size() - i - 1; ++j) {
                if (projets_design[j]->Calculer_Note_final () < projets_design[j + 1]->Calculer_Note_final()) {
                    swap(projets_design[j], projets_design[j + 1]);
                }
            }
        }
        for (unsigned i = 0; i < projets_design.size(); i++) {
            cout <<i+1<<" - "<< projets_design[i]->gettitre()  <<" ---> "<<projets_design[i]->Calculer_Note_final ()<< endl;
        }
    }


}

void Hackathon::Afficher_equipes_organisatrice() {
    if (equipes_organisatrice.empty()) {
        cout << "Aucune equipe organisatrice inscrite au hackathon." << endl;
    } else {
        cout << "Liste des equipes organisatrices inscrites au hackathon :" << endl;
        for (unsigned i = 0; i < equipes_organisatrice.size(); i++) {
            cout << i+1<<" - "<<equipes_organisatrice[i]->getrole() << endl;
        }
    }
}

void Hackathon::afficher_sponsors(){
    if (sponsors.empty()) {
        cout << "Aucun sponsor inscrit au hackathon." << endl;
    } else {
        cout << "Liste des sponsors inscrits au hackathon :" << endl;
        for (unsigned i = 0; i < sponsors.size(); i++) {
            cout <<*sponsors[i]<< endl;
        }
    }


}




void Hackathon::ajouter_participant(Participant* p) {
    for (unsigned i = 0; i < participants.size(); i++) {
        if (participants[i]->getnom() == p->getnom() && participants[i]->getprenom() == p->getprenom() &&  participants[i]->getemail() == p->getemail() ) {
            cout << "Le participant '" << p->getnom() << " " << p->getprenom() << "' est deja inscrit." << endl;
            return;
        }
    }
    participants.push_back(p);
}

void Hackathon::ajouter_juge(juge* j) {
    for (unsigned i = 0; i < juges.size(); i++) {
        if (juges[i]->getnom() == j->getnom() && juges[i]->getprenom() == j->getprenom() &&  juges[i]->getemail() == j->getemail() ) {
            cout << "Le membre '" << j->getnom() << " " << j->getprenom() << "' est deja dans l'équipe." << endl;
            return;
        }
    }
    juges.push_back(j);
}

void Hackathon::ajouter_organisateur(organisateur* o) {
    for (unsigned i = 0; i < organisateurs.size(); i++) {
        if (organisateurs[i]->getnom() == o->getnom() && organisateurs[i]->getprenom() == o->getprenom() &&  organisateurs[i]->getemail() == o->getemail() ) {
            cout << "Le membre '" << o->getnom() << " " << o->getprenom() << "' est deja dans l'équipe." << endl;
            return;
        }
    }
    organisateurs.push_back(o);
}

void Hackathon::ajouter_equipe(Equipe* e ){
    for (unsigned i = 0; i < equipes.size(); i++) {
        if (equipes[i]->getnom() == e->getnom() ) {
            cout << "L'equipe du nom '" << e->getnom() << "' existe deja." << endl;
            return;
        }
    }
    equipes.push_back(e);
}

void Hackathon::ajouter_equipe(Participant* p) {
    Equipe* e = new Equipe;
    cout << "Saisir les informations de l'equipe : " << endl;
    cin >> *e;
    e->setChef_equipe(p) ;
    for (unsigned i = 0; i < equipes.size(); i++) {
        if (equipes[i]->getnom() == e->getnom()) {
            cout << "L'equipe du nom '" << e->getnom() << "' existe deja." << endl;
            delete e;
            return;
        }
    }

    equipes.push_back(e);
    e->Ajouter_membre(p) ;
}

void Hackathon::ajouter_projet(Participant* p) {
    for (unsigned i = 0; i < equipes.size(); i++) {
            if (equipes[i]->chercher_membre(p->getnom() , p->getprenom() )==true){
                if (equipes[i]->estChefEquipe(p) == true){
                    cout << "Quel type de projet souhaitez-vous ajouter pour l'equipe " << endl;
                    cout << "1. Projet technologique" << endl;
                    cout << "2. Projet design" << endl;
                    cout << "Votre choix : ";

                    int choix;
                    cin >> choix;

                    if (choix == 1) {
                        Projet_technologique* projet = new Projet_technologique();
                        cin >> *projet;
                        projet->setEquipe(equipes[i]);
                        projets_technologique.push_back(projet);
                        cout << "Projet technologique ajoute avec succes." << endl;
                        return ;
                    } else if (choix == 2) {
                        Projet_design* projet = new Projet_design();
                        cin >> *projet;
                        projet->setEquipe(equipes[i]);
                        projets_design.push_back(projet);
                        cout << "Projet design ajoute avec succes." << endl;
                        return ;
                    } else {
                        cout << "Choix invalide. Veuillez reessayer." << endl;
                        return ;
                    }

                }
                else cout<<" Vous n'etes pas un chef d'equipe " <<endl ;
            }
        }
        cout<<" Vous n'etes pas un membre d'une equipe " <<endl ;

}

void Hackathon::ajouter_equipes_organisatrice() {
    Equipe_organisatrice* e = new Equipe_organisatrice;
    cout << "Saisir les informations de l'equipe organisatrice : " << endl;
    cin >> *e;

    for (unsigned i = 0; i < equipes_organisatrice.size(); i++) {
        if (equipes_organisatrice[i]->getrole() == e->getrole()) {
            cout << "L'equipe du role '" << e->getrole() << "' existe deja." << endl;
            delete e;
            return;
        }
    }
    equipes_organisatrice.push_back(e);
}

void Hackathon::ajouter_sponsor() {
    sponsor* s = new sponsor();
    cin >> *s;
    for (unsigned i = 0; i < sponsors.size(); i++) {
        if (sponsors[i]->getnom() == s->getnom()) {
            cout << "Le sponsor '" << s->getnom() << "' est deja inscrit." << endl;
            delete s;
            return;
        }
    }
    sponsors.push_back(s);
    cout << "Sponsor ajoute avec succes." << endl;
    Budgets[s->get_id_sponosr()]=s->getmontant() ;
}






void Hackathon::supprimer_participant() {
    int choix;
    if (participants.empty()) {
        cout << "Aucun participant a supprimer." << endl;
        return;
    }
    cout << "Affichage des participants :" << endl;
    for (unsigned i = 0; i < participants.size(); i++) {
        cout << "Participant " << i + 1 << ": " <<endl << *participants[i] << endl;
    }
    cout << "Entrez le numero du participant a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int >(participants.size())) {
        delete participants[choix - 1];
        participants.erase(participants.begin() + choix - 1);
        cout << "Participant supprime avec succes." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }
}

void Hackathon::supprimer_juge() {
    int  choix;
    if (juges.empty()) {
        cout << "Aucun juge à supprimer." << endl;
        return;
    }
    cout << "Affichage des juges :" << endl;
    for (unsigned i = 0; i < juges.size(); i++) {
        cout << "Juge " << i + 1 << ": " <<endl << *juges[i] << endl;
    }
    cout << "Entrez le numero du juge a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int >(juges.size())) {
        delete juges[choix - 1];
        juges.erase(juges.begin() + choix - 1);
        cout << "Juge supprime avec succes." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }
}

void Hackathon::supprimer_organisateur() {
    int  choix;
    if (organisateurs.empty()) {
        cout << "Aucun organisateur à supprimer." << endl;
        return;
    }
    cout << "Affichage des organisateurs :" << endl;
    for (unsigned i = 0; i < organisateurs.size(); i++) {
        cout << "Organisateur " << i + 1 << ": " <<endl << *organisateurs[i] << endl;
    }
    cout << "Entrez le numéro de l'organisateur a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int>(organisateurs.size())) {
        delete organisateurs[choix - 1]; // Suppression de l'objet alloué dynamiquement
        organisateurs.erase(organisateurs.begin() + choix - 1);
        cout << "Organisateur supprime avec succes." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }
}

void Hackathon::supprimer_equipe() {
    unsigned  choix;
    if (equipes.empty()) {
        cout << "Aucune equipe organisatrice a supprimer." << endl;
        return;
    }
    cout << "Affichage des equipes organisatrices :" << endl;
    for (unsigned i = 0; i < equipes.size(); i++) {
        cout << "Equipe " << i + 1 << ": " <<endl << *equipes[i] << endl;
    }
    cout << "Entrez le numéro de l'equipe  a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<unsigned >(equipes.size())) {
        delete equipes[choix - 1]; // Suppression de l'objet alloué dynamiquement
        equipes.erase(equipes.begin() + choix - 1);
        cout << "Equipe supprimee avec succès." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }
}

void Hackathon::supprimer_projet() {
    cout << "Liste des projets technologiques :" << endl;
    for (unsigned  i = 0; i < projets_technologique.size(); i++) {
        cout << i + 1 << ". " << projets_technologique[i]->gettitre() << endl;
    }

    cout << "Liste des projets design :" << endl;
    for (unsigned  i = 0; i < projets_design.size(); i++) {
        cout << i + 1 << ". " << projets_design[i]->gettitre() << endl;
    }

    cout << "Entrez le type du projet a supprimer : 1 - projet design   2 -  Projet technologique   " << endl ;
    int choix;
    cin >> choix;



    if (choix ==1 ) {
        cout << "Entrez le numero du projet design a supprimer : ";
        cin >> choix;

        if (choix >= 1 && choix <= static_cast<int>(projets_design.size())) {
            delete projets_design[choix - 1];
            projets_design.erase(projets_design.begin() + choix - 1);
        cout << "Projet design supprime avec succes." << endl;
        } else {
            cout << "Choix invalide." << endl;
            }
    } else if (choix == 2 ) {
        cout << "Entrez le numero du projet technologique a supprimer : ";
        cin >> choix;

        if (choix >= 1 && choix <= static_cast<int>(projets_technologique.size())) {
            delete projets_technologique[choix - 1];
            projets_technologique.erase(projets_technologique.begin() + choix - 1);
        cout << "Projet design supprime avec succes." << endl;
        } else {
        cout << "Choix invalide." << endl;
        }
    }
}

void Hackathon::supprimer_equipe_organisatrice() {
    unsigned choix;
    if (equipes_organisatrice.empty()) {
        cout << "Aucune équipe organisatrice à supprimer." << endl;
        return;
    }
    cout << "Affichage des équipes organisatrices :" << endl;
    for (unsigned i = 0; i < equipes_organisatrice.size(); i++) {
        cout << "Équipe " << i + 1 << ": " << endl << *equipes_organisatrice[i] << endl;
    }
    cout << "Entrez le numéro de l'équipe organisatrice à supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<unsigned >(equipes_organisatrice.size())) {
        delete equipes_organisatrice[choix - 1];
        equipes_organisatrice.erase(equipes_organisatrice.begin() + choix - 1);
        cout << "Équipe supprimée avec succès." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }
}

void Hackathon::supprimer_sponsor() {
    int choix;
    if (sponsors.empty()) {
        cout << "Aucun sponsor a supprimer." << endl;
        return;
    }
    cout << "Affichage des sponsors :" << endl;
    for (unsigned i = 0; i < sponsors.size(); i++) {
        cout << "Sponsors num " << i + 1 << ": " <<endl << sponsors[i]->getnom() << endl;
    }
    cout << "Entrez le numero du sponsors a supprimer : ";
    cin >> choix;

    if (choix >= 1 && choix <= static_cast<int >(sponsors.size())) {
        delete sponsors[choix - 1];
        sponsors.erase(sponsors.begin() + choix - 1);
        cout << "Participant supprime avec succes." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }



}




Participant* Hackathon::rechercher_Participant(string nom, string prenom) {
    for (unsigned i = 0; i < participants.size(); i++) {
        if (participants[i]->getnom() == nom && participants[i]->getprenom() == prenom) {
            return participants[i];
        }
    }
    return nullptr;
}

juge* Hackathon::rechercher_juge(string nom, string prenom) {
    for (unsigned i = 0; i < juges.size(); i++) {
        if (juges[i]->getnom() == nom && juges[i]->getprenom() == prenom) {
            return juges[i];
        }
    }
    return nullptr;
}

organisateur* Hackathon::rechercher_organisateur(string nom, string prenom) {
    for (unsigned i = 0; i < organisateurs.size(); i++) {
        if (organisateurs[i]->getnom() == nom && organisateurs[i]->getprenom() == prenom) {
            return organisateurs[i];
        }
    }
    return nullptr;
}

Equipe* Hackathon::rechercher_equipe(string nom) {
    for (unsigned i = 0; i < equipes.size(); i++) {
        if (equipes[i]->getnom() == nom) {
            return equipes[i];
        }
    }
    return nullptr;
}

Projet_technologique* Hackathon::rechercher_projet_technologique(string titre) {
    for (size_t i = 0; i < projets_technologique.size(); i++) {
        if (projets_technologique[i]->gettitre() == titre) {
            return projets_technologique[i];
        }
    }
    return nullptr;
}

Projet_design* Hackathon::rechercher_projet_design(string titre) {
    for (size_t i = 0; i < projets_design.size(); i++) {
        if (projets_design[i]->gettitre() == titre) {
            return projets_design[i];
        }
    }
    return nullptr;
}

Equipe_organisatrice* Hackathon::rechercher_equipe_organisatrice(string role) {
    for (unsigned i = 0; i < equipes_organisatrice.size(); i++) {
        if (equipes_organisatrice[i]->getrole() == role) {
            return equipes_organisatrice[i];
        }
    }
    return nullptr;
}

sponsor* Hackathon::rechercher_sponsor(string nom){
        for (unsigned i = 0; i < sponsors.size(); i++) {
        if (sponsors[i]->getnom() == nom) {
            return sponsors[i];
        }
    }
    return nullptr;
}






void Hackathon::inscription() {
    int choix;
    cout << endl<< "Veuillez choisir votre role :" << endl;
    cout << endl<< "1. Participant" << endl;
    cout << endl<< "2. Juge" << endl;
    cout << endl<< "3. Organisateur" << endl;
    cout << endl<< "Votre choix : ";
    cin >> choix;

    switch (choix) {
        case 1: {
            Participant* p = new Participant;
            cin >> *p;
            this->ajouter_participant(p);
            cout << "Inscription en tant que participant reussie !" << endl;
            break;
        }
        case 2: {
            juge* j = new juge;
            cin >> *j;
            this->ajouter_juge(j);
            cout << "Inscription en tant que juge reussie !" << endl;
            break;
        }
        case 3: {
            organisateur* o = new organisateur;
            cin >> *o;
            this->ajouter_organisateur(o);
            cout << "Inscription en tant qu'organisateur reussie !" << endl;
            break;
        }
        default:
            cout << "Choix invalide." << endl;
    }
}

int Hackathon::identifier(string& nom , string& prenom ) {
    cout << "Entrez votre nom : ";
    cin >> nom;
    cout << "Entrez votre prenom : ";
    cin >> prenom;


    for (unsigned i=0 ; i<participants.size();i++ ) {
        if (participants[i]->getnom() == nom && participants[i]->getprenom() == prenom) {
            return 1;
        }
    }
    for (unsigned i=0 ; i<juges.size();i++ ) {
        if (juges[i]->getnom() == nom && juges[i]->getprenom() == prenom) {
            return 0;
        }
    }
    for (unsigned i=0 ; i<organisateurs.size();i++ ) {
        if (organisateurs[i]->getnom() == nom && organisateurs[i]->getprenom() == prenom) {
            return -1;
        }
    }
    return -2;
}





void Hackathon::ajouter_participant_equipe(Participant* p) {
    string nom ;
    if (equipes.empty()) {
        cout <<endl<< " Pas encore d'equipe ." << endl;
        return;
    }
    this->Afficher_nom_equipes();
    cout<< " Veuillez saisir correctement le nom de l'equipe a rejoindre. :" ;
    cin >> nom ;
    Equipe* equipe = rechercher_equipe(nom);
    if (equipe != nullptr) {
        equipe->Ajouter_membre(p);
    } else {
        cout << "Equipe du nom '" << nom << "' non trouvee." << endl;
    }
}

void Hackathon::ajouter_organisateur_equipe_organisatrice(organisateur* o) {
    string nom;
    if (equipes_organisatrice.empty()) {
        cout << " Aucune equipe a rejoindre." << endl;
        return;
    }
    this->Afficher_equipes_organisatrice();
    cout << "Entrez le nom de l'equipe organisatrice a rejoindre : ";
    cin >> nom;

    Equipe_organisatrice* equipe = rechercher_equipe_organisatrice(nom);
    if (equipe != nullptr) {
        equipe->Ajouter_membre(o);
    } else {
        cout << "Equipe organisatrice '" << nom << "' non trouvee." << endl;
    }
}




void Hackathon::supprimer_participant_dans_equipe(Participant* p ) {
    bool trouve = false;
    for (unsigned i = 0; i < equipes.size(); i++) {
            if (equipes[i]->chercher_membre(p->getnom(), p->getprenom () ) == true ){
                equipes[i]->Supprimer_membre(p->getnom(), p->getprenom());
                trouve = true ;
            }
    }
    if (!trouve) {
        cout << " Ce participant ne fait partie d'aucune equipe." << endl;
    }
}

void Hackathon::supprimer_organisateur_dans_equipe_organisatrice(organisateur* o ) {
    bool trouve = false;
    for (unsigned i = 0; i < equipes_organisatrice.size(); i++) {
            if (equipes_organisatrice[i]->chercher_membre(o->getnom(), o->getprenom () ) == true ){
                equipes_organisatrice[i]->Supprimer_membre(o->getnom(), o->getprenom());
                cout << "Organisateur supprime de l'equipe avec succes." << endl;

            }

    }

    if (!trouve) {
        cout << "Ce Organisateur ne correspond a aucune equipe." << endl;
    }
}





void Hackathon::ajouter_note_projets (juge*j){
    if (projets_technologique.empty()) {
        cout << "Aucun projets technologique a evaluer." << endl;}
    else {
            for (unsigned i = 0; i < projets_technologique.size()  ; i++){
            cout<<*projets_technologique[i] ;
            projets_technologique[i]->attribuer_note(j->getid()) ;

            }
    }
   if (projets_design.empty()) {
        cout << "Aucun projets design a evaluer." << endl;}
    else{
        for (unsigned i = 0; i < projets_design.size()  ; i++){
            cout<<*projets_design[i] ;
            projets_design[i]->attribuer_note(j->getid()) ;
        }
    }

}

void Hackathon::Annoncer_gagnants () {
        cout << " Les gagnants du projet technologique : " << endl ;
        for (unsigned i = 0; i < projets_technologique.size() - 1; i++) {
            for (unsigned j = 0; j < projets_technologique.size() - i - 1; ++j) {
                if (projets_technologique[j]->Calculer_Note_final() < projets_technologique[j + 1]->Calculer_Note_final()) {
                    swap(projets_technologique[j], projets_technologique[j + 1]);
                }
            }
        }
        for (unsigned i = 0; i < 3; i++) {
            cout <<"- PLACE "<<i+1<<" : "<<projets_technologique[i]->gettitre()<< endl;
        }



        cout << " Les gagnants du projet design : " << endl ;
        for (unsigned i = 0; i < projets_design.size() - 1; i++) {
            for (unsigned j = 0; j < projets_design.size() - i - 1; ++j) {
                if (projets_design[j]->Calculer_Note_final() < projets_design[j + 1]->Calculer_Note_final()) {
                    swap(projets_design[j], projets_design[j + 1]);
                }
            }
        }
        for (unsigned i = 0; i < 3; i++) {
            cout <<"- PLACE "<<i+1<<" : "<<projets_design[i]->gettitre()<< endl;
        }


}

float Hackathon::Calculer_budget () {
    float budget ;
    for (unsigned i = 0; i < sponsors.size(); i++) {
        budget += Budgets[sponsors[i]->get_id_sponosr()];

    }
    return budget ;
}






























































