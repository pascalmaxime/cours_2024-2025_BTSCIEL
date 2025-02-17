#include <stdio.h>
#include <stdlib.h>

// Grille de 20 * 20
#define LARGEUR 20
#define HAUTEUR 20

typedef struct position_t {
    int x;
    int y;
} Position;

int grille[HAUTEUR][LARGEUR];

int main ()
{
    Position joueur = {0, 0};
    Position cible;

    printf("hello logo\n");
    cible.x = 5;
    cible.y = 5;

    printf("Joueur: x=%d y=%d", joueur.x, joueur.y);
    printf("Cible: x=%d y=%d", cible.x, cible.y);
    return EXIT_SUCCESS;

}