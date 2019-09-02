/*  
    URI Online Judge - 1176 - "Fibonacci em vetor"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: array
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
	
    long long int fibonacci[61], casos, cont, posicao;

    scanf("%lld", &casos);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(cont = 2; cont <= 60; cont++)
        fibonacci[cont] = fibonacci[cont - 1] + fibonacci[cont - 2];

    for(cont = 0; cont < casos; cont++) {
        scanf("%lld", &posicao);
        printf("Fib(%lld) = %lld\n", posicao, fibonacci[posicao]);
    }
    return 0;
}