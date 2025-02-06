#include <stdio.h>

int main ()
{
    unsigned int cidr;
    unsigned int masque = 0;

    printf("Saisir un masque (notation CIDR) :");
    scanf ("%u", &cidr); 

    //unsigned int masque_ou = 0b10000000000000000000000000000000;
    //unsigned int masque_ou = 0x80000000;

    unsigned int masque_ou = 1 << 31;
    for (int i = 0; i < cidr; i++){
        masque = masque | masque_ou;
        masque =masque_ou >> 1;

    }
    printf("Masque: %08x\n", masque);
}