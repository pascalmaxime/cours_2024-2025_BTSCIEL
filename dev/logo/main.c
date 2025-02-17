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

void initialiser_grille(); 
void afficher_position(Position pos);
void positionner(Position pos, char marqueur);
void afficher_grille(); // Ajout d'une fonction d'affichage

int main ()
{
    Position joueur = {0, 0};
    Position cible = {5, 5}; // Initialisation correcte

    initialiser_grille(); // D'abord, on initialise la grille
    
    positionner(joueur, 'J');
    positionner(cible, 'C');

    printf("Hello logo\n");
    
    printf("Joueur ");
    afficher_position(joueur);
    
    printf("Cible ");
    afficher_position(cible);
    
    afficher_grille(); // Affichage de la grille complète
    
    return EXIT_SUCCESS;
}

void afficher_position(Position pos)
{
    printf("x=%d y=%d\n", pos.x, pos.y);
}

void initialiser_grille()
{
    for (int y = 0; y < HAUTEUR; y++)
    {
        for (int x = 0; x < LARGEUR; x++)
        {
            grille[y][x] = '.';
        }
    }
}

void positionner(Position pos, char marqueur)
{
    if (pos.x >= 0 && pos.x < LARGEUR && pos.y >= 0 && pos.y < HAUTEUR) 
    {
        grille[pos.y][pos.x] = marqueur;
    }
}

void afficher_grille()
{
    printf("\n");
    for (int y = 0; y < HAUTEUR; y++)
    {
        for (int x = 0; x < LARGEUR; x++)
        {
            printf("%c ", grille[y][x]);
        }
        printf("\n");
    }
}
