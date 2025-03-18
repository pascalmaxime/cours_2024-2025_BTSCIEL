#include <stdio.h>

int main ()
{
    // Declare the variable
    char chaine[10];
    int CompteutVoyelle = 0;

    printf("Saisir une chaine: ");
    scanf("%s", chaine);
    
    // Take each character from this string to check
    for (int i = 0; i < 10; i++){
        char caractere = chaine[i];
        printf("%d: caractere=%c code_ascii=%d\n", i, caractere, caractere);
        if (
            caractere == 'A' 
            || caractere == 'E' 
            || caractere == 'I' 
            || caractere == 'O' 
            || caractere == 'U' 
            || caractere == 'Y' 
            || caractere == 'a' 
            || caractere == 'e' 
            || caractere == 'i' 
            || caractere == 'o' 
            || caractere == 'u' 
            || caractere == 'y') 
            {
                CompteutVoyelle++;
        }
    }

    printf("Les voyelles sont: %d\n", CompteutVoyelle); 

    return 0;
}
