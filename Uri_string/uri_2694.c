/*  
    URI Online Judge - 2694 - "Problema com a calculadora"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: uso de função atoi
*/

#include <stdio.h>
#include <string.h>
 
int main() {
	
    int casos, cont, iAux1, iAux2, iAux3;

    char palavra[15], aux1[3], aux2[4], aux3[3];

    scanf("%d", &casos);

    for(cont = 1; cont <= casos; cont++) {
        scanf("%s", palavra);
        
        aux1[0] = palavra[2];
        aux1[1] = palavra[3];
        
        iAux1 = atoi(aux1);
        
        aux2[0] = palavra[5];
        aux2[1] = palavra[6];
        aux2[2] = palavra[7];
        
        iAux2 = atoi(aux2);
        
        aux3[0] = palavra[11];
        aux3[1] = palavra[12];
        
        iAux3 = atoi(aux3);
        
        printf("%d\n", iAux1 + iAux2 + iAux3);
    }

    return 0;
}