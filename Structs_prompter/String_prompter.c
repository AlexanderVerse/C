////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Manipulacion de cadena con punteros haciendo a ella a travez de uno y sacando un intervalo de la cadena.
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>

///////////////////////////////////////////////
//////////            Code          ///////////
///////////////////////////////////////////////
int main()
{
	char *result[]={"Results"};
	char cadena[20];
	char *puntero;
	puntero=&cadena[0];
	int inicio,final,i;
	printf("\n\t...... Inserta una cadena, ya que se haya insertado pedir que intervalo desea mostrar ......");
	printf("\n\t>> Ingresa la cadena: ");
	fgets(cadena,20,stdin);
	do
	{
		printf("\t>> Imprime la cadena desde(introduce numero): ");
		scanf("%d",&inicio);
	}while(inicio<0 || inicio>19);
	do
	{
		printf("\t>> Hasta(introduce numero): ");
		scanf("%d",&final);
	}while(final<0 || final>19);
	titles(result,'-',0);
	printf("\n\t* ");
	if(inicio<=final)
		for (i=inicio; i<=final; i++)
   			printf("%c",*(puntero+i));
	else
		for (i=inicio; i>=final; i--)
   			printf("%c",*(puntero+i));
}
