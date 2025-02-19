#include <stdio.h>

int pair_impair(int nbr);

int main()
{
   int nbr;
   
   printf("Entrez un entier:");
   scanf("%d", &nbr);
   
   if (pair_impair(nbr) == 0)
      printf("Paire\n");
   else
      printf("Impaire\n");
   return 0;
}

int pair_impair(int nbr){
    if (nbr % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}
