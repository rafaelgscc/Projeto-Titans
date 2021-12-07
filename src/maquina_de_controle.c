#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu.h"
#include "maquina_de_controle.h"
#include "sinais_de_controle.h"
#include "sinais_sensor.h"

void maquina_de_controle(){

	while(1){
		int val=0;
		Sensor sensor; /*chamada da struct Sensor em sinais_sensor.h*/

		while(val<=1){

			/*adotando valores de 0 ou 1*/
			printf("lendo os valores dos sensores\n");
			scanf("%d %d %d %d", &sensor.SF, &sensor.ST, &sensor.SD, &sensor.SE);
			
			if((sensor.SF!=0 && sensor.SF!=1) || (sensor.ST!=0 && sensor.ST!=1) || (sensor.SD!=0 && sensor.SD!=1) || (sensor.SE!=0 && sensor.SE!=1) ){
				printf("Valores inválidos\n");
				val=-1;
			}else if((sensor.SF==1 && sensor.ST==1) || (sensor.SD==1 && sensor.SE==1)){/*SF!=ST e SD!=SE*/
				printf("Erro na Afericao dos sensores\n");
				if(sensor.SF==1 && sensor.ST==1 && sensor.SD==1 && sensor.SE==1){/*todos iguais a 1 o fantasma está acima*/
					printf("porém valores iguais\n");
					val=2;
				}
			}else
				val=2;


		}
		system("clear");/*limpar a tela*/

		/*robo e sensores*/
		printf("       %d\n",sensor.SF);
		printf("      ___\n");
		printf("%d    | T |     %d\n", sensor.SE, sensor.SD);
		printf("     |___|\n");
		printf("\n");
		printf("       %d\n",sensor.ST);

		/*fantasma detectado*/
		if(sensor.ST==1 && sensor.SF==1 && sensor.SD==1 && sensor.SE==1){
			printf("FANTASMA ENCONTRADO!!\n\n");
			sleep(2);
			sinais_de_controle(4);
			printf("CAPTURADO!!!!\n\n");
			sleep(2);
			sinais_de_controle(5);
			sensor.ST=0;
			sensor.SF=0;
			sensor.SD=0;
			sensor.SE=0;
			printf("capturado com sucesso!!!\n");
		}

		menu();

	}
}