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

void afficher_position(Position pos)
{
    printf("x=%d y=%d\n", pos.x, pos.y) ;
}

int main ()
{
    Position joueur = {0, 0};
    Position cible;

    printf("hello logo\n");
    cible.x = 5;
    cible.y = 5;

    printf("Joueur");
    afficher_position(joueur);
    printf("Cible:");
    afficher_position(cible);
    return EXIT_SUCCESS;

}