#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} DateNaissance;

typedef struct {
    int numeroUnique;
    char nom[100];
    char prenom[100];
    DateNaissance date;
    char departement[100];
    float note_generale;
} Etudiant;


void Ajoute_Etudiant(Etudiant etu[], int *n) {
    int count = 0;
    int choix;

    printf("Entrer Nombre d'etudiant pour l'Ajoute : ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {

        etu[i].numeroUnique = i+1;
        printf("Donner Le nom de Etudiant %d : ", i + 1);
        scanf("%s", etu[i].nom);
        printf("Donner Le prenom de Etudiant %d : ", i + 1);
        scanf("%s", etu[i].prenom);
        do{
                printf("Donner jour de naissance de Etudiant %d : ", i + 1);
                scanf("%d", &etu[i].date.day);
                if (etu[i].date.day < 0 || etu[i].date.day > 31) {
                    printf("Date invalide. Assurez-vous que le jour <= 31 \n");
                }
        }while(etu[i].date.day < 0 || etu[i].date.day > 31);
        do{
                printf("Donner le mois de naissance de Etudiant %d : ", i + 1);
                scanf("%d", &etu[i].date.month);
                if (etu[i].date.month < 0 || etu[i].date.month > 12) {
                    printf("Date invalide. Assurez-vous que le mois <= 12 \n");
                }
        }while(etu[i].date.month < 0 || etu[i].date.month > 12);
        do{
            printf("Donner L'annee de naissance de Etudiant %d : ", i + 1);
            scanf("%d", &etu[i].date.year);
            if (etu[i].date.year < 1995 || etu[i].date.year > 2007 ){
                    printf("L'age entre 30 et 18 ans \n");
            }
        }while((etu[i].date.year < 1995 || etu[i].date.year > 2007 ));
        printf("  Departement:  \n");
        printf("\t 1-dev \n");
        printf("\t 2-reseaux \n");
        printf("\t 3-gestion \n");
        scanf(" %d",&choix);
        switch(choix)
        {
        case 1:
            strcpy(etu[i].departement, "dev");
            break;
        case 2:
            strcpy(etu[i].departement, "reseaux");
            break;
        case 3:
            strcpy(etu[i].departement, "gestion");
            break;
        default:
            printf(" il ya seulement trois choix !! \n");
            break;
        }
        do {
                printf("Donner la note generale de Etudiant %d : ", i + 1);
                scanf("%f", &etu[i].note_generale);
                if (etu[i].note_generale < 0 || etu[i].note_generale > 20) {
                    printf("Note invalide. Assurez-vous que la note est entre 0 et 20.\n");
                }
        } while (etu[i].note_generale < 0 || etu[i].note_generale > 20);

    }

    *n += count;
}
void Update_Etudiant(Etudiant etu[], int n) {
    int id;
    int trouve = 0;
    int choix;

    printf("Donner le numero unique de l'etudiant pour modifier : ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (etu[i].numeroUnique == id) {
            printf("Donner le nouveau nom : ");
            scanf("%s", etu[i].nom);
            printf("Donner le nouveau prenom : ");
            scanf("%s", etu[i].prenom);
            do{
                printf("Donner le nouveau jour de naissance : ");
                scanf("%d", &etu[i].date.day);
                if (etu[i].date.day < 0 || etu[i].date.day > 31) {
                    printf("Date invalide. Assurez-vous que le jour <= 31 \n");
                }
            }while(etu[i].date.day < 0 || etu[i].date.day > 31);

            do{
                printf("Donner le nouveau mois de naissance : ");
                scanf("%d", &etu[i].date.month);
                if (etu[i].date.month < 0 || etu[i].date.month > 12) {
                    printf("Date invalide. Assurez-vous que le mois <= 12 \n");
                }
            }while(etu[i].date.month < 0 || etu[i].date.month > 12);
            do{
                printf("Donner le nouveaux L'annee de naissance de Etudiant %d : ", i + 1);
                scanf("%d", &etu[i].date.year);
                if (etu[i].date.year < 1995 || etu[i].date.year > 2007 ){
                        printf("L'age entre 30 et 18 ans \n");
                }
            }while((etu[i].date.year < 1995 || etu[i].date.year > 2007 ));
            printf("  Departement:  \n");
                printf("\t 1-dev \n");
                printf("\t 2-reseaux \n");
                printf("\t 3-gestion \n");
                scanf(" %d",&choix);
                switch(choix){
                case 1:
                    strcpy(etu[i].departement, "dev");
                    break;
                case 2:
                    strcpy(etu[i].departement, "reseaux");
                    break;
                case 3:
                    strcpy(etu[i].departement, "gestion");
                    break;
                default:
                    printf(" il ya seulement trois choix !! \n");
                    break;
                }
            do {
                printf("Donner la nouvelle note generale : ");
                scanf("%f", &etu[i].note_generale);
                if (etu[i].note_generale < 0 || etu[i].note_generale > 20) {
                    printf("Note invalide. Assurez-vous que la note est entre 0 et 20.\n");
                }
            } while (etu[i].note_generale < 0 || etu[i].note_generale > 20);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("L'etudiant avec le numero unique <%d> n'a pas été trouvé.\n", id);
    }
}

void Delete(Etudiant etu[], int *n) {
    int id;
    int trouve = 0;

    printf("Donner le numero unique de l'etudiant pour la suppression : ");
    scanf("%d", &id);

    for (int i = 0; i < *n; i++) {
        if (etu[i].numeroUnique == id) {
            printf("Suppression de l'etudiant avec le numero unique <%d> \n", id);
            trouve = 1;
            for (int j = i; j < *n - 1; j++) {
                etu[j] = etu[j + 1];
            }
            (*n)--;
        }
    }
    if (!trouve) {
        printf("L'etudiant avec le numero unique <%d> n'a pas ete trouve \n", id);
    }
}

void AfficherDetails(Etudiant etu[], int n){
    int id;
    int trouve = 0;
    printf("Donner le numero unique de l'etudiant pour afficher les details : ");
    scanf("%d", &id);
    for (int i = 0; i < n; i++) {
        if (etu[i].numeroUnique == id) {
            printf("Détails de l'etudiant avec le numero unique <%d>:\n", id);
            printf("Nom : %s\n", etu[i].nom);
            printf("Prenom : %s\n", etu[i].prenom);
            printf("Date de naissance : %d/%d/%d\n", etu[i].date.day, etu[i].date.month, etu[i].date.year);
            printf("Departement : %s\n", etu[i].departement);
            printf("Note generale : %.2f\n", etu[i].note_generale);
            trouve = 1;
        }
    }
    if (!trouve) {
        printf("L'etudiant avec le numero unique <%d> n'a pas ete trouve\n", id);
    }
}

void Moyenne_Dev(Etudiant etu[], int n) {
    float sommeDev = 0;
    int countDev = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "dev") == 0) {
            sommeDev += etu[i].note_generale;
            countDev++;
        }
    }

    if (countDev > 0) {
        float moyDev = sommeDev / countDev;
        printf("La moyenne du département developpement est : %.2f \n", moyDev);
    } else {
        printf("Aucun étudiant dans le département developpement \n");
    }
}

void Moyenne_Reseaux(Etudiant etu[], int n) {
    float sommeRes = 0;
    int countRes = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "reseaux") == 0) {
            sommeRes += etu[i].note_generale;
            countRes++;
        }
    }

    if (countRes > 0) {
        float moyRes = sommeRes / countRes;
        printf("La moyenne du departement réseaux est : %.2f \n", moyRes);
    } else {
        printf("Aucun étudiant dans le departement réseaux \n");
    }
}

void Moyenne_Gestion(Etudiant etu[], int n){
    float sommeGes = 0;
    int countGes = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "gestion") == 0) {
            sommeGes += etu[i].note_generale;
            countGes++;
        }
    }

    if (countGes > 0) {
        float moyGes = sommeGes / countGes;
        printf("La moyenne du departement gestion est : %.2f \n", moyGes);
    } else {
        printf("Aucun étudiant dans le departement gestion \n");
    }
}

void Moyenne_Generale(Etudiant etu[], int n){
    float somme= 0;
    float moy;
    for (int i = 0; i < n; i++) {
        somme+=etu[i].note_generale;
    }
    moy=somme/n;
    printf("Voia moyenne generale de l'universite : %.2f \n",moy);

}

void Nombre_Etudiant_total(Etudiant etu[], int n){
    printf("Le Nombre d'Etudiant total est : %d \n",n);
}

void Nombre_Etudiant_Dev(Etudiant etu[], int n){
    int countDev = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "dev") == 0) {
            countDev++;
        }
    }
    printf("Le Nombre d'Etudiant Dans departement developpement est : %d \n",countDev);

}

void Nombre_Etudiant_Reseaux(Etudiant etu[], int n){
    int countRes = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "reseaux") == 0) {
            countRes++;
        }
    }
    printf("Le Nombre d'Etudiant Dans departement Reseaux est : %d \n",countRes);
}

void Nombre_Etudiant_Gestion(Etudiant etu[], int n){
    int countGes = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "gestion") == 0) {
            countGes++;
        }
    }
    printf("Le Nombre d'Etudiant Dans departement Gestion est : %d \n",countGes);
}

void Etudiant_Seuil(Etudiant etu[], int n){
    printf("Les etudiants ayant une moyenne generale superieure a 12 : \n");
    for (int i = 0; i < n; i++) {
        if (etu[i].note_generale>12){
            printf("%s %s de numero unique %d Et de Departement %s. \n",etu[i].prenom,etu[i].nom,etu[i].numeroUnique,etu[i].departement);
        }
    }
}

void Afficher_Top_3(Etudiant etu[], int n){
    if (n < 3) {
        printf("Il n'y a pas assez d'Etudiants pour afficher les 3 meilleurs \n");
        return;
    }
    Etudiant temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (etu[i].note_generale < etu[j].note_generale) {
                temp = etu[i];
                etu[i] = etu[j];
                etu[j] = temp;
            }
        }
    }
    printf("Les 3 Etudiants ayant les meilleures notes sont :\n");
    for (int i = 0; i < 3; i++) {
        printf("Nom : %s\n", etu[i].nom);
        printf("Prenom : %s\n", etu[i].prenom);
        printf("Date de naissance : %d/%d/%d\n", etu[i].date.day, etu[i].date.month, etu[i].date.year);
        printf("Departement : %s\n", etu[i].departement);
        printf("Note generale : %.2f\n", etu[i].note_generale);
        printf("===========================================\n");
    }
}


void Etudiant_Reussi_Dev(Etudiant etu[], int n){
    int count=0;
    for (int i = 0; i < n; i++) {
        if(etu[i].note_generale>=10 && strcmp(etu[i].departement, "dev") == 0 ){
            count++;
        }
    }
    printf("Les Etudiants Reussi Dans le developpement : %d\n",count);
}

void Etudiant_Reussi_Reseaux(Etudiant etu[], int n){
    int count=0;
    for (int i = 0; i < n; i++) {
        if(etu[i].note_generale>=10 && strcmp(etu[i].departement, "reseaux") == 0 ){
            count++;
        }
    }
    printf("Les Etudiants Reussi Dans le reseaux : %d\n",count);
}

void Etudiant_Reussi_Gestion(Etudiant etu[], int n){
    int count=0;
    for (int i = 0; i < n; i++) {
        if(etu[i].note_generale>=10 && strcmp(etu[i].departement, "gestion") == 0 ){
            count++;
        }
    }
    printf("Les Etudiants Reussi Dans le gestion : %d\n",count);
}

void Etudiant_Par_Nom(Etudiant etu[], int n) {
    char nomR[100];
    int trouve = 0;

    printf("Donner le nom de l'etudiant pour afficher les details : ");
    scanf("%s", nomR);

    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].nom, nomR) == 0) {
            printf("Details de l'etudiant avec le numero unique <%d>:\n", etu[i].numeroUnique);
            printf("Nom : %s\n", etu[i].nom);
            printf("Prenom : %s\n", etu[i].prenom);
            printf("Date de naissance : %d/%d/%d\n", etu[i].date.day, etu[i].date.month, etu[i].date.year);
            printf("Departement : %s\n", etu[i].departement);
            printf("Note generale : %.2f\n", etu[i].note_generale);
            trouve = 1;
        }
    }
    if (!trouve) {
        printf("L'etudiant avec le nom <%s> n'a pas ete trouve\n", nomR);
    }
}

void Etudiant_Par_Dev(Etudiant etu[], int n){
    printf("List des Etudiant Inscrit sur Departement developemment : \n");
    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "dev") == 0) {
            printf("L'etudiant avec le numero unique <%d>:\n", etu[i].numeroUnique);
            printf("Nom : %s\n", etu[i].nom);
            printf("Prenom : %s\n", etu[i].prenom);
            printf("Date de naissance : %d/%d/%d\n", etu[i].date.day, etu[i].date.month, etu[i].date.year);
            printf("Departement : %s\n", etu[i].departement);
            printf("Note generale : %.2f\n", etu[i].note_generale);
            printf("==================================\n");
        }
    }
}

void Etudiant_Par_Reseaux(Etudiant etu[], int n){
    printf("List des Etudiant Inscrit sur Departement reseaux : \n");
    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "reseaux") == 0) {
            printf("L'etudiant avec le numero unique <%d>:\n", etu[i].numeroUnique);
            printf("Nom : %s\n", etu[i].nom);
            printf("Prenom : %s\n", etu[i].prenom);
            printf("Date de naissance : %d/%d/%d\n", etu[i].date.day, etu[i].date.month, etu[i].date.year);
            printf("Departement : %s\n", etu[i].departement);
            printf("Note generale : %.2f\n", etu[i].note_generale);
            printf("==================================\n");
        }
    }
}

void Etudiant_Par_Gestion(Etudiant etu[], int n){
    printf("List des Etudiant Inscrit sur Departement gestion : \n");
    for (int i = 0; i < n; i++) {
        if (strcmp(etu[i].departement, "gestion") == 0) {
            printf("L'etudiant avec le numero unique <%d>:\n", etu[i].numeroUnique);
            printf("Nom : %s\n", etu[i].nom);
            printf("Prenom : %s\n", etu[i].prenom);
            printf("Date de naissance : %d/%d/%d\n", etu[i].date.day, etu[i].date.month, etu[i].date.year);
            printf("Departement : %s\n", etu[i].departement);
            printf("Note generale : %.2f\n", etu[i].note_generale);
            printf("==================================\n");
        }
    }
}

void Trier_Par_Nom(Etudiant etu[], int n) {
    Etudiant temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(etu[i].nom, etu[j].nom) > 0) {
                temp = etu[i];
                etu[i] = etu[j];
                etu[j] = temp;
            }
        }
    }
    printf("Liste des noms des étudiants triés par ordre croissant :\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", etu[i].nom);
    }
}
void Trier_Par_Moyenne(Etudiant etu[], int n){
    Etudiant temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (etu[i].note_generale < etu[j].note_generale) {
                temp = etu[i];
                etu[i] = etu[j];
                etu[j] = temp;
            }
        }
    }
    printf("Liste des Etudiants triés par moyenne generale en ordre croissant :\n");
    for (int i = 0; i < n; i++) {
        printf("Nom : %s, Prenom : %s, Moyenne generale : %.2f\n", etu[i].nom, etu[i].prenom, etu[i].note_generale);
    }
}

void Trier_Par_Statut(Etudiant etu[], int n){
    printf("Étudiants réussis (moyenne >= 10) :\n");
    for (int i = 0; i < n; i++) {
        if (etu[i].note_generale >= 10) {
            printf("Nom : %s, Prénom : %s, Moyenne générale : %.2f\n", etu[i].nom, etu[i].prenom, etu[i].note_generale);
        }
    }
    printf("Étudiants non réussis (moyenne < 10) :\n");
    for (int i = 0; i < n; i++) {
        if (etu[i].note_generale < 10) {
            printf("Nom : %s, Prénom : %s, Moyenne générale : %.2f\n", etu[i].nom, etu[i].prenom, etu[i].note_generale);
        }
    }
}

int main() {
    Etudiant etu[100];
    int n = 0;
    int choix;
    do {
        printf("\n                        <<<<<< Universite YahyaCode >>>>>> :\n\n\n\n");
        printf("1- Ajouter Un Etudiant \n ");
        printf("2- Modifier Un Etudiant \n ");
        printf("3- Supprimer Un Etudiant \n ");
        printf("4- Affiche Details D'un Etudiant Par Numero Unique \n ");
        printf("5- La moyenne générale de chaque département et de L’université entière \n");
        printf("- Statistiques : \n");
        printf("        6- Le nombre total d'étudiants inscrits \n");
        printf("        7- le nombre d'étudiants dans chaque département \n");
        printf("        8- Les étudiants ayant une moyenne générale supérieure à un certain seuil \n");
        printf("        9- Afficher les 3 étudiants ayant les meilleures notes. \n");
        printf("        10- Afficher le nombre d'étudiants ayant réussi dans chaque département \n");
        printf("11- Rechercher un étudiant par son nom \n");
        printf("12- Afficher la liste des étudiants inscrits dans un département spécifique \n");
        printf("13- Tri alphabétique des étudiants en fonction de leur nom \n");
        printf("14- Tri des étudiants par moyenne générale, du plus élevé au plus faible ou inversement \n");
        printf("15- Tri des étudiants selon leur statut de réussite  \n");
        printf("16- Quitter\n");
        printf("choisie un nombre from menu : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                Ajoute_Etudiant(etu, &n);
                break;
            case 2:
                Update_Etudiant(etu,n);
                break;
            case 3:
                Delete(etu,&n);
                break;
            case 4:
                AfficherDetails(etu,n);
                break;
            case 5:
                Moyenne_Reseaux(etu,n);
                Moyenne_Dev(etu,n);
                Moyenne_Gestion(etu,n);
                Moyenne_Generale(etu,n);
                break;
            case 6:
                Nombre_Etudiant_total(etu,n);
                break;
            case 7:
                Nombre_Etudiant_Dev(etu,n);
                Nombre_Etudiant_Reseaux(etu,n);
                Nombre_Etudiant_Gestion(etu,n);
                break;
            case 8:
                Etudiant_Seuil(etu,n);
                break;
            case 9:
                Afficher_Top_3(etu,n);
                break;
            case 10:
                Etudiant_Reussi_Dev(etu,n);
                Etudiant_Reussi_Reseaux(etu,n);
                Etudiant_Reussi_Gestion(etu,n);
                break;
            case 11:
                Etudiant_Par_Nom(etu,n);
                break;
            case 12:
                Etudiant_Par_Dev(etu,n);
                Etudiant_Par_Reseaux(etu,n);
                Etudiant_Par_Gestion(etu,n);
                break;
            case 13:
                Trier_Par_Nom(etu,n);
                break;
            case 14:
                Trier_Par_Moyenne(etu,n);
                break;
            case 15:
                Trier_Par_Statut(etu,n);
                break;
            case 16:
                printf("Quitter le programme !! ");
                break;
            default:
                printf("The number u chose not found \n");
        }
    } while (choix != 16);














    return 0;
}
