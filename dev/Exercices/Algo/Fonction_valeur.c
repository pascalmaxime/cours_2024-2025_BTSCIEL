#include <stdio.h>
#include <stdlib.h>


void ajouter_un(int *nombre);

int main()
{
   int nombre;
   
   printf("Saisir un entier:");
   scanf("%d", &nombre);
   
   ajouter_un(&nombre);
   printf("nombre = %d\n", nombre);
   
   return EXIT_SUCCESS;
}
void ajouter_un(int *n)
{
    printf("L'adresse de N est %p\n",n);
    printf("L'adresse de N est %ld\n",(long)n);
    printf("La valeur de N est %d\n",*n);
    *n = *n + 1;
}