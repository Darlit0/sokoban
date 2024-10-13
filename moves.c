#include "sokoban.h"
#include <stdio.h>

int deplacerJoueur(char direction) {
    int newX = joueurX;
    int newY = joueurY;

    switch (direction) {
        case 'w':
            newX--;
            break;
        case 's':
            newX++;
            break;
        case 'a':
            newY--;
            break;
        case 'd':
            newY++;
            break;
        default:
            return 0;  // Mouvement invalide
    }

    // Vérifier si le nouveau mouvement est valide
    if (plateau[newX][newY] == VIDE || plateau[newX][newY] == CIBLE) {
        plateau[joueurX][joueurY] = VIDE;  // Déplacer le joueur
        joueurX = newX;
        joueurY = newY;
        plateau[joueurX][joueurY] = JOUEUR; // Mettre à jour la position du joueur
        return 1;
    } else if (plateau[newX][newY] == BOITE) {
        // Vérifier si la boîte peut être déplacée
        int nextX = newX + (newX - joueurX);
        int nextY = newY + (newY - joueurY);

        if (plateau[nextX][nextY] == VIDE || plateau[nextX][nextY] == CIBLE) {
            plateau[boiteX][boiteY] = VIDE; // Déplacer la boîte
            boiteX = nextX;
            boiteY = nextY;
            plateau[boiteX][boiteY] = BOITE;
            plateau[joueurX][joueurY] = VIDE; // Déplacer le joueur
            joueurX = newX;
            joueurY = newY;
            plateau[joueurX][joueurY] = JOUEUR; // Mettre à jour la position du joueur
            return 1;
        }
    }
    
    return 0; // Mouvement invalide
}

int verifierVictoire() {
    return (boiteX == cibleX && boiteY == cibleY);
}
