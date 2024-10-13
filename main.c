#include "sokoban.h"
#include <stdio.h>

int main() {
    char mouvement;
    initialiserPlateau();
    
    do {
        afficherPlateau();
        printf("Entrez votre mouvement (w/s/a/d): ");
        scanf(" %c", &mouvement);
        if (deplacerJoueur(mouvement)) {
            if (verifierVictoire()) {
                printf("Vous avez gagné !\n");
                break;
            }
        } else {
            printf("Mouvement invalide !\n");
        }
    } while (1);

    return 0;
}
