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
}

}
int main(){

int n;
printf("Donner le nombre de livre pour la creation : ");
scanf("%d",&n);
Livre liv[n];
Ajouter(liv,n);


return 0;
}

