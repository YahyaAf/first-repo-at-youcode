challenge 1:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[10];
    char prenom[10];
    int age;
    char sexe[10];
    char email[10];

    printf("Donner votre nom : \n");
    scanf("%s",&nom);
    printf("Donner votre prenom : \n");
    scanf("%s",&prenom);
    printf("Donner votre age : \n");
    scanf("%d",&age);
    printf("Donner votre sexe : \n");
    scanf("%s",&sexe);
    printf("Donner votre email : \n");
    scanf("%s",&email);
    printf("Nom : %s \n",nom);
    printf("Prenom : %s \n",prenom);
    printf("Age : %d \n",age);
    printf("Sexe : %s \n",sexe);
    printf("Email: %s \n",email);

    return 0;
}
challenge 2:
int main()
{
    float C;
    float K;


    printf("Donner la temperature C : \n");
    scanf("%f",&C);
    K=C+273.15;
    printf("La reusultat est : %.2f",K);

    return 0;
}
challenge 3:
int main()
{
    float km;
    float yards;


    printf("Donner la distance en km : \n");
    scanf("%f",&km);
    yards = km * 1093.61;
    printf("La reusultat est : %.2f",yards);

    return 0;
}
challeneg 4:
int main()
{
    float ms;
    float kmh;


    printf("Donner la vitesse en km : \n");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("La reusultat est : %.2f",ms);

    return 0;
}
challenge 5:
int main()
{
    float C;


    printf("Donner la température C : \n");
    scanf("%f",&C);
    if(C<0){
        printf("Solide \n");
    }
    if(C<0){
        printf("Solide \n");
    }
    if(C>=0 && C<100){
        printf("Liquide \n");
    }
    if(C>=100){
        printf("Gaz \n");
    }
    return 0;
}
challenge 6:
int main()
{
    float A;
    float B;
    float S;
    float M;
    float P;


    printf("Donner Le nombre A : \n");
    scanf("%f",&A);
    printf("Donner Le nombre B : \n");
    scanf("%f",&B);
    S=A+B;
    M=A-B;
    P=A*B;
    printf("A + B = %.2f : \n",S);
    printf("A - B = %.2f : \n",M);
    printf("A * B = %.2f : \n",P);
    if(B==0)
        printf("La division sur 0 impossible ");
    else
        printf("A / B = %f : \n",A/B);



    return 0;
}
challenge 7:
int main()
{
    float A;
    float B;
    float C;
    float M;


    printf("Donner Le premier nombre A : \n");
    scanf("%f",&A);
    printf("Donner Le deuxième nombre B : \n");
    scanf("%f",&B);
    printf("Donner Le troisième nombre B : \n");
    scanf("%f",&C);
    M=(A*2+B*3+C*5)/3;
    printf("La moyenne de cette nombre est :%.2f \n",M);


    return 0;
}
challenge 8:
int main()
{
    float A;
    float B;
    float C;
    float MG;


    printf("Donner Le premier nombre A : \n");
    scanf("%f",&A);
    printf("Donner Le deuxième nombre B : \n");
    scanf("%f",&B);
    printf("Donner Le troisième nombre C : \n");
    scanf("%f",&C);
    MG=pow((A*B*C),(1/3));
    printf("La moyenne geometrie de cette nombres est :%.2f \n",MG);


    return 0;
}
challenge 9:
int main()
{
    float x1,x2,y1,y2,z1,z2;
    float Distance;

    printf("Donner le point x1 : \n");
    scanf("%f",&x1);
    printf("Donner le point x2 : \n");
    scanf("%f",&x2);
    printf("Donner le point y1 : \n");
    scanf("%f",&y1);
    printf("Donner le point y2 : \n");
    scanf("%f",&y2);
    printf("Donner le point z1 : \n");
    scanf("%f",&z1);
    printf("Donner le point z2 : \n");
    scanf("%f",&z2);
    Distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("La Distance est :%.2f \n",Distance);


    return 0;
}
challenge 10:
int main()
{
    float r;
    const Pi=3.14;
    float Volume;

    printf("Donner le rayon r : \n");
    scanf("%f",&r);
    Volume = (4/3) * Pi * pow(r,3);
    printf("Le Volume est :%.2f \n",Volume);


    return 0;
}
challenge 11:
int main()
{
    float largeur;
    float longueur;
    float Surface;

    printf("Donner la largeur : \n");
    scanf("%f",&largeur);
    printf("Donner le longueur : \n");
    scanf("%f",&longueur);
    Surface=longueur*largeur;
    printf("La surface est :%.2f \n",Surface);


    return 0;
}
challenge 12:



