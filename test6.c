//EXO6

#include <stdio.h>
int main(){
        float n1,n2,n3;
        float c1,c2,c3;
        float moyenne;
        printf("entrer la note 1: ");
        scanf("%f",&n1);
        printf("entrer la note 2 : ");
        scanf("%f",&n2);
        printf("entrer la note 3 : ");
        scanf("%f,&n3 : ");
        printf("entrer le coefficient de note 1 : ");
        scanf("%f",&c1);
        printf("entrer le coefficient de note 2 : ");
        scanf("%f",&c2);
        printf("entrer le coefficient de note 3 : ");
        scanf("%f",&c3);
        moyenne = (n1*c1 + n2*c2 + n3*c3)/(c1 + c2 + c3);
        printf("la moyenne de l etudiant est : %.2f\n",moyenne);

}
