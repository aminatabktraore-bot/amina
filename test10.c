#include<stdio.h>
int main(){
    float produit,prix,quantite,mht,mttc;
    float tva=0.18;
    char libelle[50];
    printf("veuiller saisir  les produits");
    scanf("%f",&produit);
    printf("veuiller saisir le prix unitaire");
    scanf("%f",&prix);
    printf("veuiller saisir la quantite");
    scanf("%f",&quantite);
    mht=prix*produit;
    mttc=mht + (mht * tva);
    printf("libelle:%s\n",libelle);
    printf("quantite:%.2f\n",quantite);
    printf("prix unitaire:%.2f\n",prix);
    printf("montant hors taxe:%2.f",mht);
    printf("montant toute taxe comprise:%2.f",mttc);

}



