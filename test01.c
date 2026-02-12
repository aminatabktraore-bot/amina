//EXO10

#include <stdio.h>
int main() {
    int jours_total,annee, mois, semaine,reste;
    printf("Entrer le nombre de jours : ");
    scanf("%d", &jours_total);
    annee = jours_total / 365;
    mois = reste / 30;
    reste = reste % 30;
    semaine = reste / 7;
    jours_total = reste % 7;
    jours_total = jours_total % 365;
    printf("le nombre de jour : %d \n",jours_total);
    printf("le nombre d annee : %d \n",annee);
    printf("le nombre de mois : %d \n",mois);
    printf("le nombre de semaaine : %d \n",semaine);


}



