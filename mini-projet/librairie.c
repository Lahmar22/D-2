#include <stdio.h>
#include <string.h>

int main(){
    int choix;
    char title[100][100];
    char auteur[100][100];
    float prix[100];
    int quantite[100];
    int nbr = 0;
    int nbrLivre;

    do {
        printf("Menu \n 1: Ajouter un livre au stock.\n 2: Afficher tous les livres disponibles. \n 3: Rechercher un livre par son titre.\n 4: Mettre à jour la quantité d'un livre.\n 5: Supprimer un livre du stock.\n 6: Afficher le nombre total de livres en stock \n 7: Quitter.\n");

        printf("\n Entrez le nombre svp : ");
        scanf("%d",&choix);

        switch (choix) {
            case 1:{
                printf("\n Entrez le nombre des livre pour Ajouter ");
                scanf("%d",&nbrLivre);
                for (int i = 0; i < nbrLivre; i++) {
                    printf("Entrez le Titre du livre : ");
                    scanf("%s", title[nbr]);   
                    printf("Entrez l'Auteur du livre : ");
                    scanf("%s", auteur[nbr]);
                    printf("Entrez le Prix du livre : ");
                    scanf("%f", &prix[nbr]);
                    printf("Entrez la Quantite en stock : ");
                    scanf("%d", &quantite[nbr]);
                    nbr++;
                }
                
                break;
            }
            case 2:{
                if (nbr == 0) {
                    printf("\nAucun livre disponible.\n");
                } else {
                    for (int i = 0; i < nbr; i++) {
                        printf("\nLivre numero : %d\n", i + 1);
                        printf("Titre   : %s\n", title[i]);
                        printf("Auteur  : %s\n", auteur[i]);
                        printf("Prix    : %.2f\n", prix[i]);
                        printf("Quantite: %d\n", quantite[i]);
                    }
                }
                
                break;
            }
            case 3:{
                char recherche[100];
                int indice = 0;
                printf("\nEntrez le titre du livre a rechercher : ");
                scanf("%s", recherche);
                for (int i=0; i<nbr; i++) {
                    if (strcmp(recherche, title[i]) == 0) {
                        printf("Titre   : %s\n", title[i]);
                        printf("Auteur  : %s\n", auteur[i]);
                        printf("Prix    : %.2f\n", prix[i]);
                        printf("Quantite: %d\n", quantite[i]);
                        indice = 1;
                    
                    
                    }
                
                }
                if (!indice) {
                    printf("Livre introuvable.\n");
                
                }
                         
                break;
            }
            case 4:{
                char recherche[100];
                int indice = 0;
                printf("\nEntrez le titre du livre a mettre a jour : ");
                scanf("%s", recherche);
                for (int i=0; i<nbr; i++) {
                    if (strcmp(recherche, title[i]) == 0) {
                        printf("Ancienne quantite: %d\n", quantite[i]);
                        printf("Entrez la nouvelle quantite : ");
                        scanf("%d", &quantite[i]);
                        printf("Quantite mise a jour avec succes.\n");
                        indice = 1;
                    
                    
                    }
                
                }
                if (!indice) {
                    printf("Livre introuvable.\n");
                
                }
                break;
            }
            case 5: { 
                int num;
                int  indice = 0;
                printf("\nEntrez le numero du livre a supprimer (1 - %d) : ", nbr);
                scanf("%d", &num);

                if (num >= 1 && num <= nbr) {
                    
                    for (int j = num - 1; j < nbr - 1; j++) {
                       
                        for (int k = 0; k < 100; k++) {
                            title[j][k] = title[j + 1][k];
                            auteur[j][k] = auteur[j + 1][k];
                        }
                        prix[j] = prix[j + 1];
                        quantite[j] = quantite[j + 1];
                    }

                    nbr--; 
                    printf("Livre supprime avec succes.\n");
                     indice = 1;
                }

                if (!indice) {
                    printf("Numero invalide.\n");
                }
                break;
            }
            case 6:{
                printf("Nombre total de livres en stock : %d\n", nbr);
                break;
            }
            case 7:{
                printf("au revoir ! \n");
                break;
            }
            default:
                printf("svp entrez un numbre de 1 a 7 ");
            break;
                
        
        }
    
    }while (choix != 7);


}