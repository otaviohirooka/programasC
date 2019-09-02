/*  
    URI Online Judge - 2031 - "Pedra, papel, ataque aéreo"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: uso de strcmp
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
	
int casos, cont;

char jogador1[7], jogador2[7];

scanf("%d", &casos);

for(cont = 1; cont <= casos; cont++) {
	scanf("%s", jogador1);
	
	scanf("%s", jogador2);
	
	if(strcmp(jogador1, "ataque") == 0 && strcmp(jogador2, "pedra") == 0)
	    printf("Jogador 1 venceu\n");
	
	else if(strcmp(jogador1, "pedra") == 0 && strcmp(jogador2, "ataque") == 0)
	    printf("Jogador 2 venceu\n");
	
	else if(strcmp(jogador1, "pedra") == 0 && strcmp(jogador2, "papel") == 0)
	    printf("Jogador 1 venceu\n");
	
	else if(strcmp(jogador1, "papel") == 0 && strcmp(jogador2, "pedra") == 0)
	    printf("Jogador 2 venceu\n");
	
	else if(strcmp(jogador1, "papel") == 0 && strcmp(jogador2, "ataque") == 0)
	    printf("Jogador 2 venceu\n");
	
	else if(strcmp(jogador1, "ataque") == 0 && strcmp(jogador2, "papel") == 0)
	    printf("Jogador 1 venceu\n");
	
	else if(strcmp(jogador1, "papel") == 0 && strcmp(jogador2, "papel") == 0)
	    printf("Ambos venceram\n");
	
	else if(strcmp(jogador1, "pedra") == 0 && strcmp(jogador2, "pedra") == 0)
	    printf("Sem ganhador\n");
	
	else if(strcmp(jogador1, "ataque") == 0 && strcmp(jogador2, "ataque") == 0)
	    printf("Aniquilacao mutua\n");
}

return 0;
}