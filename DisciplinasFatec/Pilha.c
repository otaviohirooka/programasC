/*
Disciplina Estrutura de Dados - ADS - FATEC Sorocaba
Segundo semestre de 2019

Nome: Otávio Luiz de Biaggi Hirooka

Programa de pilha que verifica se palavra é um palíndromo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define TAM_PALAVRA 21

char palavra[TAM_PALAVRA];
char pilha[TAM_PALAVRA];

int push(int, int);
int pop(int, int);
void imprimiPalindromo(int);

int main (void) {

    int final, metade;

    while (TRUE) {
        printf("Informe a palavra ou FIM para encerrar:\n");
        scanf("%s", palavra);

        if(strcmp(palavra, "FIM") == 0)           
            break;
        
        final = -1;
        metade = strlen(palavra) / 2;

        if (strlen(palavra) % 2 == 0) {

            final = pop(final, metade);
            final = push(final, metade);
            imprimiPalindromo(final);
        } else {
            final = pop(final, metade);

            metade++;

            final = push(final, metade);
            imprimiPalindromo(final);
        }
        
    }
    return 0;
}

int push(int fim, int met) {
    while (pilha[fim] == palavra[met] && met < strlen(palavra)) {
        fim--;
        met++; 
    }
    return fim; 
}

void imprimiPalindromo(int fim) {
    if(fim == -1) 
        printf("%s: Palindromo.\n", palavra);
    else 
        printf("%s: Nao eh palindromo.\n", palavra);     
}

int pop(int fim, int met) {
    for(int cont = 0; cont < met; cont++) {
                pilha[cont] = palavra[cont];
                fim++;
    }
    return fim;
}