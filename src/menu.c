#include <stdio.h>
#include "menu.h"
#include "sinais_de_controle.h"

void menu(){

	int estado;

	do{
	printf("-----------ESCOLHA SUA ACAO--------------\n");
	printf("0) PARADO\n");
	printf("1) ANDAR PARA FRENTE\n");
	printf("2) VIRAR A DIREITA\n");
	printf("3) VIRAR A ESQUERDA\n");

	scanf("%d", &estado);

		if(estado>=4){
			printf("estado inválido\n");
		}

	}while(estado==4);

	sinais_de_controle(estado);
}
