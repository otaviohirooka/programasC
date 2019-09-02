/*  
    URI Online Judge - 2748 - "Saída 2"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: Uso de funções 
*/

#include <stdio.h>
 
int imprime39() {
	int cont;
	
	for(cont = 1; cont < 40; cont++) {
	    printf("-");
    }
	printf("\n");
	
	return 0;
}

int imprimeMeio() {
    int cont;
    
	printf("|");
	
	for(cont = 1; cont < 38; cont++) {
		printf(" ");
	}
	
	printf("|\n");
    return 0;
}
 
int main() {

    int cont;

    imprime39();

    printf("|");

    for(cont = 1; cont < 9; cont++) {
        printf(" ");
    }
    printf("Roberto");

    for(cont = 1; cont < 23; cont++) {
        printf(" ");
    }
    printf("|\n");

    imprimeMeio();

    printf("|");

    for(cont = 1; cont < 9; cont++) {
        printf(" ");
    }

    printf("5786");

    for(cont = 1; cont < 26; cont++){
        printf(" ");
    }

    printf("|\n");

    imprimeMeio();

    printf("|");

    for(cont = 1; cont < 9; cont++) {
        printf(" ");
    }
    printf("UNIFEI");

    for(cont = 1; cont < 24; cont++) {
        printf(" ");
    }
    printf("|\n");

    imprime39();

    return 0;
}