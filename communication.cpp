#include<C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Message.h>


int message::nextId = 1;

message::message():id(nextId++) {};

message::message( string contenu = "" ):id(nextId++){
    this->contenu=contenu ;
}


istream& operator >>(istream& entree,message& c){
        cout<<" Saisir la date d'envoie de ce message"<<endl;
        cin>>c.Date_envoi;

        cout<<" Saisir le message"<<endl;
        cin>>c.contenu;

        return entree ;

};

ostream& operator <<(ostream& sortie,message& c){
        sortie<<"Message envoyee dans la date : " << c.Date_envoi <<endl ;
        sortie<<"Contenue : "<< c.contenu<<endl;
        return sortie ;
    };




void message::envoyer_message (Hackathon h , vector<message*> Message ) {
            string nom , prenom ;
            cout << "Saisir le nom du destinataire : " ; cin >> nom ;
            cout << "Saisir le prenom du destinataire : " ; cin >> prenom  ;
            destinataires = h.rechercher_organisateur(nom,prenom)->getid() ; /// Obtient l'identifiant du destinataire a partir du hackathon
            Message.push_back(this) ; /// Ajoute le message à la fin du vecteur de messages
        }

void message::afficher_messages (  organisateur* o, vector<message*> Message ){
            for (unsigned i=0 ; i<Message.size() ; i++) { /// Parcours de tous les messages dans le vecteur
                if (o->getid()== Message[i]->destinataires  ){ /// Verifie si l'ID de l'organisateur correspond à l'ID du destinataire du message
                    cout<<this<<endl ; /// Affiche le message actuel
                    return ;
                }
            }
            cout<<"Pas de message pour le moment ."<<endl ;
        }





void message::creerFichier(const string& nomFichier) {
            ifstream fichier(nomFichier, ofstream::out | ofstream::trunc);/// Ouverture du fichier en mode ecriture ( effacement du contenu existant)

            if (!fichier.is_open()) {
                cerr << "Erreur lors de l'ouverture du fichier." << endl;
                return;
                }

            cout << "Fichier ouvert avec succes." << endl;
            fichier.close();
        }

void message::remplirDansFichier(const string&  nomFichier ) {
                ofstream fichier(nomFichier, ios::app);      /// Ouverture du fichier en mode append pou l'ajout des donnes
                if (!fichier.is_open()) {    /// Verification si le fichier est ouvert
                    cout << "Erreur lors de l'ouverture du fichier en ecriture." << endl;
                    return;
                }
                fichier << *this;   /// Ecriture des informations du participant dans le fichier
                fichier.close();    /// Fermeture du fichier
            };

void message::lireFichier(const string& nomFichier ){
                ifstream fichier(nomFichier);
                if (!fichier.is_open()) {
                    cout << "Erreur lors de l'ouverture du fichier en lecture." << endl;
                    return;
                }
                string ligne;
                while (getline(fichier, ligne)) { /// Lecture de chaque ligne du fichier et la stocker dans la variable ligne
                    cout << ligne << endl;  /// Affichage de chaque ligne
                }
                fichier.close();
            }



