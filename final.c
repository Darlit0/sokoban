#include "sokoban.h"
#include <stdio.h>
#include <stdlib.h>

char plateau[TAILLE][TAILLE];
int joueurX, joueurY;  // Définition des variables
int boiteX, boiteY;    // Définition des variables
int cibleX, cibleY;    // Définition des variables

void initialiserPlateau() {
    for (int i = 0; i < TAILLE; i++) {
        for (int j = 0; j < TAILLE; j++) {
            if (i == 0 || i == TAILLE - 1 || j == 0 || j == TAILLE - 1) {
                plateau[i][j] = MUR;
            } else {
                plateau[i][j] = VIDE;
            }
        }
    }

    joueurX = 5;
    joueurY = 1;
    plateau[joueurX][joueurY] = JOUEUR;

    boiteX = 7;
    boiteY = 4;
    plateau[boiteX][boiteY] = BOITE;

    cibleX = 2;
    cibleY = 3;
    plateau[cibleX][cibleY] = CIBLE;
}
