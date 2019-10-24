/*  
    URI Online Judge - 1267 - "Biblioteca Pascal"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: operações com elemento de matriz
*/

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    
    int matriz[500][500];
    int nAlunos, nDinner, lin, col, valida, resposta;

    while (scanf("%d %d", &nAlunos, &nDinner) && nAlunos + nDinner != 0) {
        resposta = 0;

        for(lin = 0; lin < nDinner; lin++) 
            for(col = 0; col < nAlunos; col++) 
                scanf("%d", &matriz[lin][col]);
            
        for(col = 0; col < nAlunos; col++) {
            valida = 0;
            for(lin = 0; lin < nDinner; lin++) 
                valida = valida + matriz[lin][col];
            
            if(valida == nDinner) {
                resposta = 1;
                break;
            }
        }

        if(resposta) 
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

