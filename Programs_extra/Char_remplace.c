#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int tam;
	char cad[20];
	char let1, let2;
	printf("\n\t>> Insert string: ");
	gets(cad);
	fflush(stdin);
	printf("\n\t>> Teclea la letra que buscara: ");
	let1=getchar();
	fflush(stdin);
	printf("\n\t>> Tecle la letra la cual remplazara la anterior letra: ");
	let2=getchar();
	fflush(stdin);
	tam=strlen(cad);
	for(int i=0; i<=tam; i++)
		if(cad[i]==let1)
			cad[i]=let2;
	printf("\n\t* ");
	for(int i=tam; i>=0; i--)
		printf("%c",cad[i]);
	return 0;
}
