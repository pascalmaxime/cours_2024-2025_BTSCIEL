#include <stdio.h>

int main()
{
        unsigned int ip1, ip2, ip3, ip4;
        unsigned int ip_long; 

        printf("Saisir adresse IP:");
        scanf("%u.%u.%u.%u", &ip1, &ip2, &ip3, &ip4);

        printf("%u.%u.%u.%u\n", ip1, ip2, ip3, ip4);

        ip_long = (ip1 * 256 * 256 * 256 ) + (ip2 * 256 * 256) + (ip3 * 256) + (ip4 * 1);
        
        printf("ip_long: %x\n", ip_long);

        return 0;

}