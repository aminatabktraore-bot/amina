// EXO1

#include <stdio.h>

main(){
    int a,b;
    int somme,diff,produit, quotient_entier, reste;
    float quotient_reel;
    printf("donner la premiere valeur : ");
    scanf("%d",&a);
    printf("donner deuxieme  valeur : ");
    scanf("%d",&b);
    somme = a + b;
    diff = a - b;
    produit = a * b;
    quotient_entier = a / b;
    reste = a % b;
    quotient_reel = (float) a / b;

    printf("%d + %d = %d  \n",a,b,somme);
    printf("%d - %d = %d  \n",a,b,diff);
    printf("%d * %d = %d  \n",a,b,produit);
    printf("%d / %d = %d  \n",a,b,quotient_entier);
    printf("%d %% %d = %d  \n",a,b,reste);
    printf("%d / %d = %.2f  \n",a,b,quotient_reel);

}
