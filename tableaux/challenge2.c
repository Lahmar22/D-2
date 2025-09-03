#include <stdio.h>

int main(){
    int tab[5];
    int somme =0;

    for (int i =0; i<5; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }

    for (int i =0; i<=5; i++) {
        
        somme = somme + tab[i];
    
    }
    printf("la somme des elements du tableau est : %d \n", somme);

    return 0;



}

