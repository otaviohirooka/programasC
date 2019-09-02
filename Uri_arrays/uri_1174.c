/*  
    URI Online Judge - 1174 - "Seleção de array I"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: preenchimento de array
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float vetor[100];

    int cont;

    for(cont = 0; cont < 100; cont++) {
        scanf("%f", &vetor[cont]);
        
        if(vetor[cont] <= 10) {
            printf("A[%d] = %.1f\n", cont, vetor[cont]);
        }
    }

    return 0;
}