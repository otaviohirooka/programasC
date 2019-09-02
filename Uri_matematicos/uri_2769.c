/*  
    URI Online Judge - 2769 - "Sucessor par"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: problema matemático
*/

#include <stdio.h>
 
int main() {

    int numero, sucessor;

    scanf("%d", &numero);

    if(numero % 2 == 0) 
        printf("%d\n", numero + 2);
    

    if(numero % 2 != 0) 
        printf("%d\n", numero + 1);
    
    return 0;
}