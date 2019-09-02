/*  
    URI Online Judge - 1132 - "Múltiplo de 13"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: problema matemático
*/

#include <stdio.h>
 
int main() {

    int x, y, cont, soma = 0;

    scanf("%i%i", &x, &y);

    if(x>y) {
        for(cont = y; cont <= x; cont++) {
            if(cont%13!=0)
            soma = soma + cont;
        }
    }

    if (y > x) {
        for(cont = x; cont <= y; cont++) {
            if (cont % 13 != 0)
            soma = soma + cont;
        }
    }

    printf("%i\n",soma);

    return 0;
}