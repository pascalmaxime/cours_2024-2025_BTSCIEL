#include <stdio.h>

int main() {
    int valeur1, valeur2;

    printf("Entrez un nombre : ");
    scanf("%d", &valeur1);

    for (int i = 0; i <= 10; i++) {
        valeur2 = valeur1 * i;
        printf("%d x %d = %d\n", valeur1, i, valeur2);
    }
    return 0;
}

