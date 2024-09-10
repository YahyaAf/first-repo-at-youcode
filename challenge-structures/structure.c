challenge 1:
typedef struct{
    char nom[100];
    char prenom[100];
    int age;
}Personne;

int main()
{
    Personne pers;
    printf("Donner votre nom : ");
    scanf("%s",pers.nom);
    printf("Donner votre prenom : ");
    scanf("%s",pers.prenom);
    printf("Donner votre age : ");
    scanf("%d",&pers.age);

    printf("%s %s \n",pers.prenom,pers.nom);
    printf("J'ai %d ans\n",pers.age);


    return 0;
}
challenge 2:
typedef struct{
    char nom[100];
    char prenom[100];
    int note;
}Personne;

int main()
{
    Personne pers[100];
    int n;
    printf("give Number the Personne u need to add : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Donner votre nom %d : ",i+1);
        scanf("%s",pers[i].nom);
        printf("Donner votre prenom %d : ",i+1);
        scanf("%s",pers[i].prenom);
        printf("Donner votre note %d : ",i+1);
        scanf("%d",&pers[i].note);

    }

    for(int i=0;i<n;i++){
        printf("votre nom : %s\n",pers[i].nom);
        printf("votre prenom : %s\n",pers[i].prenom);
        if(pers[i].note>20){
            printf("Note est bigger than 20 \n");

        }else{
            printf("votre note : %d\n",pers[i].note);
        }

    }


    return 0;
}
challenge 3:
    typedef struct{
    int longueur;
    int largeur;
}Rectangle;

void aire_rectangle(Rectangle rec){
    int aire;
    printf("Donner longueur de rectangle : ");
    scanf("%d",&rec.longueur);
    printf("Donner largeur de rectangle : ");
    scanf("%d",&rec.largeur);
    aire=rec.longueur*rec.largeur;
    printf("L'aire de cette rectangle est : %d : ",aire);
}

int main()
{
    Rectangle rec;
    aire_rectangle(rec);


    return 0;
}
challenge 4:


