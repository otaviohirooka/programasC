/*
Disciplina Estrutura de Dados - ADS - FATEC Sorocaba
Segundo semestre de 2019

Nome: Otávio Luiz de Biaggi Hirooka

Programa de lista encadeada de cidades
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

struct regCidade { char nome[21];
                    int pop;
                    float area;
                    struct regCidade *prox;
                 };

typedef struct regCidade TCidade;

typedef struct { TCidade *inicio, *final;
                 int cont;} TDescritor;

void imprimiLista(TDescritor *, char *);
int excluiCidade(TDescritor *, char *);
void inicializaLista(TDescritor *);
int incluiCidade(TDescritor * , TCidade);

int main () {

    TCidade infoCidade;
    TDescritor lista;

    inicializaLista(&lista);

    while (TRUE) {
        printf("Informe a cidade ou 'FIM' para encerrar:\n");
        scanf("%s", infoCidade.nome);

        if (strcmp(infoCidade.nome, "FIM") == 0)
            break;
        
        printf("Informe a população:\n");
        scanf("%d", &infoCidade.pop);

        printf("Informe a area:\n");
        scanf("%f", &infoCidade.area);

        if(!incluiCidade(&lista, infoCidade)) {
            puts("Memoria insuficiente\n");
            return 2;
        }
        
    }

    imprimiLista(&lista, "Conteudo inicial da lista");

    while(TRUE) {

        char cidadeBusca[21];

        printf("\n\nInforme a cidade procurada ou 'FIM' para encerrar:\n");
        scanf("%s", infoCidade.nome);

        if (strcmp(infoCidade.nome, "FIM") == 0)
            break;
        else {
            if(excluiCidade(&lista, infoCidade.nome)) {
                printf("%s foi excluida da lista \n", infoCidade.nome);
                imprimiLista(&lista, "Novo conteudo da lista");
            }
            else 
                printf("%s não foi encontrada na lista\n", infoCidade.nome);    
        }
    }
    return 0;
}

void imprimiLista(TDescritor *list, char *cabec) {
    TCidade *aux;
    puts(cabec);
    printf("%-20s %8s %8s\n", "Cidade", "Pop.", "Area");
    puts("--------------------------------------");

    aux = list->inicio;

    while (aux != NULL) {
        printf("%-20s %8d %8.2f\n", aux->nome, aux->pop, aux->area);
        aux = aux->prox;
    }
    puts("--------------------------------------");
    printf("Existem %d cidades na lista\n", list->cont);
}

int excluiCidade (TDescritor *list, char *nome) {
    TCidade *aux, *ant;
    aux = list->inicio;
            ant = NULL;
            while (aux != NULL && strcmp(nome, aux->nome) != 0) {
                ant = aux;
                aux = aux->prox;
            }

            if (aux == NULL)
                return 0;
            else {
                printf("%s existe na lista e será excluida\n", nome);
                if (ant == NULL)
                    list->inicio = aux->prox;
                else {
                    ant->prox = aux->prox;
                    free(aux);
                    list->cont--;
                    return 1;
                }
            }
        }

void inicializaLista(TDescritor *list) {
    list->inicio = NULL;
    list->final = NULL;
    list->cont = 0;
}

int incluiCidade(TDescritor * list, TCidade cidade) {
    TCidade *aux;
    aux = (TCidade *) malloc(sizeof(TCidade)); 
    if (aux == NULL) {
        return FALSE;
    }
    *aux = cidade; 
    aux->prox = NULL; 

    if (list->inicio == NULL)
        list->inicio = aux;
    else 
        list->final->prox = aux;

    list->final = aux;
    list->cont++;

    return TRUE;
}
