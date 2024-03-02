#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Participants.h>
#include <iostream>
#include <string>


using namespace std;


Participant::Participant () {}

void Participant::Saisir_Particpant () {
    string comp ;
    int choix ;
    cout<<endl<<" Saisir l'age du participant : ";
    cin>> age ;
    do {
        cout<<endl<<" Saisir une competence du participant : " ;
        cin>> comp ;
        competence.push_back (comp) ;
        do {
                cout<<endl<<" Veulliez choisir  : 1 - Saisir une aute competence    /    0 - Terminer   " ;
                cin>> choix ;
        }while (choix!=1 && choix!=0) ;


    }while (choix == 1);
    cout<<endl<<" ______________________________________________________________ " <<endl;
}

void Participant::Afficher_Participant () {
    cout<<endl<<" L'age du participant : "<<age<<endl ;
    cout<<endl<<" Les competences du partcipant : " ;
    for (unsigned i = 0 ; i < competence.size() ; i++ ) {
        cout<<competence[i]<<"  ,\t" ;
    }
    cout<<endl<<" ______________________________________________________________ " <<endl;
}

void Participant::Modifier_Participant () {
    int choix ;
    do {
                cout<<endl<<" Veulliez choisir  : 1 - Modifier L'age   /    ...a terminer  " ; //a terminer avec l'heritage
                cin>> choix ;
    }while (choix!=1 && choix!=0) ;
    switch (choix) {
        case 1 : cout<<endl<<" Saisir l'age du participant : " ; cin>> age ;
    }

}

void Participant::Ajouter_competence (string comp) {
    int choix , K=0 ;

        for (unsigned i = 0 ; i < competence.size() ; i++ ) {           // Vérification si la compétence existe déjà
            if (competence[i]==comp){
                cout<<endl<<" La competence existe deja " <<endl ;
                K = 1 ;
                break ;
            }
        }
        if (K==0)  competence.push_back (comp) ;       // Si la compétence n'existe pas elle est ajoutée
        else {
            do {
                cout<<endl<<" Veulliez choisir  : 1 - Ajouter une aute competence    /    0 - Annuler   " ;     //Sinon l'utilisateur  choisit d'ajouter une autre ou non
                cin>> choix ;
            }while (choix!=1 && choix!=0) ;
            if (choix == 1 ) {
            cout<<endl<<" Saisir la competence a ajouter : " ;
            cin>> comp ;
            this->Ajouter_competence(comp) ;    // Si l'utilisateur choisit d'ajouter une autre compétence
            }

        }

}

void Participant::Supprimer_competence (string comp) {
int K=0 ;
    for (unsigned i = 0 ; i < competence.size() ; i++ ) {
        if (competence[i]==comp){

            competence.erase(competence.begin()+i) ;
            cout <<endl<< " Competence supprimee avec succes. " << endl;
            K=1 ;
            break ;
        }
    }
    if (K==0) cout <<endl<< " Cette competence n'existe pas pour ce participant. " << endl;
}




