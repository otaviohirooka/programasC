/*  
    URI Online Judge - 1483 - "O jogo do bicho"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: estrutura repetitiva e condicional
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
	
    unsigned long long int sorteio, numero;
    double valor, premio = 0;

    scanf("%lf %llu %llu", &valor, &numero, &sorteio);

    while(valor != 0 || numero != 0 && sorteio != 0) {
        
        if(numero % 10000 == sorteio % 10000)
            premio = valor * 3000;  
        else
            if(numero % 1000 == sorteio % 1000)
                premio = valor * 500;
            else 
                if(numero % 100 == sorteio % 100)
                    premio = valor * 50;
                else 
                    if((((sorteio % 100) - 1) / 4) == (((numero % 100) - 1) /4))
                        premio = valor * 16;
                
        printf("%.2lf\n", premio);

        premio = 0;
        
        scanf("%lf %llu %llu", &valor, &numero, &sorteio);
        
    }
    return 0;
}

