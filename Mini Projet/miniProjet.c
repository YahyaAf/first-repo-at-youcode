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

int main(){
int n;
printf("Donner le nombre de livre pour la creation : ");
scanf("%d",&n);
Livre liv[n];
Ajouter(liv,n);
Affiche(liv,n);



return 0;

}
