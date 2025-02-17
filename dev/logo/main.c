#include <stdio.h>
#include <stdlib.h>

typedef struct position_t {
    int x;
    int y;
} Position;

// Grille de 20 * 20
#define LARGEUR 20
#define HAUTEUR 20

char grille[HAUTEUR][LARGEUR]; 

void initialiser_grille(); //déclation
void afficher_position(Position pos);
void positionner(Position pos, char marqueur);


int main ()
{
    Position joueur = {0, 0};
    Position cible;

    initialiser_grille(); // appel 

    printf("hello logo\n");
    cible.x = 5;
    cible.y = 5;

    printf("Joueur");
    afficher_position(joueur);
    printf("Cible:");
    afficher_position(cible);
    return EXIT_SUCCESS;

}
// définition
void afficher_position(Position pos)
{
    printf("x=%d y=%d\n", pos.x, pos.y) ;
}
void initialiser_grille()
{
    for (int y = 0; y < HAUTEUR; y++)
    {
        for (int x = 0; x < LARGEUR; x++)
        {
            grille[y][x] = ' ';
        }
    }
}