#include <iostream>

#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Hackathon.h>
#include<C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Message.h>


using namespace std;

int main() {
    int choix, typepersonne;
    string nom, prenom;
    vector <message> messages ;

    do {
        cout << endl << "1 - Creer un HACKATHON   2 - Partie fichier   0 - Exit    ";
        cin >> choix;
    } while (choix != 1 && choix != 0 && choix != 2);

    if (choix == 1) {

        Hackathon H("Innovate_Together", "Future_Technologies",Date(25, 4, 2024), "Silicon_Valley, California");

        H.Remplir_donnes() ;
       // cin>>H ;
        do {
            int choix;
            do {
                cout << endl << "1 - S'inscrire      2 - S'identifier   ";
                cin >> choix;
            } while (choix != 1 && choix != 2);

            if (choix == 1) {
                H.inscription();
            } else {
                typepersonne = H.identifier(nom, prenom);
                do {

                if (typepersonne == 1) {  //sibon
                    do {
                        cout << endl << "**** MENU PARTICIPANT ****" << endl;
                        cout << "1 - Rejoindre une equipe" << endl;
                        cout << "2 - Creer une equipe" << endl;
                        cout << "3 - Quitter une equipe" << endl;
                        cout << "4 - Choisir un projet" << endl;
                        cout << "5 - Voir le classement et les notes des projets" << endl;
                        cout << "6 - Modifier informations" << endl;
                        cout << "0 - Quitter" << endl;
                        cout << "Votre choix : ";
                        cin >> choix;
                        if (choix < 0 && choix > 6) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                        } while (choix < 0 || choix > 6);

                    switch (choix) {
                        case 1:
                            H.ajouter_participant_equipe(H.rechercher_Participant(nom, prenom));
                            break;
                        case 2:
                            H.ajouter_equipe(H.rechercher_Participant(nom, prenom));
                            break;
                        case 3:
                            H.supprimer_participant_dans_equipe(H.rechercher_Participant(nom, prenom));
                            break;
                        case 4:
                            H.ajouter_projet(H.rechercher_Participant(nom, prenom));
                            break;
                        case 5:
                            H.Afficher_classement_projet();
                            break;
                        case 6:
                            H.rechercher_Participant(nom, prenom)->modifier() ;
                            break;
                        case 0:
                            break;

                    }
                }
                else if (typepersonne == 0) {//sibon
                    do {
                        cout << endl << "**** MENU JUGE ****" << endl;
                        cout << "1 - Evaluer les projets" << endl;
                        cout << "2 - Modifier informations" << endl;
                        cout << "0 - Quitter" << endl;
                        cout << endl << "Votre choix : ";
                        cin >> choix;
                        } while (choix < 0 || choix > 2);

                    switch (choix) {
                        case 1:
                            H.ajouter_note_projets(H.rechercher_juge(nom, prenom));
                            break;
                        case 2:
                            H.rechercher_juge(nom, prenom)->modifier() ;
                            break;
                        case 0:
                            break;

                    }
                }
                else if (typepersonne == -1) {
                    do {
                        cout << endl << "**** MENU ORGANISATEUR ****" << endl;
                        cout << " 1 - Rejoindre une equipe organisatrice" << endl;
                        cout << " 2 - Creer une equipe organisatrice" << endl;
                        cout << " 3 - Quitter une equipe organisatrice" << endl;
                        cout << " 4 - Gerer les participants" << endl;
                        cout << " 5 - Gerer les juges" << endl;
                        cout << " 6 - Gerer les organisateurs" << endl;
                        cout << " 7 - Gerer les equipes" << endl;
                        cout << " 8 - Gerer les projets" << endl;
                        cout << " 9 - Gerer les sponsors" << endl;
                        cout << "10 - Gerer le hackathon" << endl;
                        cout << "11 - Communication" << endl;
                        cout << "12 - Afficher le classement des projets" << endl;
                        cout << "13 - Annoncer les gagnants" << endl;
                        cout << "14 - Modifier informations" << endl;

                        cout << " 0 - Quitter" << endl;
                        cout << endl << "Votre choix : ";
                        cin >> choix;
                        if (choix < 0 && choix > 14) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                        } while (choix < 0 || choix > 14);

                    switch (choix) {
                        case 1:
                            H.ajouter_organisateur_equipe_organisatrice(H.rechercher_organisateur(nom, prenom));
                            break;
                        case 2:
                            H.ajouter_equipes_organisatrice();
                            break;
                        case 3:
                            H.supprimer_organisateur_dans_equipe_organisatrice(H.rechercher_organisateur(nom, prenom)) ;
                            break;
                        case 4:
                            do {
                                cout << endl << " Gestion des participants" << endl;
                                cout << "1 - Inscrire un participant" << endl;
                                cout << "2 - Supprimer un participant" << endl;
                                cout << "3 - Modifier Participant" << endl;
                                cout << "4 - Afficher participant" << endl;
                                cout << "0 - Quitter" << endl;
                                cout << endl << "Votre choix : ";
                                cin >> choix;
                                if (choix < 0 && choix > 4) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                                } while (choix < 0 || choix > 4);

                            switch (choix) {
                                case 1: {
                                    Participant p;
                                    cin >> p;
                                    H.ajouter_participant(&p);
                                    break;
                                }
                                case 2:
                                    H.supprimer_participant();
                                    break;
                                case 3: {
                                    string nom1, prenom1;
                                    cout << endl << " Saisir nom participant a modifier : ";
                                    cin >> nom1;
                                    cout << endl << " Saisir prenom participant a modifier : ";
                                    cin >> prenom1;
                                    H.rechercher_Participant(nom1, prenom1)->modifier();
                                    break;
                                }
                                case 4:
                                    H.Afficher_nom_participants();
                                    break;
                                case 0:
                                    break;
                                default:
                                    cout << endl << "Choix invalide. Veuillez reessayer." << endl;
                            }

                            break;
                        case 5:
                            do {
                                cout << endl << " Gestion des Juge" << endl;
                                cout << "1 - Inscrire un Juge" << endl;
                                cout << "2 - Supprimer un Juge" << endl;
                                cout << "3 - Modifier Juge" << endl;
                                cout << "4 - Afficher Juge" << endl;
                                cout << "0 - Quitter" << endl;
                                cout << endl << "Votre choix : ";
                                cin >> choix;
                                if (choix < 0 && choix > 4) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                                } while (choix < 0 || choix > 4);

                            switch (choix) {
                                case 1: {
                                    juge j;
                                    cin >> j;
                                    H.ajouter_juge(&j);
                                    break;
                                }
                                case 2:
                                    H.supprimer_participant();
                                    break;
                                case 3: {
                                    string nom1, prenom1;
                                    cout << endl << " Saisir nom participant a modifier : ";
                                    cin >> nom1;
                                    cout << endl << " Saisir prenom participant a modifier : ";
                                    cin >> prenom1;
                                    H.rechercher_juge(nom1, prenom1)->modifier();
                                    break;
                                }
                                case 4:
                                    H.Afficher_nom_juges();
                                    break;
                                case 0:
                                    break;
                            }

                            break;
                        case 6:
                            do {
                                cout << endl << " Gestion des organisateurs" << endl;
                                cout << "1 - Inscrire un organisateur" << endl;
                                cout << "2 - Supprimer un organisateur" << endl;
                                cout << "3 - Modifier organisateur" << endl;
                                cout << "4 - Afficher organisateur" << endl;
                                cout << "0 - Quitter" << endl;
                                cout << endl << "Votre choix : ";
                                cin >> choix;
                                if (choix < 0 && choix > 4) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                                } while (choix < 0 || choix > 4);

                            switch (choix) {
                                case 1: {
                                    organisateur o;
                                    cin >> o;
                                    H.ajouter_organisateur(&o);
                                    break;
                                }
                                case 2:
                                    H.supprimer_organisateur();
                                    break;
                                case 3: {
                                    string nom1, prenom1;
                                    cout << endl << " Saisir nom organisateur a modifier : ";
                                    cin >> nom1;
                                    cout << endl << " Saisir prenom organisateur a modifier : ";
                                    cin >> prenom1;
                                    H.rechercher_organisateur(nom1, prenom1)->modifier();
                                    break;
                                }
                                case 4:
                                    H.Afficher_nom_organisateurs();
                                    break;
                                case 0:
                                    break;
                                default:
                                    cout << endl << "Choix invalide. Veuillez reessayer." << endl;
                            }

                            break;
                        case 7:
                            do {
                                cout << endl << " Gestion des equipes" << endl;
                                cout << "1 - Inscrire un equipe" << endl;
                                cout << "2 - Supprimer un equipe" << endl;
                                cout << "3 - Modifier equipe" << endl;
                                cout << "4 - Afficher equipe" << endl;
                                cout << "0 - Quitter" << endl;
                                cout << endl << "Votre choix : ";
                                cin >> choix;
                                if (choix < 0 && choix > 4) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                                } while (choix < 0 || choix > 4);

                            switch (choix) {
                                case 1: {
                                    Equipe e;
                                    cin >> e;
                                    H.ajouter_equipe(&e);
                                    break;
                                }
                                case 2:
                                    H.supprimer_equipe();
                                    break;
                                case 3: {
                                    string nom1;
                                    cout << endl << " Saisir nom de l'equipe a modifier : ";
                                    cin >> nom1;
                                    H.rechercher_equipe(nom1)->Modifier_Equipe();
                                    break;
                                }
                                case 4:
                                    H.Afficher_nom_equipes();
                                    break;
                                case 0:
                                    break;
                            }

                            break;
                        case 8:
                            do {
                                cout << endl << " Gestion des projets" << endl;
                                cout << "1 - Ajouter un projet" << endl;
                                cout << "2 - Supprimer un projet" << endl;
                                cout << "3 - Modifier projet" << endl;
                                cout << "4 - Afficher classement projet" << endl;
                                cout << "0 - Quitter" << endl;
                                cout << endl << "Votre choix : ";
                                cin >> choix;
                                if (choix < 0 && choix > 4) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                                } while (choix < 0 || choix > 4);

                            switch (choix) {
                                case 1: {
                                    string nom1, prenom1;
                                    cout << endl << " Saisir nom chef d'equipe correspond a ce projet  : ";
                                    cin >> nom1;
                                    cout << endl << " Saisir prenom chef d'equipe correspond a ce projet  : ";
                                    cin >> prenom1;
                                    H.ajouter_projet(H.rechercher_Participant(nom1, prenom1));
                                    break;
                                }
                                case 2:
                                    H.supprimer_projet();
                                    break;
                                case 3: {
                                    int c;
                                    string titre;
                                    cout << endl << " Vous voulez modifier 1 - Projet technologique  2 - Projet desing : \n Votre choix : ";
                                    cin >> c;
                                    cout << endl << " Saisir le titre du projet a modifier : ";
                                    cin >> titre;
                                    if (c == 1)
                                        H.rechercher_projet_technologique(titre)->Modifier_Projet();
                                    else if (c == 2)
                                        H.rechercher_projet_design(titre)->Modifier_Projet();
                                    break;
                                }
                                case 4:
                                    H.Afficher_classement_projet();
                                    break;
                                case 0:
                                    break;
                            }

                            break;
                        case 9:
                             do {
                                cout << endl << " Gestion des sponsors" << endl;
                                cout << "1 - Ajouter sponsor" << endl;
                                cout << "2 - Supprimer Sponsor" << endl;
                                cout << "3 - Afficher sponsor" << endl;
                                cout << "4 - Modifier sponsor" << endl;
                                cout << "0 - Quitter" << endl;
                                cout << endl << "Votre choix : ";
                                cin >> choix;
                                if (choix < 0 && choix > 4) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                                } while (choix < 0 || choix > 4);

                            switch (choix) {
                                case 1: {
                                    H.ajouter_sponsor() ;
                                    break;
                                }
                                case 2:
                                    H.supprimer_sponsor();
                                    break;
                                case 3: {
                                    H.afficher_sponsors () ;
                                    break;
                                }
                                case 4: {
                                    string nom1;
                                    cout << endl << " Saisir nom sponsor a modifier : ";
                                    cin >> nom1;

                                    H.rechercher_sponsor(nom1)->modifier_sponsor();
                                    break;
                                }

                                case 0:
                                    break;
                                default:
                                    cout << endl << "Choix invalide. Veuillez reessayer." << endl;
                            }

                            break;
                        case 10:
                            do {
                                cout << endl << " Gestion du Hackathon " << endl;
                                cout << "1 - Modifier Hackathon" << endl;
                                cout << "2 - Afficher Hackathon" << endl;
                                cout << "3 - Afficher Budget" << endl;
                                cout << "0 - Quitter" << endl;
                                cout << endl << "Votre choix : ";
                                cin >> choix;
                                if (choix < 0 && choix > 3) cout<<endl<<"Choix invalide. Veuillez entrer une option valide " <<endl ;
                                } while (choix < 0 || choix > 3);

                            switch (choix) {
                                case 1:
                                    H.modifier();
                                    break;

                                case 2:
                                    cout<<H ;
                                    break;
                                case 3:
                                    cout<< " Le budget de ce hackathon est : "<<H.Calculer_budget ()<<" Dt" <<endl;
                                    break;
                            }

                            break;
                      case 11: {
                            message m;
                            int choix;
                            do {
                                cout << "Menu des messages" << endl;
                                cout << "1- Saisir informations de messages" << endl;
                                cout << "2- Afficher les destinataires d'un message" << endl;
                                cout << "3- Ajouter ou supprimer des destinataires d'un message" << endl;
                                cout << "4- Afficher le contenu d'un message" << endl;
                                cin >> choix;
                                switch (choix) {
                                    case 1: {
                                        int rep, nb;
                                        cin >> m;
                                        cout << "Ajout des destinataires" << endl;
                                        cout << "Saisir le nombre à ajouter" << endl;
                                        cin >> nb;
                                        for (int i = 0; i < nb; i++) {
                                            m.ajouter_destin();
                                        }
                                        cout << "Voulez-vous supprimer des destinataires ?" << endl;
                                        cout << "1- Oui" << endl << "2- Non" << endl;
                                        cin >> rep;
                                        if (rep == 1) {
                                            do {
                                                int id;
                                                bool s;
                                                cout << "Veuillez saisir l'id du destinataire à supprimer" << endl;
                                                cin >> id;
                                                s = m.supprimer_dest(id);
                                                if (s == true) {
                                                    cout << "Supprimé avec succès";
                                                } else {
                                                    cout << "Introuvable";
                                                }
                                            } while(rep == 1);
                                        } else if (rep != 2) {
                                            cout << "Choix invalide" << endl;
                                        }
                                        messages.push_back(m);
                                        break;
                                    }
                                    case 2: {
                                        cout << "Les destinataires sont :" << endl;
                                        m.afficher_dest();
                                        break;
                                    }
                                    case 3: {
                                        int rep, nb;
                                        cout << "1- Ajouter des destinataires" << endl;
                                        cout << "2- Supprimer des destinataires" << endl;
                                        cin >> rep;
                                        switch (rep) {
                                            case 1: {
                                                cout << "Saisir le nombre à ajouter" << endl;
                                                cin >> nb;
                                                for (int i = 0; i < nb; i++) {
                                                    m.ajouter_destin();
                                                }
                                                break;
                                            }
                                            case 2: {
                                                int id;
                                                bool s;
                                                cout << "Veuillez saisir l'id du destinataire à supprimer" << endl;
                                                cin >> id;
                                                s = m.supprimer_dest(id);
                                                if (s == true) {
                                                    cout << "Supprimé avec succès";
                                                } else {
                                                    cout << "Introuvable";
                                                }
                                                break;
                                            }
                                            case 3: {
                                                cout << m;
                                                break;
                                            }
                                            default: {
                                                cout << "Choix invalide";
                                            }
                                        }
                                        break;
                                    }
                                }
                            } while(choix != 4);
                            break;
                        }


                            break;
                        case 12:
                            H.Afficher_classement_projet();
                            break;
                        case 13:
                            H.Annoncer_gagnants () ;
                            break;
                        case 14:
                            H.rechercher_organisateur(nom, prenom)->modifier() ; ;
                            break;
                        case 0:
                            break;

                    }
                }
                else if (typepersonne == -2) {
                    cout << endl << " Vous devez d'abord vous inscrire ";
                    break ;
                }
                }while ( choix != 0 ) ;
            }
        } while (true);
    }
    else {
        Participant P ;
        cin>>P ;

        P.ouvrirFichier("C:\\Users\\toumi\\Desktop\\projet c++\\Gestion d'un Hachathon\\Participants.txt") ;

        P.viderFichier("C:\\Users\\toumi\\Desktop\\projet c++\\Gestion d'un Hachathon\\Participants.txt") ;

        P.remplirFichier("C:\\Users\\toumi\\Desktop\\projet c++\\Gestion d'un Hachathon\\Participants.txt");


        P.afficherFichier("C:\\Users\\toumi\\Desktop\\projet c++\\Gestion d'un Hachathon\\Participants.txt");


        //P.viderFichier("C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Participants.txt")

    }
    return 0;
}





