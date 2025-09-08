#include <stdio.h>

void min(int a , int b){
    if(a>b){
        printf("b est plus petit");

    }else if(a==b) {
        printf("A=b");
    
    }else {
        printf("b est plus petit");
    
    }
}

int main(){
    int a=6;
    int b=5;
    
    
    min(a, b);

}

// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux. 
// Créez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.