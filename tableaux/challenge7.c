#include <stdio.h>

int main(){
    int n;
    
    printf("entrez la taile de tableau : ");
    scanf("%d",&n);
    int tab[n];
    int tabCroissant[n];

    for (int i =0; i<n; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }

    int min = tab[0];
    printf("le tableau en ordre croissant");

    for (int i =0; i<n; i++) {
       
    
    }
   
    
    

    return 0;

}

// Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers, 
// puis affiche le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.