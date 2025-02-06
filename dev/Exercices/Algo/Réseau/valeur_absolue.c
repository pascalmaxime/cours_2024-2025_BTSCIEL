#include <stdio.h>

int main() {
    int nombre, valeur_absolue;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre); 

    // Calcul de la valeur absolue
    if (nombre < 0) {
        valeur_absolue = -nombre;
    } else {
        valeur_absolue = nombre;
    }

    printf("La valeur absolue de %d est %d\n", nombre, valeur_absolue);

    return 0;
}