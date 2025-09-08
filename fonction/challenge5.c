#include <stdio.h>

void factorielle(int a ){
    int fact = 1;
    if(a>0){
        for (int i=1; i<=a; i++) {
            fact *= i;
        
        }
        printf("factorielle de %d est : %d",a,fact);
    }else {
        printf("la valeur est negative svp entrez valeur positive : ");
    }
    
}

int main(){
    int a=5;
  
    factorielle(a);

}
//Écrivez une fonction en C qui calcule la factorielle d'un entier positif. La fonction doit prendre un entier en paramètre et retourner sa factorielle. 
// Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.