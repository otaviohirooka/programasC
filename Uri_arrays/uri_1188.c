/*  
    URI Online Judge - 1188 - "Área inferior"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: matriz
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
	
    double matriz[12][12], aux = 0;
    char O;
    int lin, col;

    scanf(" %c", &O);

    for(lin = 0; lin < 12; lin++) 
        for(col = 0; col < 12; col++)
            scanf("%lf", &matriz[lin][col]);

    for(col = 1; col <= 10; col++){
        if(col >= 1 && col <= 10)
            aux = aux + matriz[11][col];
        
        if(col >= 2 && col <= 9)
            aux = aux + matriz[10][col];
        
        if(col >= 3 && col <= 8)
            aux = aux + matriz[9][col];
        
        if(col >= 4 && col <= 7)
            aux = aux + matriz[8][col];
        
        if(col >= 5 && col <= 6)
            aux = aux + matriz[7][col];
    }

    if(O == 'S')
        printf("%.1lf\n", aux);

    if(O == 'M')
        printf("%.1lf\n", aux / 30.0);

    return 0;
}