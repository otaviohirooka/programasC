/*  
    URI Online Judge - 1172 - "Substituição em vetor I"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: array
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[10], cont;

    for(cont = 0; cont < 10; cont++) {
        scanf("%d", &vetor[cont]);
        
        if(vetor[cont] <= 0)
            vetor[cont] = 1;
        
        printf("X[%d] = %d\n", cont, vetor[cont]);
    }
    return 0;
}