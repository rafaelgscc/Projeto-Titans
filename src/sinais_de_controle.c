#include <stdio.h>
#include <unistd.h>/*para uso do sleep*/
#include "sinais_de_controle.h"

void sinais_de_controle(int estado){

	int MD,ME,AR;
	int estado_atual;

	switch(estado){
		case 0:
			MD = 0;
			ME = 0;
			AR = 0;
			estado_atual=0;
			printf("Estado atual:%d\n", estado_atual);
			printf("Parado\n");
			printf("MD = %d\nME = %d\nAR = %d\n", MD, ME, AR);
			
		break;
			
		case 1:
			MD = 1;
			ME = 1;
			AR = 0;
			estado_atual = 1;
			printf("Estado atual:%d\n", estado_atual);
			printf("Para Frente\n");
			printf("MD = %d\nME = %d\nAR = %d\n", MD, ME, AR);
		break;

		case 2:
			MD = 0;
			ME = 1;
			AR = 0;
			estado_atual = 2;
			printf("Estado atual:%d\n", estado_atual);
			printf("Virar a Direita\n");
			printf("MD = %d\nME = %d\nAR = %d\n", MD, ME, AR);
		break;

		case 3:
			MD = 1;
			ME = 0;
			AR = 0;
			estado_atual = 3;
			printf("Estado atual:%d\n", estado_atual);
			printf("Virar a Esquerda\n");
			printf("MD = %d\nME = %d\nAR = %d\n", MD, ME, AR);
		break;

		case 4:
			MD = 0;
			ME = 0;
			AR = 1;
			estado_atual = 4;
			printf("Estado atual:%d\n", estado_atual);
			printf("Atacar\n");
			printf("MD = %d\nME = %d\nAR = %d\n", MD, ME, AR);
		break;

		case 5:
			MD = 0;
			ME = 0;
			AR = 0;
			estado_atual= 5;
			printf("Estado atual:%d\n", estado_atual);
			printf("SONECA!!!!!\n");
			printf("MD = %d\nME = %d\nAR = %d\n", MD, ME, AR);
			sleep(10);
		break;

		default:
			printf("Estado Impossivel\n");

	}
}
