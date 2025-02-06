#include <stdio.h>

int main()
{
    unsigned int ip1, ip2, ip3, ip4;
    unsigned int masque1, masque2, masque3, masque4;
    unsigned int ip_long, masque;

    // Lecture de l'adresse IP
    printf("Saisir adresse IP (format: x.x.x.x): ");
    scanf("%u.%u.%u.%u", &ip1, &ip2, &ip3, &ip4);

    // Lecture du masque de sous-réseau
    printf("Saisir le masque de sous-réseau (format: x.x.x.x): ");
    scanf("%u.%u.%u.%u", &masque1, &masque2, &masque3, &masque4);

    // Conversion de l'adresse IP et du masque en format long
    ip_long = (ip1 << 24) | (ip2 << 16) | (ip3 << 8) | ip4;
    masque = (masque1 << 24) | (masque2 << 16) | (masque3 << 8) | masque4;

    // Affichage des résultats
    printf("Adresse IP: %u.%u.%u.%u\n", ip1, ip2, ip3, ip4);
    printf("Adresse IP en long: %x\n", ip_long);
    printf("Masque de sous-réseau: %u.%u.%u.%u\n", masque1, masque2, masque3, masque4);
    printf("Masque de sous-réseau (hex): %x\n", masque);

    // Affichage des bits du masque de sous-réseau
    printf("Bits du masque de sous-réseau: ");
    for (int i = 31; i >= 0; i--) {
        // Décalage et masque pour récupérer le bit
        int bit = (masque >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}
