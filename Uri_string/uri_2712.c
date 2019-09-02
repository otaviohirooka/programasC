/*  
    URI Online Judge - 2712 - "Rodizio veicular"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: uso de funções strlen, isalpha, islower, isdigit
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
	
    int casos, cont;

    char placa[100];

    scanf("%d", &casos);

    for(cont = 1; cont <= casos; cont++) {
        scanf("%s", placa);
        
        if(strlen(placa) != 8)
            printf("FAILURE\n");
        
        else if(islower(placa[0]) || islower(placa[1]) || islower(placa[2]))
            printf("FAILURE\n");
        
            else if(isalpha(placa[4]) || isalpha(placa[5]) || isalpha(placa[6]) || isalpha(placa[7]) || isalpha(placa[3]))
                printf("FAILURE\n");
        
                else if(isdigit(placa[0]) || isdigit(placa[1]) || isdigit(placa[2]) || isdigit(placa[3]))
                    printf("FAILURE\n");
        
                    else {
                        if(placa[7] - 48 == 1 || placa[7] - 48 == 2)
                            printf("MONDAY\n");
                
                        if(placa[7] - 48 == 3 || placa[7] - 48 == 4)
                            printf("TUESDAY\n");
                
                        if(placa[7] - 48 == 5 || placa[7] - 48 == 6)
                            printf("WEDNESDAY\n");
                
                        if(placa[7] - 48 == 7 || placa[7] - 48 == 8)
                            printf("THURSDAY\n");
                
                        if(placa[7] - 48 == 9 || placa[7] - 48 == 0)
                            printf("FRIDAY\n");
                
                    }
        
    }
    return 0;
}