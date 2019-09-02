/*  
    URI Online Judge - 2510 - "Batmain"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: comparação de string
*/

#include <stdio.h>
#include <string.h>
 
int main() {
	
    int casos, cont;
    char vilao[26];

    scanf("%d", &casos);

    for(cont = 0; cont < casos; cont++) {
        scanf("%s", vilao);
        
        if(strcmp(vilao, "Batmain")==0) {
            printf("N\n");
        }
        else
            printf("Y\n");
    }
    return 0;
}