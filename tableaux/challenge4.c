#include <stdio.h>

int main(){
    int n;
    
    int max =0;

    printf("entrez la taile de tableau : ");
    scanf("%d",&n);

    int tab[n];

    for (int i =0; i<n; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }

    for (int i =0; i<=n; i++) {
        if(tab[i]>max){
            max=tab[i];
        }
     
    }
    printf("le max de tableau est : %d \n", max);

     //Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers.
     //Le programme doit demander le nombre d'éléments et les éléments du tableau.

}
