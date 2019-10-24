/*  
    URI Online Judge - 2633 - "Churras do Yuri"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: uso de função qsort para ordenar a struct
*/

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
 
typedef struct validade { char nome[21];
                          int data;} Validade;

int ordenaValidade(const void * a, const void * b);

int main() {
    
    int quantidade, cont;

    while (scanf("%d", &quantidade) != EOF) {

        Validade carnes[quantidade];

        for(cont = 0; cont < quantidade; cont++) {
            scanf("%s %d", carnes[cont].nome, &carnes[cont].data);
        }

        qsort(carnes, quantidade, sizeof(Validade), ordenaValidade);

        for(cont = 1; cont <= quantidade; cont++) {
            printf("%s", carnes[cont - 1].nome);
            if(cont < quantidade)
                printf(" ");
             
        }
        printf("\n");
    }
    return 0;
}

int ordenaValidade(const void * a, const void * b) {
    Validade *carne1 = (Validade *) a;
    Validade *carne2 = (Validade *) b;

    return (carne1->data - carne2 ->data);
}
