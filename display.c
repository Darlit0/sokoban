#include "sokoban.h"
#include <stdio.h>

void afficherPlateau() {
    for (int i = 0; i < TAILLE; i++) {
        for (int j = 0; j < TAILLE; j++) {
            switch (plateau[i][j]) {
                case MUR:
                    printf("#");
                    break;
                case JOUEUR:
                    printf("O");
                    break;
                case BOITE:
                    printf("X");
                    break;
                case CIBLE:
                    printf(".");
                    break;
                case VIDE:
                default:
                    printf(" ");
                    break;
            }
        }
        printf("\n");
    }
}
