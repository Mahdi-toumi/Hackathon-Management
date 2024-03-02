#include <iostream>
#include <string>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Equipe.h>
#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Participants.h>



using namespace std;

Equipe::Equipe () {}
Equipe::Equipe (const Equipe& E) {
    this->Id_Equipe = E.Id_Equipe ;
    this->Nom_Equipe = E.Nom_Equipe ;
    for (unsigned i=0 ; i < E.Membres.size() ; i++ ) {
        this->Membres.push_back(E.Membres[i]) ;
    }
}
Equipe::~Equipe () {
    for (unsigned i=0 ; i < Membres.size() ; i++ ) {
        delete Membres[i] ;
    }
}

void Equipe::Saisir_Equipe () {
    cout<<endl<<" Saisir l'id de l'equipe : " ;
    cin >> Id_Equipe ;
    cout<<endl<<" Saisir le nom de l'equipe : " ;
    cin >> Nom_Equipe ;


}




void Equipe::Afficher_Equipe () {
    cout<<endl<<" Id de l'equipe : " <<Id_Equipe <<endl;
    cout<<endl<<" Nom de l'equipe : " << Nom_Equipe <<endl;
    cout<<endl<<" Affichage des membres : "<< endl ;
    for (unsigned i=0 ; i < Membres.size() ; i++ ) {
        cout<<endl<<" Membres num "<< i+1<<" : "<<endl ;
        Membres[i]->Afficher_Participant () ;
    }


}
void Equipe::Modifier_Equipe () {
    int choix ;
    do {
                cout<<endl<<" Veulliez choisir  : 1 - Modifier L'Id de l'equipe   /    2 - Modifier Le nom de l'equipe  " ;
                cin>> choix ;
    }while (choix!=1 && choix!=2) ;
    switch (choix) {
        case 1 : cout<<endl<<" Saisir le nouveau Id : " ; cin>> Id_Equipe ;
        case 2 : cout<<endl<<" Saisir le nouveau nom : " ; cin>> Nom_Equipe ;
    }



}
void Equipe::Ajouter_membre (Participant* p ) {
    Membres.push_back(p) ;

}

void Equipe::Supprimer_membre (Participant p) {
    for (unsigned i=0 ; i < Membres.size() ; i++ ) {
        if (Membres[i]->getage() == p.getage() ) {      // age c temporairement .
            Membres.erase(Membres.begin()+i) ;
        }
    }

}











