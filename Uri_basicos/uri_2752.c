/*  
    URI Online Judge - 2752 - "Saída 6"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: Formatando saída 
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
	
    char string[50] = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", string);
    printf("<%30s>\n", string);
    printf("<%.20s>\n", string);
    printf("<%-20s>\n", string);
    printf("<%-30s>\n", string);
    printf("<%.30s>\n", string);
    printf("<%30.20s>\n", string);
    printf("<%-30.20s>\n", string);

    return 0;
}