#include <stdio.h>
#include <ctype.h>
#include <string.h>

int my_mdp(const char *mdp) {
    int longueur = strlen(mdp);
    int majuscules = 0, minuscules = 0, chiffres = 0, symboles = 0;

    // Vérifier la longueur minimale
    if (longueur < 8) {
        return 0;
    }

    // Parcourir le mot de passe
    for (int i = 0; i < longueur; i++) {
        if (isupper(mdp[i])) majuscules++;
        else if (islower(mdp[i])) minuscules++;
        else if (isdigit(mdp[i])) chiffres++;
        else if (
                mdp[i] == '/' ||  
                mdp[i] == '*' || 
                mdp[i] == '-' || 
                mdp[i] == '+') {
            symboles++;
        }
    }
    // Vérifier les conditions
    return (majuscules >= 2 && minuscules >= 2 && chiffres >= 2 && symboles >= 1);
}

int main() {
    char mdp[50];

    printf("Entrez un mot de passe : ");
    scanf("%49s", mdp); // Sécurisation pour éviter un dépassement

    if (my_mdp(mdp)) {
        printf("Mot de passe DUR ! V\n");
    } else {
        printf("Mot de passe FAIBLE ! X\n");
    }

    return 0;
}