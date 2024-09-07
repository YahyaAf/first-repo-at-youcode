#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

typedef struct{
char titre[100];
char auteur[100];
float prix;
int quantite;
}Livre;

void Ajouter(Livre liv[],int *n){
int i;
int count;
printf("Donner le nombre de livre pour ajouter : ");
scanf("%d",&count);
for(i=0;i<*n+count;i++){
    printf("Donner le titre de livre %d : ",i+1);
    scanf("%s",liv[i].titre);
    printf("Donner l'auteur de livre %d : ",i+1);
    scanf("%s",liv[i].auteur);
    printf("Donner le prix de livre %d : ",i+1);
    scanf("%f",&liv[i].prix);
    printf("Donner la quantite de livre %d : ",i+1);
    scanf("%d",&liv[i].quantite);
    printf("=====================\n");
}
*n=count+*n;
}

void Affiche(Livre liv[],int n){
int i;

for(i=0;i<n;i++){
    printf("Livre %d : ",i+1);
    printf("le titre de livre : %s \n",liv[i].titre);
    printf("l'auteur de livre : %s \n",liv[i].auteur);
    printf("le prix de livre  : %.2f \n",liv[i].prix);
    printf("la quantite de livre : %d \n",liv[i].quantite);
    printf("=====================\n");
}
}

void Update(Livre liv[],int n){
    char titreR[100];
    int quantiteNew;
    int trouve=0;
    printf("Donner le titre de livre pour modifier votre quantite de stock : ");
    scanf("%s",titreR);
    for(int i=0;i<n;i++){
    if(strcmp(liv[i].titre,titreR)==0){
        printf("Voila last Quantite de Stock : %d \n",liv[i].quantite);
        printf("Donner la nouvelle quantite : ");
        scanf("%d",&quantiteNew);
        liv[i].quantite=quantiteNew;
        trouve=1;
    }
    }
    if(!trouve){
        printf("le titre tu donner <%s> not found \n",titreR);
    }
}

void Delete(Livre liv[],int *n){
    char titreR[100];
    int trouve=0;
    printf("Donner le titre de livre pour la supression : ");
    scanf("%s",titreR);
    for(int i=0;i<*n;i++){
    if(strcmp(liv[i].titre,titreR)==0){
        printf("la supression valider \n"
               );
        trouve=1;
        for(int j=i;j<*n-1;j++){
            liv[j]=liv[j+1];
        }
        (*n)--;
    }

   }
   if(!trouve){
        printf("le titre tu donner <%s> not found \n",titreR);
}
}

int main(){
    Livre liv[100];
    int n = 0;
    int choix;

    do {
        printf("\nMenu :\n");
        printf("1- Ajouter des livres \n ");
        printf("2- Afficher les livres \n ");
        printf("3- Mettre à jour la quantité d'un livre \n ");
        printf("4- Supprimer un livre \n ");
        printf("5- Quitter\n");
        printf("choisie un nombre from menu : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                Ajouter(liv, &n);
                break;
            case 2:
                Affiche(liv, n);
                break;
            case 3:
                Update(liv, n);
                break;
            case 4:
                Delete(liv, &n);
                break;
            case 5:
                printf("Quitter le programme \n");
                break;
            default:
                printf("The number u chose not found \n");
        }
    } while (choix != 5);

return 0;

}
