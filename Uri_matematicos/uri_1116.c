/*  
    URI Online Judge - 1116 - "Dividindo X por Y"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: problema matemático
*/

#include <stdio.h>
 
int main() {
 
    int n, cont;
    float x, y ,div;

    scanf("%i",&n);

    for(cont = 1; cont <= n; cont++) {
        scanf("%f%f",&x,&y);
        
        if (y == 0)
            printf("divisao impossivel\n");
        else {
            div = x / y;
            printf("%.1f\n",div);
        }
    }

    return 0;
}