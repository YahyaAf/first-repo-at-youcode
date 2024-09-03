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
