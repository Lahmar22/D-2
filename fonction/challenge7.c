#include <stdio.h>
#include <string.h>

void inverse(char chaine[] ){
    int i, j;
    char temp;
    int n = strlen(chaine); 

    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = temp;
    }
}

int main(){
    char texte[100];
    printf("entrez un chaîne de caractères : ");
    scanf("%s",texte);

    inverse(texte);

    printf("La chaine inversee est : %s\n", texte);


}

// Écrivez une fonction en C qui inverse une chaîne de caractères. 
// La fonction doit prendre une chaîne en paramètre et retourner la chaîne inversée. 
// Créez un programme principal qui utilise cette fonction pour afficher une chaîne inversée.