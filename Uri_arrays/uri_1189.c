/*  
    URI Online Judge - 1189 - "Área esquerda"
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

    for(lin = 1; lin <= 10; lin++) {
        if(lin >= 1 && lin <= 10)
            aux = aux + matriz[lin][0];
        
        if(lin >= 2 && lin <= 9)
            aux = aux + matriz[lin][1];
        
        if(lin >= 3 && lin <= 8)
            aux = aux + matriz[lin][2];
        
        if(lin >= 4 && lin <= 7)
            aux = aux + matriz[lin][3];
        
        if(lin >= 5 && lin <= 6)
            aux = aux + matriz[lin][4];
    }

    if(O == 'S')
        printf("%.1lf\n", aux);

    if(O == 'M')
        printf("%.1lf\n", aux / 30.0);

    return 0;
}