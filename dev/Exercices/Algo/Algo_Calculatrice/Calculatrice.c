#include <stdio.h>
#include <stdlib.h>

int main() {
    int Operateur;
    float Nombre1, Nombre2, resultat;

    // Saisie utilisateur :
    printf("Entrez le premier nombre :\n");
    scanf("%f", &Nombre1);
    
    printf("Entrez l'opérateur (1 pour +, 2 pour -, 3 pour *, 4 pour /) :\n");
    scanf("%d", &Operateur);
    
    printf("Entrez le deuxième nombre :\n");
    scanf("%f", &Nombre2);

    // Calcul selon l'opérateur choisi
    switch (Operateur) {
        case 1: // Addition
            resultat = Nombre1 + Nombre2;
            printf("Résultat : %.2f\n", resultat);
            break;
        case 2: // Soustraction
            resultat = Nombre1 - Nombre2;
            printf("Résultat : %.2f\n", resultat);
            break;
        case 3: // Multiplication
            resultat = Nombre1 * Nombre2;
            printf("Résultat : %.2f\n", resultat);
            break;
        case 4: // Division
            if (Nombre2 != 0) {
                resultat = Nombre1 / Nombre2;
                printf("Résultat : %.2f\n", resultat);
            } else {
                printf("Erreur : Division par zéro impossible.\n");
            }
            break;
        default: // Cas où l'opérateur est invalide
            printf("Erreur : Opérateur invalide. Veuillez entrer 1, 2, 3 ou 4.\n");
            break;
    }

    return 0;
}
