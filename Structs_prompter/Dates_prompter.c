////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>


///////////////////////////////////////////////
//////////          Structs         ///////////
///////////////////////////////////////////////
typedef struct fecha
{
	int anio;
	int mes;
	int dia;
	int anio2;
	int dia2;
	int mes2;
}Date;


///////////////////////////////////////////////
//////////            Code          ///////////
///////////////////////////////////////////////
int main()
{
	char *lis[]={"ENERO","FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO","AGOSTO", "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};
	char *title_list[]={"Meses"};
	Date fecha1, fecha2, *puntero1, *puntero2;
	puntero1=&fecha1;
	puntero2=&fecha2;
	int res1, res2, res3;
	int dias_res=0;
	int compa;
	int var;
	int dias_totales1, dias_totales2;
	int dias_totales;
	int dias_normal[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int dias_bisiesto[20]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int compa_dia, compa_dia2;
	int dias_uno, dias_dos, uno_fecha;
	//Primera Fecha
	printf("\n\t>> Introduce la primera fecha: ");
	printf("Anio: ");
	scanf("%i",&puntero1->anio);
	res1=puntero1->anio % 4;
	res2=puntero1->anio % 100;
	res3=puntero1->anio % 400;

	do
	{
		list(title_list,lis,12);
		scanf("%i",&puntero1->mes);
	}while(puntero1->mes<=0 || puntero1->mes>12);
	if(res1==0 || res2==0 || res3==0)
		compa_dia=dias_bisiesto[puntero1->mes];
	else
		compa_dia=dias_normal[puntero1->mes];
	do
	{
		printf("Dia: ");
		scanf("%i",&puntero1->dia);
	}while(puntero1->dia<=0 || puntero1->dia>compa_dia);
	printf("\nIntroduce la segunda fecha\n");
	do
	{
		printf("Anio: ");
		scanf("%i",&puntero2->anio2);
	}while(puntero2->anio2<puntero1->anio);

	res1=puntero2->anio2 % 4;
	res2=puntero2->anio2 % 100;
	res3=puntero2->anio2 % 400;
	do
	{
		list(title_list,lis,12);
		scanf("%i",&puntero2->mes2);
	}while(puntero2->mes2<=0 || puntero2->mes2>12 );

	if(res1==0 || res2==0 || res3==0)
		compa_dia2=dias_bisiesto[puntero2->mes2];
	else
		compa_dia2=dias_normal[puntero2->mes2];
	compa_dia2=dias_normal[puntero2->mes2];
	do
	{
		printf("Dia: ");
		scanf("%i",&puntero2->dia2);
	}while(puntero2->dia2<=0 || puntero2->dia2>compa_dia2);

	if(puntero1->anio==puntero2->anio2 && puntero1->mes==puntero2->mes2)
	{
		dias_res=puntero2->dia2-puntero1->dia;
		printf("Los dias que hay en esa fecha son: %i",dias_res);
	}

	if(puntero1->anio==puntero2->anio2 && puntero1->mes!=puntero2->mes2)
	{
		if(res1==0 || res2==0 || res3==0)
		{
			compa=puntero1->mes+1;
			var=compa;
			while(compa!=puntero2->mes2)
			{
				dias_res=dias_res+dias_bisiesto[var+1];
				var=var+1;
				compa=compa+1;
			}
			dias_totales1=compa_dia-puntero1->dia;
			dias_totales2=compa_dia2-puntero2->dia2;
			dias_res=dias_res+dias_totales1+dias_totales2;
			printf("El resultado es: %i",dias_res);
		}
		else
		{
			compa=puntero1->mes+1;
			var=compa;
			while(compa!=puntero2->mes2)
			{
				dias_res=dias_res+dias_normal[var+1];
				var=var+1;
				compa=compa+1;
			}
			dias_totales1=compa_dia-puntero1->dia;
			dias_totales2=compa_dia2-puntero2->dia2;
			dias_res=dias_res+dias_totales1+dias_totales2;
			printf("El resultado de cuantos dias hay es: %i",dias_res);
		}
	}
	else
	{
		dias_res=0;
		compa=puntero1->anio+1;
		var=compa;
		while(compa!=puntero2->anio2)
		{
			res1=compa % 100;
			res2=compa % 400;
			res3=compa % 4;
			if(res1==0 || res2==0 || res3==0)
				dias_res=dias_res+366;
			else
				dias_res=dias_res+365;
			var=var+1;
			compa=compa+1;
		}
		compa=puntero1->mes;
		var=compa;
		while(compa!=13)
		{
			dias_uno=dias_uno+dias_normal[var+1];
			var=var+1;
			compa=compa+1;
		}
		dias_res=dias_res+dias_uno;
		uno_fecha=compa_dia-puntero1->dia;
		dias_res=dias_res+uno_fecha;


		//Aqui comparamos el mes que se da segundo
		compa=puntero2->mes2;
		dias_uno=0;
		var=1;
		while(var!=compa)
		{
			dias_uno=dias_uno+dias_normal[var];
			var=var+1;
		}
		dias_uno=dias_uno+puntero2->dia2;
		dias_res=dias_res+dias_uno;
		printf("%i\n",dias_uno);
		printf("Los dias que comprenden a esa fecha son: %i",dias_res);
	}
}
