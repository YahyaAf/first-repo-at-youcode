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
int main(){
    int i,choix;
    Contact ct[100];
    int n=0;
    Ajouter(ct,&n);


return 0;

}
