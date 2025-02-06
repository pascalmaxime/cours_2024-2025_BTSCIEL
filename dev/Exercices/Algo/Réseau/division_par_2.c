#include <stdio.h>

int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre); 

    nombre /= 2;
    printf("La valeur absolue de %d \n", nombre);    
    
    return 0;
}
