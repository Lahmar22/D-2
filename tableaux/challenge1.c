#include <stdio.h>

int main(){
    int tab[5];

    for (int i =0; i<=5; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }

    for (int i =0; i<=5; i++) {
        printf("tab[%d] = %d \n",i,tab[i]);
        
    
    }


    return 0;

    

}

