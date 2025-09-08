#include <stdio.h>

int suite(int u ){
    if (u == 0) return 0;
    if (u == 1) return 1; 
    return suite(u - 1) + suite(u - 2);
}

int main(){
    int u=4;
    int result;
    result = suite(u);
  
    printf("Le terme F(%d) de la suite de Fibonacci est : %d\n",u,result);


}

// Écrivez une fonction en C qui calcule le n-ième terme de la suite de Fibonacci. 
// La fonction doit prendre un entier en paramètre et retourner le n-ième terme. 
// Créez un programme principal qui utilise cette fonction pour afficher le terme de Fibonacci demandé.