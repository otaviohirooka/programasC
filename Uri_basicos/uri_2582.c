/*  
    URI Online Judge - 2582 - "System of a Download"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: uso de Switch Case 
*/

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
 
void escolheMusica(int);

int main() {
    
    int n, cont, x, y;

    scanf("%d", &n);

    for(cont = 0; cont < n; cont++) {
       scanf("%d %d", &x, &y);

       escolheMusica(x + y);
    }

    return 0;
}

void escolheMusica(int musica) {
    switch (musica) {
        case 0:
            printf("PROXYCITY\n");
        break;
        case 1:
            printf("P.Y.N.G.\n");
        break;
        case 2:
            printf("DNSUEY!\n");
        break;
        case 3:
            printf("SERVERS\n");
        break;
        case 4:
            printf("HOST!\n");
        break;
        case 5:
            printf("CRIPTONIZE\n");
        break;
        case 6:
            printf("OFFLINE DAY\n");
        break;
        case 7:
            printf("SALT\n");
        break;
        case 8:
            printf("ANSWER!\n");
        break;
        case 9:
            printf("RAR?\n");
        break;
        case 10:
            printf("WIFI ANTENNAS\n");
        break;
    }
}