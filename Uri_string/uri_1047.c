/*  
    URI Online Judge - 1047 - "Animal"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: uso de strcmp
*/

#include <stdio.h>
#include <string.h>
 
int main() {
 
    char coluna[13], classe[9], alimentacao[11];
    
    scanf("%s", coluna);
    
    scanf("%s", classe);
    
    scanf("%s", alimentacao);
    
    if(strcmp(coluna,"vertebrado")==0) {
        if(strcmp(classe, "ave")==0) {
            if(strcmp(alimentacao, "carnivoro")==0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else {
            if(strcmp(alimentacao, "onivoro")==0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
        if(strcmp(classe, "inseto")==0) {
            if(strcmp(alimentacao, "hematofago")==0)
                printf("pulga\n");
            else
                printf("lagarta\n");
    }
    else {
        if(strcmp(alimentacao, "hematofago")==0)
            printf("sanguessuga\n");
        else
            printf("minhoca\n");
    }
    return 0;
}