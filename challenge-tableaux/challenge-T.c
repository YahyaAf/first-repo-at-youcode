challenge 1:
int main()
{
    int T[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
        printf("%d",T[i]);
    }




    return 0;
}
challenge 2:

int main()
{
    int T[50];
    int i;
    int n;
    int nombre;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner la valeur des nombres : ");
        scanf("%d",&nombre);
        T[i]=nombre;
    }
    for(i=0;i<n;i++){
        printf("la valeur de nombre %d est : %d \n",i+1,T[i]);
    }

    return 0;
}
challenge 3:
int main()
{
    int T[50];
    int i;
    int n;
    int nombre;
    int somme=0;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner la valeur des nombres : ");
        scanf("%d",&nombre);
        T[i]=nombre;
        somme=somme+nombre;
    }
    printf("la somme totale de cette element est : %d \n",somme);

    return 0;
}
challenge 4:
int main()
{
    int T[50];
    int i;
    int n;
    int nombre;
    int max=0;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner la valeur des nombres : ");
        scanf("%d",&nombre);
        T[i]=nombre;
        if(max<T[i]){
            max=T[i];
        }
    }
    printf("Le max nombre de cette element est : %d \n",max);

    return 0;
}
challenge 5:
int main()
{
    int T[50];
    int i;
    int n;
    int nombre;
    int min;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner la valeur des nombres : ");
        scanf("%d",&nombre);
        T[i]=nombre;
        if(min>T[i]){
            min=T[i];
        }
    }
    printf("Le min nombre de cette element est : %d \n",min);

    return 0;
}
challenge 6:
int main()
{
    int T[50];
    int i;
    int n;
    int nombre;
    int facteur;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    printf("Donner le facteur : ");
    scanf("%d",&facteur);

    for(i=0;i<n;i++){
        printf("donner la valeur des nombres : ");
        scanf("%d",&nombre);
        T[i]=nombre*facteur;
    }
    for(i=0;i<n;i++){
        printf("la valeur de facteur de nombre %d est : %d \n",i+1,T[i]);
    }

    return 0;
}
challenge 14:
int main()
{
    int n;
    int i;
    int somme=0;
    float moy;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++){
        printf("entre la valeur %d : ",i+1);
        scanf("%d",&T[i]);
        somme=somme+T[i];
        moy=somme/n;
    }
    printf("voila la somme de ces elements : %d \n",somme);
    printf("Et voila la moyenne :  %f",moy);

    return 0;
}
challenge 8;
int main()
{
    int n;
    int i,j;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    int T[n];
    int J[n];
    for(i=0;i<n;i++){
        printf("entre la valeur %d : ",i+1);
        scanf("%d",&T[i]);
        for(j=0;j<n;j++){
            J[i]=T[i];
        }
    }
     for(i=0;i<n;i++){
        printf("T1  : %d \n",T[i]);
        }
     for(i=0;i<n;i++){
        printf("T2  : %d \n",J[i]);
     }


    return 0;
}
challenge 12:
int main()
{
    int n;
    int i;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++){
        printf("entre la valeur %d : ",i+1);
        scanf("%d",&T[i]);
     }
     for(i=0;i<n;i++){
        if(T[i]%2!=0){
            printf("les valeur %d : \n",T[i]);
        }
     }


    return 0;
}
challenge 13:
    int main()
{
    int n;
    int i;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++){
        printf("entre la valeur %d : ",i+1);
        scanf("%d",&T[i]);
     }
     for(i=0;i<n;i++){
        if(T[i]%2==0){
            printf("les valeur %d : \n",T[i]);
        }
     }


    return 0;
}





