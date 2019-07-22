////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Operaciones básicas de aritmética con números imaginarios.
Se tiene sola una declaracion de una estructura de tipo numeros compleja esta estructura se ocupa en las 4 operaciones esto se hace a travez de un puntero de tipo numero complejo para que todas puedan ocupar esta estructura.
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>
#define TRUE 1


///////////////////////////////////////////////
//////////          Structs         ///////////
///////////////////////////////////////////////
struct complejos
{
	float parte_real1;
	float parte_imaginaria1;
	float parte_real2;
	float parte_imaginaria2;
}var, *numbers_comple;



///////////////////////////////////////////////
//////////        Prototypes        ///////////
///////////////////////////////////////////////
void insert_num(struct complejos *comple);



///////////////////////////////////////////////
//////////            Code          ///////////
///////////////////////////////////////////////
int main()
{
	char *results[]={"Results"};
	char *title[]={"Calculator of numbers imaginarys"};
	char *options[]={"Suma","Resta","Multiplicacion","Division","Exit"};
	struct complejos numbers_comple,*apuntador;
	apuntador = &numbers_comple;
	char option;
	float divisor, multi1, multi2, multi3, multi4, multiplicando1, multiplicando2, multiplicando3, multiplicando4;
	float parte_i, parte_r;
	while(TRUE)
	{
		option = menu(title,options,5);
		if(option==1)
		{
			titles(options,'-',0);
			insert_num(apuntador);
			parte_r=apuntador->parte_real1+apuntador->parte_real2;
			parte_i=apuntador->parte_imaginaria1+apuntador->parte_imaginaria2;
			titles(results,'-',0);
			printf("\n\t* La suma de los numero complejos (%f +(%fi) \"MAS\" %f +(%fi))\n \tEs igual a: %f +(%fi)",apuntador->parte_real1,apuntador->parte_imaginaria1,apuntador->parte_real2,apuntador->parte_imaginaria2,parte_r,parte_i);
		}
		else if(option==2)
		{
			titles(options,'-',1);
			insert_num(apuntador);
			parte_i=(apuntador)->parte_imaginaria1-(apuntador)->parte_imaginaria2;
			parte_r=(apuntador)->parte_real1-(apuntador)->parte_real2;
			titles(results,'-',0);
			printf("\n\t* La resta de los numero complejos (%f +(%fi) \"MENOS\" %f +(%fi))\n \tEs igual a: %f +(%fi)",(apuntador)->parte_real1,(apuntador)->parte_imaginaria1,(apuntador)->parte_real2,(apuntador)->parte_imaginaria2,parte_r,parte_i);
		}
		else if (option==3)
		{
			titles(options,'-',2);
			insert_num(apuntador);
			multiplicando1=(apuntador)->parte_real1*(apuntador)->parte_real2;
			multiplicando2=(apuntador)->parte_real1*(apuntador)->parte_imaginaria2;
			multiplicando3=(apuntador)->parte_imaginaria1*(apuntador)->parte_real2;
			multiplicando4=(apuntador)->parte_imaginaria1*(apuntador)->parte_imaginaria2;
			parte_r=multiplicando1+((-1)*multiplicando4);
			parte_i=multiplicando2+multiplicando3;
			titles(results,'-',0);
			printf("\n\t* La multiplicacion de los numero complejos (%f +(%fi) \"MULTIPLICACION\" %f +(%fi))\n \tEs igual a: %f +(%fi)", (apuntador)->parte_real1, (apuntador)->parte_imaginaria1, (apuntador)->parte_real2, (apuntador)->parte_imaginaria2, parte_r,parte_i);
		}
		else if (option==4)
		{
			titles(options,'-',3);
			insert_num(apuntador);
			divisor=( (apuntador)->parte_real2 )*( (apuntador)->parte_real2 ) + ( (apuntador)->parte_imaginaria2 )*( (apuntador)->parte_imaginaria2) ;
			multi1=(apuntador)->parte_real1;
			multi2=(apuntador)->parte_imaginaria1;
			multi3=(apuntador)->parte_real2/divisor;
			multi4=(-1)*((apuntador)->parte_imaginaria2/divisor);
			parte_r=((apuntador)->parte_real1*multi3)+((-1)*(multi2*multi4));
			parte_i=((apuntador)->parte_real1*multi4)+(multi2*multi3);
			titles(results,'-',0);
			printf("\n\t* La division de los numero complejos (%f +(%fi) \"DIVISION\" %f +(%fi))\n \tEs igual a: %f +(%fi)", (apuntador)->parte_real1, (apuntador)->parte_imaginaria1, (apuntador)->parte_real2, (apuntador)->parte_imaginaria2,parte_r,parte_i);
		}
		else
			break;

	}
}


void insert_num(struct complejos *comple)
{
	printf("\n\t>> Escribe la parte real del primer termino: ");
	scanf("%f",&comple->parte_real1);
	printf("\t>> Escribe la parte imaginaria del primer termino: ");
	scanf("%f",&comple->parte_imaginaria1);
	printf("\t>> Escribe la parte entera del segundo termino: ");
	scanf("%f",&comple->parte_real2);
	printf("\t>> Escribe la parte imaginaria del segundo termino: ");
	scanf("%f",&comple->parte_imaginaria2);
}
