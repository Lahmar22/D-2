#include <stdio.h>

int main(){
    int n;
    
    int facteur;

    printf("entrez la taile de tableau : ");
    scanf("%d",&n);
    int tab[n];

    for (int i =0; i<n; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }
    printf("entrez le facteur de multiplication : ");
    scanf("%d",&facteur);

    for (int i =0; i<=n; i++) {
        
        tab[i] = tab[i] * facteur;
    }
    
    printf("Tableau apres multiplication :\n");
    for (int i =0; i<n; i++) {
        printf("tab[%d] = %d \n",i,tab[i]);
        
    
    }

    return 0;

}

// Écrivez un programme C qui multiplie chaque élément d'un tableau d'entiers par un facteur donné et affiche le tableau résultant. 
// Le programme doit demander le nombre d'éléments, les éléments du tableau, et le facteur de multiplication.

