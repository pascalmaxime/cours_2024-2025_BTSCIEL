// correction Exo 1 prof:
#include <stdio.h>

int main()
{
    unsigned int masque1;
    unsigned int masque2;
    unsigned int masque3;
    unsigned int masque4;
    unsigned int masque;

    printf("Saisir Masque (format: x.x.x.x): ");
    scanf("%u.%u.%u.%u", &masque1, &masque2, &masque3, &masque4);
    printf("Masque de sous-réseau: %u.%u.%u.%u\n", masque1, masque2, masque3, masque4);

    masque = masque | masque4;

    masque3 = masque3 << 8; 
    masque = masque | masque3;
        
 
    masque = masque | masque2 << 16;

    masque |= masque1 << 24;
    printf("masque : %x\n", masque);
    
    return 0;
}
