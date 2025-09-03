#include <stdio.h>

int main(){
    int n;

    printf("entrez la taile de tableau :");
    scanf("%d",&n);

    int tab[n];

    for (int i =0; i<n; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }

    int min = tab[0];
    

    for (int i =0; i<=n; i++) {
        if(tab[i]<min){
            min=tab[i];
        }
      
    }
    printf("le min de tableau est : %d \n", min);

    return 0;

    // Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. 
    // Le programme doit demander le nombre d'éléments et les éléments du tableau.

}
