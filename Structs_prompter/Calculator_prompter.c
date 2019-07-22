////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Calculadora que hace operaciones de suma, resta, multiplicacion y division.
Las variables de total es un puntero la cual es utilizada para las 4 operaciones y hace que haya menos almacenamiento de memoria.
Muestra descripciones de operciones indicando espacios de memoria y valor hacia donde apunta el puntero.
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>
#define TRUE 1


///////////////////////////////////////////////
//////////            Code          ///////////
///////////////////////////////////////////////
int main()
{
	char option;
	int i,cant;
	float *prompter;
	float num1,num2,total;
	prompter = &total;
	char *result[]={"Results"};
	char *title[] = {"Calculator"};
	char *options[]={"Suma","Resta","Mutiplicacion","Division","Salir"};
	while(TRUE)
	{
		option = menu(title,options,5);
		if(option==1)
		{
			titles(options,'*',0);
			printf("\n\t>> Introduce cuantos numeros sumaras: ");
			scanf("%i",&cant);
			for(i=1; i<=cant; i++)
			{
				printf("\t>> Numero %i: ",i);
				scanf("%f",&num1);
				total+=num1;
			}
		}
		else if(option==2)
		{
			titles(options,'*',1);
			printf("\n\t>> Introduce el primer numero: ");
			scanf("%f",&num1);
			printf("\t>> Introduce el segundo numero: ");
			scanf("%f",&num1);
			total=num1-num2;
		}
		else if(option==3)
		{
			total=1;
			titles(options,'*',2);
			printf("\n\t>> Introduce cuantos multiplicaras: ");
			scanf("%i",&cant);
			for(i=1; i<=cant; i++)
			{
				printf("\t>> Introduce el multiplicando %i: ",i);
				scanf("%f",&num1);
				total*=num1;
			}
		}
		else if(option==4)
		{
			titles(options,'*',3);
			printf("\n\t>> Introduce el dividendo: ");
			scanf("%f",&num1);
			printf("\t>> Introduce el divisor: ");
			scanf("%f",&num2);
			total=num1/num2;
		}
		else
			break;
		titles(result,'-',0);
		printf("\n\t* El valor de la suma es(total): %f",total);
		printf("\n\t* La direccion de memoria de la suma(&total): %d",&total);
		printf("\n\t* La direccion de memoria del puntero(&prompter): %d",&prompter);
		printf("\n\t* La direccion de memoria hacia donde apunta el puntero(prompter): %d",prompter);
		printf("\n\t* El valor hacia donde apunta el puntero(*prompter): ",*prompter);
		total=0;
	}
}
