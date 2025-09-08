#include <stdio.h>

void max(int a , int b){
    if(a>b){
        printf("a est plus grand");

    }else if(a==b) {
        printf("A=b");
    
    }else {
        printf("b est plus grand");
    
    }
}

int main(){
    int a=6;
    int b=5;
    
    
    max(a, b);

}
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux. 
// Créez un programme principal qui utilise cette fonction pour afficher le maximum entre deux nombres.