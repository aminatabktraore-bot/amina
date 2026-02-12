//EXO 4

#include <stdio.h>
int main(){
    int a,b,temp;
    printf("entrer le premier entier: ");
    scanf("%d",&a);
    printf("entrer le deuxieme entier: ");
    scanf("%d",&b);
    printf("avant permutation : a = %d, b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("apres permutation: a = %d, b= %d\n",a,b);

}
