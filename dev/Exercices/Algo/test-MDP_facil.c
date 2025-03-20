#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Déclaration des variables
    char chaine[50];
    int majuscules = 0, minuscules = 0, chiffres = 0, symboles = 0;

    printf("Saisir une chaine: ");
    scanf("%49s", chaine);  // Éviter le dépassement de mémoire
    int longueur = strlen(chaine);
    
    // Vérifier la longueur minimale
    if (longueur < 8) {
        printf("Mot de passe trop court ! X\n");
        return 0;
    }

    // Vérifier chaque caractère
    for (int i = 0; i < longueur; i++) {
        char Caractere = chaine[i];
        printf("%d: caractere=%c Code ASCII=%d\n", i, Caractere, Caractere);
        
        if (Caractere >= 'A' && Caractere <= 'Z') {
            majuscules++;
        }
        else if (Caractere >= 'a' && Caractere <= 'z') {
            minuscules++;
        }
        else if (Caractere >= '0' && Caractere <= '9') {
            chiffres++;
        }
        else if (Caractere == '/' || Caractere == '*' || Caractere == '-' || Caractere == '+') {
            symboles++;
        }
    }

    // Affichage des statistiques
    printf("Majuscules: %d, Minuscules: %d, Chiffres: %d, Symboles: %d\n", majuscules, minuscules, chiffres, symboles);
    
    // Vérifier les conditions après la boucle
    if (majuscules >= 2 && minuscules >= 2 && chiffres >= 2 && symboles >= 1) {
        printf("Mot de passe DUR ! V\n");
    } else {
        printf("Mot de passe FAIBLE ! X\n");
    }

    return 0;
}
