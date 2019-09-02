/*  
    URI Online Judge - 2763 - "Entrada e saída de CPF"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: entrada e saída
*/

#include <stdio.h>
 
int main() {
	
    int centena, milhar, milhao, cont, depoisTraco;

    scanf("%d.%d.%d-%d", &milhao, &milhar, &centena, &depoisTraco);
    printf("%03d\n", milhao);
    printf("%03d\n", milhar);
    printf("%03d\n", centena);
    printf("%02d\n", depoisTraco);

    return 0;
}