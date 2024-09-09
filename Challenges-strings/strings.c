Challenge 1:
int main(){
    char Nom[100];
    printf("Donner Votre nom : ");
    scanf("%s",Nom);

    printf("Your Name is : %s ",Nom);


 return 0;
}
challenge 2:
int main(){
    char Nom[100];
    int taille;
    printf("Donner Votre nom : ");
    scanf("%s",Nom);
    taille=strlen(Nom);
    printf("La taille de votre nom est  : %d ",taille);


 return 0;
}
challenge 3:
int main(){
    char Nom[100];
    char Prenom[100];

    printf("Donner Votre nom : ");
    scanf("%s",Nom);
    printf("Donner Votre Prenom: ");
    scanf("%s",Prenom);

    printf("Full name is : %s ",strcat(Nom, Prenom));


 return 0;
}
challenge 4:
    int main(){
    char Nom1[100];
    char Nom2[100];

    printf("Donner Votre nom 1 : ");
    scanf("%s",Nom1);
    printf("Donner Votre nom 2 : ");
    scanf("%s",Nom2);

    if(strcmp(Nom1,Nom2) == 0){
        printf("You have the same name ! ");
    }else{
        printf("You have different name ! ");
    }


 return 0;
}
challenge 5:
int main(){
    char Nom[100];

    printf("Donner Votre nom  : ");
    scanf("%s",Nom);

    printf("l'inverse de votre nom est : %s ",strrev(Nom));


 return 0;
}
challenge 6:
int main()
{
    char Nom[100];
    int count;

    printf("Donner Votre nom  : ");
    scanf("%s",Nom);
    for(int i=0;i<strlen(Nom);i++)
    {
        printf("%c \n",Nom[i]);
    }
        printf("\n Et voila le counteur :  %d ",strlen(Nom));

    return 0;
}
challenge 7:
int main()
{
    char Nom[100];
    int count;

    printf("Donner Votre nom  : ");
    scanf("%s",Nom);
    printf("Voila le majuscule de nom : %s ",strupr(Nom));


    return 0;
}
challenge 8:
int main()
{
    char Nom[100];
    int count;

    printf("Donner Votre nom  : ");
    scanf("%s",Nom);
    printf("Voila le miniscule de nom : %s ",strlwr(Nom));


    return 0;
}
challenge 9:


