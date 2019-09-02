/*  
    URI Online Judge - 1175 - "Troca em vetor I"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: array
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
	
    int vetor[20], cont, inverso[20], troca = 19;

    for(cont = 0; cont < 20; cont++)
        scanf("%d", &vetor[cont]);
    
    for(cont = 0; cont < 20; cont++) {
        inverso[cont] = vetor[troca];
        troca = troca - 1;
    }

    for(cont = 0; cont < 20; cont++)
        printf("N[%d] = %d\n", cont, inverso[cont]);

    return 0;
}