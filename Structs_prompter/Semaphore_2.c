#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct colores
{
	char color1[20]="Rojo";
	char color2[20]="Amarillo";
	char color3[20]="Verde";
};

int main ()
{
	struct colores
	{
		char color1[20]="Rojo";
		char color2[20]="Amarillo";
		char color3[20]="Verde";
	}num1,num2,num3;

	enum semaforo
	{
		apagado=0,
		encendido=1,
		rojo=5,
		amarillo=52,
		verde=100,
	}c1,c2,c3;
	/*
	char color1[20]="Rojo";
	char color2[20]="Amarillo";
	char color3[20]="Verde";*/
	semaforo num;
	printf("Que color quiueres asignarle al semaforo: ");
	scanf("%i",&c1);
	while(c1!=400)
	{
		if(c1==5)
			printf("El color del semaforo es: %s",num1.color1);

		if(c1==52)
			printf("El color del semaforo es: %s",num2.color2);

		if(c1==100)
			printf("El color del semaforo es: %s",num3.color3);
		printf("\nQue color quiueres asignarle al semaforo: ");
		scanf("%i",&c1);
	}
}
