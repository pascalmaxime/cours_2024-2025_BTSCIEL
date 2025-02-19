#include <stdio.h>
 
int main()
{
   int nbr;
   
   printf("Entrez un entier:");
   scanf("%d", &nbr);
   
   if (nbr % 2 == 0)
      printf("Paire\n");
   else
      printf("Impaire\n");
     
   return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>


int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre); 

    nombre /= 2;
    printf("La valeur absolue de %d \n", nombre);    
    
    return 0;
}*/
