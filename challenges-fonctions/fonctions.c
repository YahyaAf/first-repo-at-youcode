Premier Exercice pour les fonctions:
    #include <stdio.h>
#include <stdlib.h>
#include <math.h>


void Max(int A,int B){
    if(A>B){
        printf("le maximum est %d \n",A);
    }else{
        printf("le maximum est %d\n",B);
    }
}
void Min(int A,int B){
    if(A<B){
        printf("le minimum est %d\n",A);
    }else{
         printf("le minimum est %d\n",B);
    }
}

int main()
{
    int A,B;
    printf("Donner le nombre A : ");
    scanf("%d",&A);
    printf("Donner le nombre B : ");
    scanf("%d",&B);
    Min(A,B);
    Max(A,B);


    return 0;
}
challenge 1:
    int Somme(int A,int B){
    int S;
    S=A+B;
    return S;
}
int main()
{
    int A,B,S;
    printf("Donner le nombre A : ");
    scanf("%d",&A);
    printf("Donner le nombre B : ");
    scanf("%d",&B);
    S=Somme(A,B);
    printf("La somme de A + B =  %d ",S);

    return 0;
}
challenge 2:
int Produit(int A,int B){
    int P;
    P=A*B;
    return P;
}
int main()
{
    int A,B,P;
    printf("Donner le nombre A : ");
    scanf("%d",&A);
    printf("Donner le nombre B : ");
    scanf("%d",&B);
    P=Produit(A,B);
    printf("Le Produit de A * B =  %d ",P);

    return 0;
}
challenge 3:
int Max(int A,int B){
    int max;
    if(A>B){
        max=A;
    }else{
        max=B;
    }
    return max;
}

int main()
{
    int A,B,max;
    printf("Donner le nombre A : ");
    scanf("%d",&A);
    printf("Donner le nombre B : ");
    scanf("%d",&B);
    max=Max(A,B);
    printf("le maximum est : %d ",max);


    return 0;
}
challenge 4:
int Min(int A,int B){
    int min;
    if(A<B){
        min=A;
    }else{
        min=B;
    }
    return min;
}

int main()
{
    int A,B,min;
    printf("Donner le nombre A : ");
    scanf("%d",&A);
    printf("Donner le nombre B : ");
    scanf("%d",&B);
    min=Min(A,B);
    printf("le minimum est : %d ",min);


    return 0;
}
challenge 5:
int Factoreil(int N){
    int f=1,i;
    for(i=1;i<=N;i++){
        f=f*i;
    }
    if(N=0){
        f=1;
    }
    return f;
}

int main()
{
    int N,f;
    printf("Donner le nombre N : ");
    scanf("%d",&N);
    f=Factoreil(N);
    if(N<0){
       printf("Erreur");
    }else{
        printf("Factoreil de ce nombre est : %d ",f);
    }

    return 0;
}
challenge 8:
    int Pair_Impair(int N){
    int S;
    if(N%2==0){
        S=0;
    }else{
        S=1;
    }
    return S;
}
int main()
{
    int N,f;
    printf("Donner le nombre N : ");
    scanf("%d",&N);
    f=Pair_Impair(N);
    printf("La resultat est : %d",f);


    return 0;
}
challenge 7:

void Inverstion(char mot[20]){
    printf("La resultat est : %s",strrev(mot));
}
int main()
{
    char mot[20];
    printf("Donner le nombre N : ");
    scanf("%s",&mot);
    Inverstion(mot);


    return 0;
}
challenge 6:


int fib(int N){
    if(N<2){
        return N;
    }else{
        return fib(N-1)+fib(N-2);
    }

}
int main()
{
    int N,i;
    printf("Donner le nombre N : ");
    scanf("%d",&N);
    printf("list de fibonacci de nombre N est : %d \n",N);
    for(i=0;i<=N;i++){
        printf("%d \n",fib(i));
    }

    return 0;
}



