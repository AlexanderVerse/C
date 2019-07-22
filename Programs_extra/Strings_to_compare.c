#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	int conta=0;
	char cadena1[20]="", cadena2[20]="";
	printf("Dame la cadena 1\n");
	gets(cadena1);
	printf("Dame la cadena 2\n");
	gets(cadena2);
	int longcadena1=strlen(cadena1);
	for(int i=0; i < longcadena1 ; ++i)
		if (cadena1[i] == cadena2[i])
			conta=conta+1;
	if(conta==longcadena1)
		printf("Son iguales");
	else
		printf("No son iguales");
}
