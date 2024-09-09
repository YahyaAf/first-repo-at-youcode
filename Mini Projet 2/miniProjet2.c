#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

typedef struct{
    char nom[100];
    char numero[100];
    char email[150];
    }Contact;

void Ajouter(Contact ct[],int *n){
    int count,i;
    printf("Donner le nombre du contact pour ajouter : ");
    scanf("%d",&count);
    for(i=0;i<*n+count;i++){
        printf("Donner le nom %d : ",i+1);
        scanf("%s",ct[i].nom);
        printf("Donner le numero de telephone %d : ",i+1);
        scanf("%s",ct[i].numero);
        printf("Donner l'adresse email %d : ",i+1);
        scanf("%s",ct[i].email);
    }
    *n= count + *n;
}
void Update(Contact ct[],int n){
    char nomR[100];
    char numeroNew[100];
    char emailNew[150];
    int trouve=0;
    printf("Donner le nom tu recherche dans le contact : ");
    scanf("%s",nomR);
    for(int i=0;i<n;i++){
        if(strcmp(ct[i].nom,nomR) == 0){
        printf("Donner la nouvelle numero de telephone : ");
        scanf("%s",numeroNew);
        printf("Donner la nouvelle adresse email : ");
        scanf("%s",emailNew);
        strcpy(ct[i].numero, numeroNew);
        strcpy(ct[i].email, emailNew);
        trouve=1;
        }
    }
    if(!trouve){
        printf("the name is not fount ! ");
    }
}
void Delete(Contact ct[], int *n){
    char nomR[100];
    int trouve=0;
    int i,j;
    printf("Donner le nom tu recherche pour la supression : ");
    scanf("%s",nomR);
    for(i=0;i<*n;i++){
        if(strcmp(ct[i].nom,nomR)== 0){
            printf("La supression valider ! \n");
            trouve = 1;
            for(j=i;j<*n-1;j++){
                ct[j]=ct[j+1];
            }
            (*n)--;
        }
    }
    if(!trouve){
        printf("the name is not fount \n! ");
    }
}
void Affichage(Contact ct[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Le nom de cette contact %d est : %s \n",i+1,ct[i].nom);
        printf("Le numero de cette contact %d est : %s \n",i+1,ct[i].numero);
        printf("Le email de cette contact %d est : %s \n",i+1,ct[i].email);
    }
}
void Recherche(Contact ct[], int n){
    int i;
    char nomR[100];
    int trouve=0;
    printf("Donner le nom tu recherche pour la l'affichage : ");
    scanf("%s",nomR);
    for(i=0;i<n;i++){
        if(strcmp(ct[i].nom,nomR)== 0 ){
            printf("Le nom de cette contact est : %s \n",ct[i].nom);
            printf("Le numero de cette contact est : %s \n",ct[i].numero);
            printf("Le email de cette contact est : %s \n",ct[i].email);
            trouve=1;
        }
    }
    if(!trouve){
        printf("the name is not fount \n! ");
    }
}
int main(){
    int i,choix;
    Contact ct[100];
    int n=0;

do {
    printf("\nMenu : \n ");
    printf("1-Ajouter \n");
    printf("2-Modifier \n");
    printf("3-Delete \n");
    printf("4-Affichage \n");
    printf("5-Affichage By Nom \n");
    printf("6-Quitter \n");
    scanf("%d",&choix);

    switch(choix){
        case 1:
            Ajouter(ct,&n);
            break;
        case 2:
            Update(ct,n);
            break;
        case 3:
            Delete(ct,&n);
            break;
        case 4:
            Affichage(ct,n);
            break;
        case 5:
            Recherche(ct, n);
            break;
        case 6:
            printf("Quitter le programme ! ");
            break;
        default :
            printf("This number is not found ! ");

    }
}while(choix!=6);




return 0;

}
