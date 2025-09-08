#include <stdio.h>
//#include <string.h>

struct Personne{
    char nom [100];
    char prenom [100];
    int age ;

};

int main(){
    struct Personne P ;
    // struct Personne P = {"zaki","lahmar",23};
    // strcpy(P.nom, "Zaki");     
    // strcpy(P.prenom, "Lahmar");
    // P.age = 23;                
    printf("entrez le nom : ");
    scanf("%s",P.nom);
    printf("entrez le prenom : ");
    scanf("%s",P.prenom);
    printf("entrez le age : ");
    scanf("%d",&P.age);

    // Affichage
    printf("Nom     : %s\n", P.nom);
    printf("Prenom  : %s\n", P.prenom);
    printf("Age     : %d\n", P.age);

    
    

    return 0;
}