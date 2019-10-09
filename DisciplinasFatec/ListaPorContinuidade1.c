/*
Disciplina Estrutura de Dados - ADS - FATEC Sorocaba
Segundo semestre de 2019

Nome: Otávio Luiz de Biaggi Hirooka

Programa de lista de números por continuidade
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define QTDE_TOTAL 100

typedef struct { char RA[14];
                 char codeDisciplina[6];
                 float nota;
                 int faltas;
                } ListAlunos;

ListAlunos listAlunos[QTDE_TOTAL];

void imprimiLista(char *, int);
int excluiItemLista(int, int);

int main (void) {

    int indice = 0, contador = 0;
    char pesquisa[6];

    while (TRUE) {
        printf("Informe o RA do aluno ou XXX para encerrar:\n");
        scanf("%s", listAlunos[indice].RA);

        if (strcmp(listAlunos[indice].RA, "XXX") == 0)
            break;

        if(indice == QTDE_TOTAL) {
            puts("A lista esta cheia\n");
            break;
        }else {
            printf("Informe o codigo da disciplina:\n");
            scanf("%s", listAlunos[indice].codeDisciplina);

            printf("Informe a nota do aluno nesta disciplina:\n");
            scanf("%f", &listAlunos[indice].nota);

            printf("Informe o numero de faltas do aluno nesta disciplina:\n");
            scanf("%d", &listAlunos[indice].faltas);

            contador++;
        }
        indice++;
    }

    imprimiLista("Conteudo inicial da lista de alunos", contador);

    while (TRUE) {
        printf("Informe o codigo da disciplina que sera excluida ou XXX para encerrar:\n");
        scanf("%s", pesquisa);

        if (strcmp(pesquisa, "XXX") == 0)
            break;
        else {
            indice = 0;

            while (indice <= contador) {
                while (indice <= contador && !strcmp(listAlunos[indice].codeDisciplina, pesquisa) == 0) {
                    indice++;
                }

                if (indice > contador) {
                    puts("Disciplina não está mais na lista\n");
                    break;
                } else {
                    contador = excluiItemLista(indice, contador);
                    imprimiLista("Novo conteudo da lista de alunos", contador);
                }
            }
        }
    }
    return 0;
}

void imprimiLista(char *titulo, int total) {
    puts(titulo);
    printf("%-13s %10s %8s %8s\n", "RA", "Disciplina", "Nota", "Faltas");
    puts("------------------------------------------");

    for(int indice = 0; indice < total; indice++) {
        printf("%-13s %5s %13.1f %8d\n", listAlunos[indice].RA, 
                                        listAlunos[indice].codeDisciplina, 
                                        listAlunos[indice].nota,
                                        listAlunos[indice].faltas);
    }

    puts("------------------------------------------");
}

int excluiItemLista(int ind, int total) {
    while (ind < total) {
                        strcpy(listAlunos[ind].RA, listAlunos[ind + 1].RA);
                        strcpy(listAlunos[ind].codeDisciplina, listAlunos[ind + 1].codeDisciplina);
                        listAlunos[ind].nota = listAlunos[ind + 1].nota;
                        listAlunos[ind].faltas = listAlunos[ind + 1].faltas;
                        ind++;
                    }
                    total--;
    return total;
}