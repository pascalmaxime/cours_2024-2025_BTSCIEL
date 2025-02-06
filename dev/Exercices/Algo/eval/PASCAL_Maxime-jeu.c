#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    
    // VARIABLES 
    int proposition;
    int intervalle_maxi = 20;
    int intervalle_mini = 1;

    //début_algorithme 
    /* Tirage aléatoire du nombre à rechercher*/
    int secret = rand() %20+1;

    /*Recherche du nombre secret*/
    while (proposition != secret){
        proposition = intervalle_mini + (intervalle_maxi - intervalle_mini)/2;
        if (proposition < secret)
        {
            intervalle_mini = proposition + 1;
        } else if (proposition > secret)
        {
            intervalle_maxi = proposition - 1;  
        }
        
    }
    printf("Trouvé :%d\n", proposition);

}