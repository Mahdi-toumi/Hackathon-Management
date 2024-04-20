#include <C:\Users\toumi\Desktop\projet c++\Gestion d'un Hachathon\Hackathon.h>




    Hackathon H1("Innovate_Together", "Future_Technologies",Date(25, 4, 2024), "Silicon_Valley, California");
    Hackathon H2("CodeCrafters_Challenge", "AI_and_Machine_Learning",Date(15, 5, 2024), "New York City, New_York");
    Hackathon H3("Byte_Bash", "Cybersecurity_Solutions",Date(8, 6, 2024), "London, United_Kingdom");
    Hackathon H4("TechSpark_Innovation", "Blockchain_Applications",Date(2, 7, 2024), "Tokyo, Japan");







void Hackathon::Remplir_donnes (){

Participant* P1 = new Participant("John", "Doe", "john.doe@example.com", 25);
Participant* P2 = new Participant("Alice", "Smith", "alice.smith@example.com", 30);
Participant* P3 = new Participant("Bob", "Johnson", "bob.johnson@example.com", 28);
Participant* P4 = new Participant("Emily", "Brown", "emily.brown@example.com", 35);
Participant* P5 = new Participant("Michael", "Wilson", "michael.wilson@example.com", 22);
Participant* P6 = new Participant("Sophia", "Martinez", "sophia.martinez@example.com", 27);
Participant* P7 = new Participant("William", "Anderson", "william.anderson@example.com", 32);
Participant* P8 = new Participant("Olivia", "Thomas", "olivia.thomas@example.com", 29);
Participant* P9 = new Participant("James", "Taylor", "james.taylor@example.com", 26);
Participant* P10 = new Participant("Emma", "Hernandez", "emma.hernandez@example.com", 31);

juge* J1 = new juge("David", "Wilson", "david.wilson@example.com", 45, "Senior_software_engineer", "Software_Development");
juge* J2 = new juge("Sarah", "Johnson", "sarah.johnson@example.com", 50, "Cybersecurity_specialist", "Cybersecurity");
juge* J3 = new juge("Michael", "Brown", "michael.brown@example.com", 48, "Machine_learning_researcher", "Artificial_Intelligence");
juge* J4 = new juge("Jennifer", "Miller", "jennifer.miller@example.com", 55, "Blockchain_expert", "Blockchain_Technology");
juge* J5 = new juge("Christopher", "Davis", "christopher.davis@example.com", 52, "Data_scientist", "Data_Analysis");
juge* J6 = new juge("Elizabeth", "Garcia", "elizabeth.garcia@example.com", 47, "Cloud_computing_architect", "Cloud_Computing");
juge* J7 = new juge("Matthew", "Rodriguez", "matthew.rodriguez@example.com", 49, "Mobile_application_developer", "Mobile_Development");
juge* J8 = new juge("Jessica", "Martinez", "jessica.martinez@example.com", 51, "Game_developer", "Game_Development");
juge* J9 = new juge("Daniel", "Hernandez", "daniel.hernandez@example.com", 46, "Network_security_engineer", "Network_Security");
juge* J10 = new juge("Susan", "Lopez", "susan.lopez@example.com", 53, "Web_developer", "Web_Development");

organisateur* O1 = new organisateur("Richard", "White", "richard.white@example.com", "Event_planning");
organisateur* O2 = new organisateur("Mary", "Jackson", "mary.jackson@example.com", "Logistics_management");
organisateur* O3 = new organisateur("Thomas", "Harris", "thomas.harris@example.com", "Marketing_and_promotion");
organisateur* O4 = new organisateur("Patricia", "Young", "patricia.young@example.com", "Sponsorship_coordination");
organisateur* O5 = new organisateur("Charles", "Lee", "charles.lee@example.com", "Volunteer_coordination");
organisateur* O6 = new organisateur("Karen", "Lewis", "karen.lewis@example.com", "Technical_support");
organisateur* O7 = new organisateur("Mark", "Scott", "mark.scott@example.com", "Financial_management");
organisateur* O8 = new organisateur("Laura", "Allen", "laura.allen@example.com", "Communication_and_PR");
organisateur* O9 = new organisateur("Kevin", "King", "kevin.king@example.com", "Venue_management");
organisateur* O10 = new organisateur("Michelle", "Wright", "michelle.wright@example.com", "Registration_coordination");

Equipe* E1 = new Equipe("Les_Innovateurs");
Equipe* E2 = new Equipe("Les_Codeurs");
Equipe* E3 = new Equipe("Les_Gardiens_du_Code");
Equipe* E4 = new Equipe("Les_Pionniers_de_la_Technologie");
Equipe* E5 = new Equipe("Les_Visionnaires");
Equipe* E6 = new Equipe("Les_Maitres_du_Developpement");
Equipe* E7 = new Equipe("Les_Experts_en_Programmation");
Equipe* E8 = new Equipe("Les_Genies_du_Code");

Equipe_organisatrice* EOrg1 = new Equipe_organisatrice("Equipe_de_Planification");
Equipe_organisatrice* EOrg2 = new Equipe_organisatrice("Equipe_de_Logistique");
Equipe_organisatrice* EOrg3 = new Equipe_organisatrice("Equipe_de_Communication");
Equipe_organisatrice* EOrg4 = new Equipe_organisatrice("Equipe_de_Finances");
Equipe_organisatrice* EOrg5 = new Equipe_organisatrice("Equipe_de_Marketing");
Equipe_organisatrice* EOrg6 = new Equipe_organisatrice("Equipe_de_Ressources_Humaines");
Equipe_organisatrice* EOrg7 = new Equipe_organisatrice("Equipe_de_Securite");

Projet_design* pd1 = new Projet_design("Site_Web", "En_cours", "Design_Responsive");
Projet_design* pd2 = new Projet_design("Application_Mobile", "Termine", "Interface_Utilisateur_Intuitive");
Projet_design* pd3 = new Projet_design("Application_Web", "En_attente", "Design_Moderne");
Projet_design* pd4 = new Projet_design("Brochure", "En_cours", "Mise_en_Page_Professionnelle");

Projet_technologique* pt1 = new Projet_technologique("Systeme_de_Gestion_de_Base_de_Donnees", "En_cours", "Base_de_Donnees");
Projet_technologique* pt2 = new Projet_technologique("Plateforme_de_E-commerce", "En_attente", "Commerce_Electronique");
Projet_technologique* pt3 = new Projet_technologique("Application_de_Gestion_de_Stock", "Termine", "Gestion_de_Stock");
Projet_technologique* pt4 = new Projet_technologique("Systeme de Réservation_en_Ligne", "En_cours", "Reservation_en_Ligne");

sponsor* s1 = new sponsor("Microsoft", "contact@microsoft.com", 1234567890, 10000.0);
sponsor* s2 = new sponsor("Google", "contact@google.com", 9876543210, 15000.0);
sponsor* s3 = new sponsor("Apple", "contact@apple.com", 5555555555, 8000.0);
sponsor* s4 = new sponsor("Amazon", "contact@amazon.com", 6666666666, 12000.0);
sponsor* s5 = new sponsor("Facebook", "contact@facebook.com", 7777777777, 9000.0);
sponsor* s6 = new sponsor("Tesla", "contact@tesla.com", 8888888888, 11000.0);
sponsor* s7 = new sponsor("IBM", "contact@ibm.com", 9999999999, 7500.0);
sponsor* s8 = new sponsor("Netflix", "contact@netflix.com", 1111111111, 8500.0);
sponsor* s9 = new sponsor("Samsung", "contact@samsung.com", 2222222222, 9500.0);
sponsor* s10 = new sponsor("Toyota", "contact@toyota.com", 3333333333, 7000.0);


    // Ajout des Participants
    this->ajouter_participant(P1);  //
    this->ajouter_participant(P2);
    this->ajouter_participant(P3);
    this->ajouter_participant(P4);
    this->ajouter_participant(P5);
    this->ajouter_participant(P6);
    this->ajouter_participant(P7);
    this->ajouter_participant(P8);
    this->ajouter_participant(P9);
    this->ajouter_participant(P10);

    // Ajout des juges
    this->ajouter_juge(J1);
    this->ajouter_juge(J2);
    this->ajouter_juge(J3);
    this->ajouter_juge(J4);
    this->ajouter_juge(J5);
    this->ajouter_juge(J6);
    this->ajouter_juge(J7);
    this->ajouter_juge(J8);
    this->ajouter_juge(J9);
    this->ajouter_juge(J10);

    // Ajout des organisateurs
    this->ajouter_organisateur(O1);
    this->ajouter_organisateur(O2);
    this->ajouter_organisateur(O3);
    this->ajouter_organisateur(O4);
    this->ajouter_organisateur(O5);
    this->ajouter_organisateur(O6);
    this->ajouter_organisateur(O7);
    this->ajouter_organisateur(O8);
    this->ajouter_organisateur(O9);
    this->ajouter_organisateur(O10);

    // Ajout des équipes
    this->ajouter_equipe(E1);
    this->ajouter_equipe(E2);
    this->ajouter_equipe(E3);
    this->ajouter_equipe(E4);
    this->ajouter_equipe(E5);
    this->ajouter_equipe(E6);
    this->ajouter_equipe(E7);
    this->ajouter_equipe(E8);

    // Ajout des équipes organisatrices
    this->ajouter_equipes_organisatrice(EOrg1);
    this->ajouter_equipes_organisatrice(EOrg2);
    this->ajouter_equipes_organisatrice(EOrg3);
    this->ajouter_equipes_organisatrice(EOrg4);
    this->ajouter_equipes_organisatrice(EOrg5);
    this->ajouter_equipes_organisatrice(EOrg6);
    this->ajouter_equipes_organisatrice(EOrg7);

    // Ajout des projets design
    this->ajouter_projet(pd1);
    this->ajouter_projet(pd2);
    this->ajouter_projet(pd3);
    this->ajouter_projet(pd4);

    // Ajout des projets technologiques
    this->ajouter_projet(pt1);
    this->ajouter_projet(pt2);
    this->ajouter_projet(pt3);
    this->ajouter_projet(pt4);


    this->ajouter_sponsor(s1);
    this->ajouter_sponsor(s2);
    this->ajouter_sponsor(s3);
    this->ajouter_sponsor(s4);
    this->ajouter_sponsor(s5);
    this->ajouter_sponsor(s6);
    this->ajouter_sponsor(s7);
    this->ajouter_sponsor(s8);
    this->ajouter_sponsor(s9);
    this->ajouter_sponsor(s10);


    E1->Ajouter_membre(P1) ; E1->setChef_equipe(P1)  ; E1->Ajouter_membre(P2) ; E1->Ajouter_membre(P3) ; E1->Ajouter_membre(P4) ;
    EOrg1->Ajouter_membre(O1); EOrg1->Ajouter_membre(O2); EOrg1->Ajouter_membre(O3); EOrg1->Ajouter_membre(O4);

}


/*{

       Participant* P1 = new Participant("John", "Doe", "john.doe@example.com", 25);
Participant* P2 = new Participant("Alice", "Smith", "alice.smith@example.com", 30);
Participant* P3 = new Participant("Bob", "Johnson", "bob.johnson@example.com", 28);
Participant* P4 = new Participant("Emily", "Brown", "emily.brown@example.com", 35);
Participant* P5 = new Participant("Michael", "Wilson", "michael.wilson@example.com", 22);
Participant* P6 = new Participant("Sophia", "Martinez", "sophia.martinez@example.com", 27);
Participant* P7 = new Participant("William", "Anderson", "william.anderson@example.com", 32);
Participant* P8 = new Participant("Olivia", "Thomas", "olivia.thomas@example.com", 29);
Participant* P9 = new Participant("James", "Taylor", "james.taylor@example.com", 26);
Participant* P10 = new Participant("Emma", "Hernandez", "emma.hernandez@example.com", 31);

juge* J1 = new juge("David", "Wilson", "david.wilson@example.com", 45, "Senior_software_engineer", "Software_Development");
juge* J2 = new juge("Sarah", "Johnson", "sarah.johnson@example.com", 50, "Cybersecurity_specialist", "Cybersecurity");
juge* J3 = new juge("Michael", "Brown", "michael.brown@example.com", 48, "Machine_learning_researcher", "Artificial_Intelligence");
juge* J4 = new juge("Jennifer", "Miller", "jennifer.miller@example.com", 55, "Blockchain_expert", "Blockchain_Technology");
juge* J5 = new juge("Christopher", "Davis", "christopher.davis@example.com", 52, "Data_scientist", "Data_Analysis");
juge* J6 = new juge("Elizabeth", "Garcia", "elizabeth.garcia@example.com", 47, "Cloud_computing_architect", "Cloud_Computing");
juge* J7 = new juge("Matthew", "Rodriguez", "matthew.rodriguez@example.com", 49, "Mobile_application_developer", "Mobile_Development");
juge* J8 = new juge("Jessica", "Martinez", "jessica.martinez@example.com", 51, "Game_developer", "Game_Development");
juge* J9 = new juge("Daniel", "Hernandez", "daniel.hernandez@example.com", 46, "Network_security_engineer", "Network_Security");
juge* J10 = new juge("Susan", "Lopez", "susan.lopez@example.com", 53, "Web_developer", "Web_Development");

organisateur* O1 = new organisateur("Richard", "White", "richard.white@example.com", "Event_planning");
organisateur* O2 = new organisateur("Mary", "Jackson", "mary.jackson@example.com", "Logistics_management");
organisateur* O3 = new organisateur("Thomas", "Harris", "thomas.harris@example.com", "Marketing_and_promotion");
organisateur* O4 = new organisateur("Patricia", "Young", "patricia.young@example.com", "Sponsorship_coordination");
organisateur* O5 = new organisateur("Charles", "Lee", "charles.lee@example.com", "Volunteer_coordination");
organisateur* O6 = new organisateur("Karen", "Lewis", "karen.lewis@example.com", "Technical_support");
organisateur* O7 = new organisateur("Mark", "Scott", "mark.scott@example.com", "Financial_management");
organisateur* O8 = new organisateur("Laura", "Allen", "laura.allen@example.com", "Communication_and_PR");
organisateur* O9 = new organisateur("Kevin", "King", "kevin.king@example.com", "Venue_management");
organisateur* O10 = new organisateur("Michelle", "Wright", "michelle.wright@example.com", "Registration_coordination");

Equipe* E1 = new Equipe("Les_Innovateurs");
Equipe* E2 = new Equipe("Les_Codeurs");
Equipe* E3 = new Equipe("Les_Gardiens_du_Code");
Equipe* E4 = new Equipe("Les_Pionniers_de_la_Technologie");
Equipe* E5 = new Equipe("Les_Visionnaires");
Equipe* E6 = new Equipe("Les_Maitres_du_Developpement");
Equipe* E7 = new Equipe("Les_Experts_en_Programmation");
Equipe* E8 = new Equipe("Les_Genies_du_Code");

Equipe_organisatrice* EOrg1 = new Equipe_organisatrice("Equipe_de_Planification");
Equipe_organisatrice* EOrg2 = new Equipe_organisatrice("Equipe_de_Logistique");
Equipe_organisatrice* EOrg3 = new Equipe_organisatrice("Equipe_de_Communication");
Equipe_organisatrice* EOrg4 = new Equipe_organisatrice("Equipe_de_Finances");
Equipe_organisatrice* EOrg5 = new Equipe_organisatrice("Equipe_de_Marketing");
Equipe_organisatrice* EOrg6 = new Equipe_organisatrice("Equipe_de_Ressources_Humaines");
Equipe_organisatrice* EOrg7 = new Equipe_organisatrice("Equipe_de_Securite");

Projet_design* pd1 = new Projet_design("Site_Web", "En_cours", "Design_Responsive");
Projet_design* pd2 = new Projet_design("Application_Mobile", "Termine", "Interface_Utilisateur_Intuitive");
Projet_design* pd3 = new Projet_design("Application_Web", "En_attente", "Design_Moderne");
Projet_design* pd4 = new Projet_design("Brochure", "En_cours", "Mise_en_Page_Professionnelle");

Projet_technologique* pt1 = new Projet_technologique("Systeme_de_Gestion_de_Base_de_Donnees", "En_cours", "Base_de_Donnees");
Projet_technologique* pt2 = new Projet_technologique("Plateforme_de_E-commerce", "En_attente", "Commerce_Electronique");
Projet_technologique* pt3 = new Projet_technologique("Application_de_Gestion_de_Stock", "Termine", "Gestion_de_Stock");
Projet_technologique* pt4 = new Projet_technologique("Systeme de Réservation_en_Ligne", "En_cours", "Reservation_en_Ligne");




    // Ajout des Participants
    H.ajouter_participant(P1);
    H.ajouter_participant(P2);
    H.ajouter_participant(P3);
    H.ajouter_participant(P4);
    H.ajouter_participant(P5);
    H.ajouter_participant(P6);
    H.ajouter_participant(P7);
    H.ajouter_participant(P8);
    H.ajouter_participant(P9);
    H.ajouter_participant(P10);

    // Ajout des juges
    H.ajouter_juge(J1);
    H.ajouter_juge(J2);
    H.ajouter_juge(J3);
    H.ajouter_juge(J4);
    H.ajouter_juge(J5);
    H.ajouter_juge(J6);
    H.ajouter_juge(J7);
    H.ajouter_juge(J8);
    H.ajouter_juge(J9);
    H.ajouter_juge(J10);

    // Ajout des organisateurs
    H.ajouter_organisateur(O1);
    H.ajouter_organisateur(O2);
    H.ajouter_organisateur(O3);
    H.ajouter_organisateur(O4);
    H.ajouter_organisateur(O5);
    H.ajouter_organisateur(O6);
    H.ajouter_organisateur(O7);
    H.ajouter_organisateur(O8);
    H.ajouter_organisateur(O9);
    H.ajouter_organisateur(O10);

    // Ajout des équipes
    H.ajouter_equipe(E1);
    H.ajouter_equipe(E2);
    H.ajouter_equipe(E3);
    H.ajouter_equipe(E4);
    H.ajouter_equipe(E5);
    H.ajouter_equipe(E6);
    H.ajouter_equipe(E7);
    H.ajouter_equipe(E8);

    // Ajout des équipes organisatrices
    H.ajouter_equipes_organisatrice(EOrg1);
    H.ajouter_equipes_organisatrice(EOrg2);
    H.ajouter_equipes_organisatrice(EOrg3);
    H.ajouter_equipes_organisatrice(EOrg4);
    H.ajouter_equipes_organisatrice(EOrg5);
    H.ajouter_equipes_organisatrice(EOrg6);
    H.ajouter_equipes_organisatrice(EOrg7);

    // Ajout des projets design
    H.ajouter_projet(pd1);
    H.ajouter_projet(pd2);
    H.ajouter_projet(pd3);
    H.ajouter_projet(pd4);

    // Ajout des projets technologiques
    H.ajouter_projet(pt1);
    H.ajouter_projet(pt2);
    H.ajouter_projet(pt3);
    H.ajouter_projet(pt4);}*/
