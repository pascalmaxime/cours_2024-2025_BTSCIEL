#include <stdio.h>

int main() 
{
    unsigned int ip1, ip2, ip3, ip4;
    printf("Saisir adresse IP: ");
    scanf("%u.%u.%u.%u", &ip1, &ip2, &ip3, &ip4);

    if (ip1 > 255 || ip2 > 255 || ip3 > 255 || ip4 > 255) {
        printf("Adresse IP invalide.\n");
        return 1;
    }

    printf("%u.%u.%u.%u\n", ip1, ip2, ip3, ip4);

    if (ip1 >= 1 && ip1 <= 126) {
        printf("Classe A\n");
    } else if (ip1 >= 128 && ip1 <= 191) {
        printf("Classe B\n");
    } else if (ip1 >= 192 && ip1 <= 223) {
        printf("Classe C\n");
    } else if (ip1 >= 224 && ip1 <= 239) {
        printf("Classe D\n");
    } else if (ip1 >= 240 && ip1 <= 255) {
        printf("Classe E\n");
    } else {
        printf("Classe inconnue.\n");
    }
    return 0;
    
}