/*  
    URI Online Judge - 1161 - "Soma de fatoriais"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: Somando fatoriais
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
 
int main() {
 
    long long int resultado, M, N;

    int cont;

    while(scanf("%lld %lld", &M, &N) != EOF) {
        if(M == 0)
            M = 1;
        else {
            for(cont = M - 1; cont > 0; cont--) {
                M = M * cont; 
            }
        }

        if(N == 0)
            N = 1;
        else {  
            for(cont = N - 1; cont > 0; cont--) {
                N = N * cont; 
            }
        }

        resultado = M + N;

        printf("%lld\n", resultado);

    }
    return 0;
}