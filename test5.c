#include <stdio.h>
#define TVA 0.18
int main(){
    int prix,qte;
    char code[5],lib[20];
    float mht,mttc;
    printf("saisir le prix et la quantite : ");
    scanf("%d,%d",&qte,&prix);
    printf("saisir le code : ");
    scanf("%s",&code);
    printf("saisir le libele : ");
    scanf("%s",&lib);
    mht =prix*qte;
    mttc =(float)mht*(1+TVA);
    printf("***_*** voici les infos du produit***_*** \n");
    printf("code : %s \n",code);
    printf("libele : %s \n",lib);
    printf("prix unitaire : %d \n",prix);
    printf("quantite : %d /n",qte);
    printf("montant hors taxe : %d \n",mht);
    printf("montant ttc : %.3f \n",mttc);

}
