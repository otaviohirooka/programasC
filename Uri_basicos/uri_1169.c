/*  
    URI Online Judge - 1132 - "Trigo no tabuleiro"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: problema matemático
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    
    unsigned int casos, quadrados, cont;
    long long quantidade;
    
    scanf("%u", &casos);
    
    for(cont = 1; cont <= casos; cont++) {
        scanf("%u", &quadrados);
        
        quantidade = (((pow(2, quadrados)) / 12) / 1000);
        
        printf("%lld kg\n", quantidade);
    }
    return 0;
}