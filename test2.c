//EXO2

#include <stdio.h>

main(){
     const float pi=3.14;
     float r,c,d,s;
     printf("saisir le rayon");
     scanf("%f",r);
     d = 2 * r;
     s = pi * r * r;
     c = 2 * r * pi;
     printf("le diametre est %.2f% \n",d);
     printf("surface %.2f \n",s);
     printf("cisconfrrence %.2f \n",c);

}
