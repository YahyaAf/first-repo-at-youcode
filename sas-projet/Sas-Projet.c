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


int isIDUnique(Etudiant etu[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (etu[i].numeroUnique == id) {
            return 0;
        }
    }
    return 1;
}
void Ajoute_Etudiant(Etudiant etu[], int *n) {
    int count = 0;
    int id;

    printf("Entrer Nombre d'etudiant pour l'Ajoute : ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        do {
            printf("Donner Le numero unique de Etudiant %d : ", i + 1);
            scanf("%d", &id);
            if (!isIDUnique(etu, *n, id)) {
                printf("Le numero est déjà utilisé !! ");
            }
        } while (!isIDUnique(etu, *n, id));

        etu[i].numeroUnique = id;

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
        printf("Donner L'annee de naissance de Etudiant %d : ", i + 1);
        scanf("%d", &etu[i].date.year);
        do{
                printf("Donner le departement(dev/reseaux) de Etudiant %d :\n ", i + 1);
                scanf("%s", etu[i].departement);
                if(strcmp(etu[i].departement, "dev") != 0 && strcmp(etu[i].departement, "reseaux") != 0){
                    printf("Votre departement not found !! \n");
                }
        }while(strcmp(etu[i].departement, "dev") != 0 && strcmp(etu[i].departement, "reseaux") != 0);
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

            printf("Donner la nouvelle annee de naissance : ");
            scanf("%d", &etu[i].date.year);
            do{
                printf("Donner le nouveau departement(dev/reseaux) : ");
                scanf("%s", etu[i].departement);
                if(etu[i].departement!="dev" || etu[i].departement!="reseaux"){
                    printf("Votre departement not found !! ");
                }
            }while(etu[i].departement!="dev" || etu[i].departement!="reseaux");
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

int main() {
    Etudiant etu[100];
    int n = 0;

    Ajoute_Etudiant(etu, &n);
    //Update_Etudiant(etu,n);
    //Delete(etu,&n);
    AfficherDetails(etu,n);

    return 0;
}
