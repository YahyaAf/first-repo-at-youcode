#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct{
int produit;
}ventes;

void Ajouter_vendus(ventes vd[],int *n){
    int count=0;
    printf("combien de produits ont ete vendus Aujourd'hui : ");
    scanf("%d",&count);
    for(int i=0;i<count+*n;i++){
        printf("Entrer le montant de la vente du produits %d : ",i+1);
        scanf("%d",&vd[i].produit);
    }
    *n=count+*n;
}
void total_ventes(ventes vd[],int n){
    int somme=0;
    for(int i=0;i<n;i++){
        somme=vd[i].produit+somme;
    }
    printf("Le total des ventes est : %d \n",somme);
}
void Max_Min(ventes vd[],int n){
    int Max=0;
    int Min=vd[0].produit;
    for(int i=0;i<n;i++){
        if(vd[i].produit>Max){
            Max=vd[i].produit;
        }else if(vd[i].produit<Min){
            Min=vd[i].produit;
        }
    }
    printf("Le maximum est : %d \n",Max);
    printf("Le minimum est : %d \n",Min);

}
void Superieure_Moyenne(ventes vd[],int n){
    int somme=0;
    int moy;
    for(int i=0;i<n;i++){
        somme=vd[i].produit+somme;
    }
    moy=somme/n;
    for(int i=0;i<n;i++){
        if(vd[i].produit>moy){
        printf("Les ventes superieure a une moyenne est : %d \n",vd[i].produit);
        }
    }
}
void Vente_Sup_100(ventes vd[],int n){
    for(int i=0;i<n;i++){
        if(vd[i].produit>100){
            printf("Les ventes superieure a 100 est : %d \n",vd[i].produit);
        }
    }

}
void Vente_Inf_100(ventes vd[],int n){
    for(int i=0;i<n;i++){
        if(vd[i].produit<100){
            printf("Les ventes inferieure a 100 est : %d \n",vd[i].produit);
        }
    }
}


int main()
{
    char choix;
    ventes vd[100];
    int n=0;
    Ajouter_vendus(vd,&n);

    do{
        printf("1-Calculer le total des ventes \n");
        printf("2-Trouver la vente la plus elevee et la plus basse \n ");
        printf("3-afficher les ventes superieure a une moyenne \n");
        printf("4-compter le nombre de ventes superieure a 100 \n");
        printf("5-compter le nombre de ventes inferieure a 100 \n");
        printf("6-Quitter \n");
        scanf("%d",&choix);

        switch(choix){
        case 1:
            total_ventes(vd,n);
            break;
        case 2:
            Max_Min(vd,n);
            break;
        case 3:
            Superieure_Moyenne(vd,n);
            break;
        case 4:
            Vente_Sup_100(vd,n);
            break;
        case 5:
            Vente_Inf_100(vd,n);
            break;
        case 6:
            printf("Quitter le programme ");
            break;
        default:
            printf("the numbre not found ! ");
        }
    }while(choix!=6);



    return 0;
}
