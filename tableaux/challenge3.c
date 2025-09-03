#include <stdio.h>

int main(){
    int n;
    
    int somme =0;

    printf("entrez la taile de tableau : ");
    scanf("%d",&n);
    int tab[n];

    for (int i =0; i<n; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }

    for (int i =0; i<=n; i++) {
        
        somme = somme + tab[i];
    }
    printf("la somme de tableau est : %d \n", somme);


        
 //Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers.
 // Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.
    

}


