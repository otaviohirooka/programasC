/*  
    URI Online Judge - 1133 - "Resto da divisão"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: problema matemático
*/

#include <stdio.h>
 
int main(){

    int x, y, cont;

    scanf("%i%i", &x, &y);

    if(x > y) {
        for(cont = y + 1; cont < x; cont++) {
            if(cont % 5 == 2 || cont % 5 == 3)
                printf("%i\n", cont);
        }
    }

    if(y>x) {
        for(cont = x + 1; cont < y; cont++) {
            if(cont % 5 == 2 || cont % 5 == 3)
                printf("%i\n",cont);
        }
    }
    return 0;
}