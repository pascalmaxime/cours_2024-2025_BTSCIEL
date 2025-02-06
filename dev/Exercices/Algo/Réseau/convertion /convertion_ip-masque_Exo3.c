#include <stdio.h>

int main()
{
    unsigned int masque1, masque2, masque3, masque4;
    unsigned int masque;

    printf("Saisir Masque (format: x.x.x.x): ");
    if (scanf("%u.%u.%u.%u", &masque1, &masque2, &masque3, &masque4) != 4) {
        printf("Entrée invalide.\n");
        return 1;
    }

    // Vérification que chaque octet est dans l'intervalle 0-255
    if (masque1 > 255 || masque2 > 255 || masque3 > 255 || masque4 > 255) {
        printf("Masque invalide : chaque octet doit être entre 0 et 255.\n");
        return 1;
    }

    // Combinaison des octets en une seule valeur
    masque = (masque1 << 24) | (masque2 << 16) | (masque3 << 8) | masque4;

    // Vérification de la validité du masque
    unsigned int inverse = ~masque; 
    if ((inverse & (inverse + 1)) != 0) {
        printf("Masque invalide : les bits ne sont pas continus.\n");
        return 1;
    }

    printf("Masque valide.\n");
    printf("Masque en binaire : ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (masque >> i) & 1);
        if (i % 8 == 0 && i != 0) {
            printf(".");
        }
    }
    printf("\n");

    return 0;
}
