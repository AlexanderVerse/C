#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main ()
{		
	int num;
	enum semaforo
	{	
		rojo=5,
		amarillo=52,
		verde=100,
	};	
	
	
	struct nombre
	{
		int numero;
	}c1, *puntero5;
	
	puntero5=&c1;
	do
	{
		printf("Que color quiueres asignarle al semaforo: ");
		scanf("%d",&puntero5->numero);
		switch(puntero5->numero)
		{
			case rojo:
				printf("\nEl color del semaforo es: Rojo\n");
				break;
				
				
			case amarillo:
					printf("\nEl color del semaforo es: Amarillo\n");
			break;
			
			
			case verde:
				printf("\nSemaforo: Verde\n");
			break;
			
			
			default:
				printf("\nError\n");
			break;
		}
	}while(num!=500);
}
	
