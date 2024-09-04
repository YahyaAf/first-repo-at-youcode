challenge 1:
int main()
{
    int n;
    int i;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        printf("la valeur de facteur de nombre %d * %d est : %d \n",n,i,i*n);
    }

    return 0;
}
challenge 3:
int main()
{
    int n;
    int i;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("voila le nombre premier %d \n",i);
        }

    }

    return 0;
}
challenge 4:

int main()
{
    int n;
    int res=0;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    while(n!=0){
        int reminder= n%10;
        res=res*10+reminder;
        n/=10;
    }

    printf("Voila l'inverse %d\n",res);

    return 0;
}
challenge 5:
int main()
{
    int n;
    int i;
    int somme=0;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        somme=somme+i;

    }
    printf("La somme de toute les nombres jusqu'a n est : %d",somme);
    return 0;
}
challenge 6:
int main()
{
    int n;
    int i;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("voila les facteurs de ce nombre %d \n",i);
        }

    }

    return 0;
}
challenge 15:
int main()
{
    int n;
    int i;
    int f=1;
    printf("Donner le nombre n : ");
    scanf("%d",&n);
    if(n<0){
        printf("Le nombre obligés positif !");
    }else if(n==0){
        printf("Le factoriel de ce nombre est 1 !");
    }else{
        for(i=1;i<=n;i++){
            f=f*i;
        }
        printf("Le nombre de ce nombre est %d !",f);
    }


    return 0;




