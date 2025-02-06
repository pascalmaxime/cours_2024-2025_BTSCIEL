#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour obtenir la classe d'une adresse IPv4
char getIPv4Class(unsigned char firstOctet) {
    if (firstOctet >= 1 && firstOctet <= 126) {
        return 'A';
    } else if (firstOctet >= 128 && firstOctet <= 191) {
        return 'B';
    } else if (firstOctet >= 192 && firstOctet <= 223) {
        return 'C';
    } else if (firstOctet >= 224 && firstOctet <= 239) {
        return 'D';
    } else if (firstOctet >= 240 && firstOctet <= 255) {
        return 'E';
    } else {
        return 'U'; // Classe inconnue ou invalide
    }
}

int main() {
    char ipAddress[16];
    unsigned int octets[4];

    printf("Entrez une adresse IPv4 (exemple: 192.168.1.1): ");
    scanf("%15s", ipAddress);

    // Validation et extraction des octets
    if (sscanf(ipAddress, "%u.%u.%u.%u", &octets[0], &octets[1], &octets[2], &octets[3]) != 4 ||
        octets[0] > 255 || octets[1] > 255 || octets[2] > 255 || octets[3] > 255) {
        printf("Adresse IPv4 invalide.\n");
        return 1;
    }

    // Déterminer la classe avec le premier octet
    char ipv4Class = getIPv4Class((unsigned char)octets[0]);

    if (ipv4Class == 'U') {
        printf("Classe inconnue ou adresse invalide.\n");
    } else {
        printf("L'adresse IPv4 %s appartient à la classe %c.\n", ipAddress, ipv4Class);
    }

    return 0;
}
