/*  
    URI Online Judge - 2757 - "Entrada e saída de números inteiros"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: formatando a saída de números inteiros
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
	
    int a, b, c;

    scanf("%d%i%d", &a, &b, &c);

    printf("A = %d, B = %d, C = %d\n", a, b, c);
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

    return 0;
}