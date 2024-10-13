#ifndef SOKOBAN_H
#define SOKOBAN_H

#define TAILLE 10

typedef enum {
    VIDE,
    MUR,
    JOUEUR,
    BOITE,
    CIBLE
} TypeObjet;

extern char plateau[TAILLE][TAILLE];
extern int joueurX, joueurY;
extern int boiteX, boiteY;
extern int cibleX, cibleY;

void initialiserPlateau();
void afficherPlateau();
int deplacerJoueur(char direction);
int verifierVictoire();

#endif
