////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Hace conversiones de un sistema númerico a otro
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>
#define TRUE 1

////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
void decimal_binary(int num_decimal);
void binary_decimal(char num_binary[20]);
void decimal_hexadecimal(int num_decimal);
void hexadecimal_decimal(char num_hexadecimal[20]);


///////////////////////////////////////////////
//////////            Code         ///////////
///////////////////////////////////////////////
int main()
{
	char *title[] = {"Converter"};
	char *options[]={"Decimal-Binary","Binary-Decimal","Decimal-Hexadecimal","Hexadecimal-Decimal","Exit"};
	int option,num;
	char num_char[20];
	while(TRUE)
	{
		option = menu(title,options,5);
		if(option==1)
		{
			titles(options,'-',0);
			printf("\n\t......  Example  ......");
			printf("\n\t* Number decimal: 10");
			printf("\n\t* Number binary: 1010");
			printf("\n\n\t>> Insert number decimal: ");
			scanf("%i",&num);
			fflush(stdin);
			decimal_binary(num);
		}
		else if (option==2)
		{
			titles(options,'-',1);
			printf("\n\t......  Example  ......");
			printf("\n\t* Number Binary: 1011");
			printf("\n\t* Number decimal: 11");
			printf("\n\n\t>> Insert number binary: ");
			scanf("%s",&num_char);
			fflush(stdin);
			binary_decimal(num_char);
		}
		else if (option==3)
		{
			titles(options,'-',2);
			printf("\n\t......  Example  ......");
			printf("\n\t* Number decimal: 1011");
			printf("\n\t* Number hexadecimal: 11");
			printf("\n\n\t>> Insert number decimal: ");
			scanf("%i",&num);
			fflush(stdin);
			decimal_hexadecimal(num);
		}
		else if (option==4)
		{
			titles(options,'-',3);
			printf("\n\t......  Example  ......");
			printf("\n\t* Number hexadecimal: 20");
			printf("\n\t* Number decimal: 32");
			printf("\n\n\t>> Insert number hexadecimal: ");
			scanf("%s",&num_char);
			fflush(stdin);
			hexadecimal_decimal(num_char);
		}
		else
			break;
	}

}

void decimal_binary(int num_decimal)
{
	char *title[]={"Results"};
	int array[20];
	array[0]=0;
	int pos_array=0;
	while(num_decimal!=0)
	{
		array[pos_array]=num_decimal % 2 ;
		num_decimal=num_decimal / 2;
		if(num_decimal>0)
			pos_array+=1;
	}
	titles(title,'*',0);
	printf("\n\t* Number binary: ");
	for(int i=pos_array; i>=0; i--)
		printf("%i",array[i]);
}


void binary_decimal(char num_binary[20])
{
	char *title[]={"Results"};
	int length=strlen(num_binary)-1;
	int sum=0, pot=0;
	for(int w=length; w>=0; w--)
	{
		if(num_binary[w]==49)
			sum+=pow(2,pot);
		pot+=1;
	}
	titles(title,'*',0);
	printf("\n\t* Number decimal: %i",sum);
}


void decimal_hexadecimal(int num_decimal)
{
	char *title[]={"Results"};
	int array[20];
	int pos_array=0;
	int residue;
	char arreglo_letras[]={'A','B','C','D','E','F'};
	while(num_decimal!=0)
	{
		residue=num_decimal % 16;
		if(num_decimal<16)
		{
			if(num_decimal>=10)
				array[pos_array]=arreglo_letras[residue-10];
			else
				array[pos_array]=residue;
			num_decimal=0;
		}
		else
		{
			if (residue>=10)
				array[pos_array]=arreglo_letras[residue-10];
			else
				array[pos_array]=residue;
			num_decimal/=16;
			pos_array+=1;
		}
	}
	titles(title,'*',0);
	printf("\n\t* Number hexadecimal: ");
	for(int i=pos_array; i>=0; i--)
	{
		if(array[i]>=65 && array[i]<=70)
			printf("%c",array[i]);
		else
			printf("%d",array[i]);
	}
}



void hexadecimal_decimal(char num_hexadecimal[20])
{
	char *title[]={"Results"};
	int powe=0, total=0, base=16;
	int res, multi;
	int length=strlen(num_hexadecimal)-1;
	for(int i=length; i>=0; i-- )
	{
		res=pow(base,powe);
		if(num_hexadecimal[i]>=48 && num_hexadecimal[i]<=57)
			multi=res*(num_hexadecimal[i]-48);
		else
			multi=res*(num_hexadecimal[i]-55);
		total+=multi;
		powe+=1;
	}
	titles(title,'*',0);
	printf("\n\t* Number decimal: %i",total);
}
