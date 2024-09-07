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

void Ajouter(Livre liv[],int n){
int i;

for(i=0;i<n;i++){
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
    if(!trouve){
        printf("le titre tu donner <%s> not found ",titreR);
    }
}
}
int main(){
int n;
printf("Donner le nombre de livre pour la creation : ");
scanf("%d",&n);
Livre liv[n];
Ajouter(liv,n);
Affiche(liv,n);

Update(liv,n);
Affiche(liv,n);



return 0;

}
