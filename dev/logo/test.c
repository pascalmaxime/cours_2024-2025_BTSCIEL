#include <stdio.h>
#include <stdlib.h>
 
#define DEBUG 1
 
typedef struct position_t
{
    int x;
    int y;
} Position;
 
void initialiser_grille();  // déclaration
void afficher_position(Position pos);
void positionner(Position pos, char marqueur);
void afficher_grille();
void clear_screen();
void move_cursor(int x, int y);
 
// Grille de 20 * 20
#define LARGEUR 20
#define HAUTEUR 20
 
char grille[HAUTEUR][LARGEUR];
 
int main()
{
    Position joueur = {0, 0};
    Position cible;
 
    initialiser_grille();   // appel
 
    positionner(joueur, 'J');
 
    printf("Hello logo\n");
    cible.x = 5;
    cible.y = 5;
    positionner(cible, 'C');
 
#ifdef DEBUG
    printf("Joueur: ");
    afficher_position(joueur);
    printf("Cible: ");
    afficher_position(cible);
#else
 
    afficher_grille(joueur, cible);
#endif
 
    return EXIT_SUCCESS;
}
 
void clear_screen() {
    printf("\033[H\033[J");  // Code ANSI pour effacer l'écran et ramener le curseur en haut à gauche
}
 
void move_cursor(int x, int y) {
    printf("\033[%d;%dH", y + 1, x + 1);  // Déplacer le curseur (x, y) dans le terminal
}
 
void afficher_position(Position pos)
{
    printf("x=%d y=%d\n", pos.x, pos.y);
}
 
// Définition
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
 
void positionner(Position pos, char marqueur)
{
    grille[pos.y][pos.x] = marqueur;
}
 
void afficher_grille(Position joueur, Position cible)
{
    clear_screen();
    move_cursor(joueur.x, joueur.y);
    printf("J");
 
    move_cursor(cible.x, cible.y);
    printf("C");
 
}
 
 