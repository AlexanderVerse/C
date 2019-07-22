////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Muestra las letras del abecedario en una matrix de 8x8
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<math.h>


////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
void ciclo(int mat[8][8]);
int p,i;


///////////////////////////////////////////////
//////////            Code         ///////////
///////////////////////////////////////////////
int main()
{
	int matriz[8][8]={{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}};
	char letra;
	printf(">> Introduce la letra que quieres que aparesca(Para salir 0): ");
	scanf(" %c",&letra);
	fflush(stdin);
	while(letra!='0')
	{
		if(letra=='A' || letra=='a')
		{
			int matriz[8][8] = {{0,0,0,1,1,0,0,0},{0,0,1,1,1,1,0,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='B' || letra=='b')
		{
			int matriz[8][8]= {{0,1,1,1,1,1,0,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,1,1,1,1,0,0}};
			ciclo(matriz);
		}
		else if(letra=='C' || letra=='c')
		{
			int matriz[8][8]={{0,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,0},{0,1,1,0,0,0,0,0},{0,1,1,0,0,0,0,0,},{0,1,1,0,0,0,0,0},{0,1,1,0,0,0,0,0},{0,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,0}};
			ciclo(matriz);
		}
		else if(letra=='D' || letra=='d')
		{
			int matriz[8][8]={{0,1,1,1,1,1,0,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,1,1,1,0,0}};
			ciclo(matriz);
		}
		else if(letra=='E' || letra=='e')
		{
			int matriz[8][8]={{0,1,1,1,1,1,1,0,},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,1,1,1,1,1,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,1,1,1,1,1,0}};
			ciclo(matriz);
		}
		else if(letra=='F' || letra=='f')
		{
			int matriz[8][8]={{0,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,0},{0,1,1,0,0,0,0,0},{0,1,1,0,0,0,0,0},{0,1,1,1,1,1,1,0},{0,1,1,0,0,0,0,0},{0,1,1,0,0,0,0,0},{0,1,1,0,0,0,0,0}};
			ciclo(matriz);
		}
		else if(letra=='G' || letra=='g')
		{
			int matriz[8][8]={{0,1,1,1,1,1,1,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,1,1,1,0,0},{0,1,0,1,1,1,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,1,1,1,1,0,0}};
			ciclo(matriz);
		}
		else if(letra=='H' || letra=='h')
		{
			int matriz[8][8]={{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='I' || letra=='i')
		{
			int matriz[8][8]={{0,1,1,1,1,1,1,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,1,1,1,1,1,1,0}};
			ciclo(matriz);
		}
		else if(letra=='J' || letra=='j')
		{
			int matriz[8][8]={{0,1,1,1,1,1,1,0},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0},{0,1,0,0,0,1,0,0},{0,1,0,0,0,1,0,0},{0,0,1,1,1,0,0,0}};
			ciclo(matriz);
		}
		else if(letra=='K' || letra=='k')
		{
			int matriz[8][8]={{0,1,0,0,0,0,1,0},{0,1,0,0,0,1,0,0},{0,1,0,0,1,0,0,0},{0,1,1,1,0,0,0,0},{0,1,1,1,0,0,0,0},{0,1,0,0,1,0,0,0},{0,1,0,0,0,1,0,0},{0,1,0,0,0,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='L' || letra=='l')
		{
			int matriz[8][8]={{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,1,1,1,1,1,0}};
			ciclo(matriz);
		}
		else if(letra=='M' || letra=='m')
		{
			int matriz[8][8]={{0,1,1,0,0,1,1,0},{0,1,0,1,1,0,1,0},{0,1,0,1,1,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='N' || letra=='n')
		{
			int matriz[8][8]={{0,0,0,0,0,0,0,0},{0,1,0,0,0,0,1,0},{0,1,1,0,0,0,1,0},{0,1,0,1,0,0,1,0},{0,1,0,0,1,0,1,0},{0,1,0,0,0,1,1,0},{0,1,0,0,0,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='O' || letra=='o')
		{
			int matriz[8][8]={{0,0,1,1,1,1,0,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0,},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,0,1,1,1,1,0,0}};
			ciclo(matriz);
		}
		else if(letra=='P' || letra=='p')
		{
			int matriz[8][8]={{0,1,1,1,1,1,0,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,1,1,1,1,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0}};
			ciclo(matriz);
		}
		else if(letra=='Q' || letra=='q')
		{
			int matriz[8][8]={{0,0,1,1,1,0,0,0},{0,1,0,0,0,1,0,0},{0,1,0,0,0,1,0,0},{0,1,0,0,0,1,0,0},{0,1,0,1,0,1,0,0},{0,1,0,0,1,1,0,0},{0,1,0,0,0,1,0,0},{0,0,1,1,1,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='R' || letra=='r')
		{
			int matriz[8][8]={{0,1,1,1,1,1,0,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,1,1,1,1,0,0},{0,1,1,1,0,0,0,0},{0,1,0,0,1,0,0,0},{0,1,0,0,0,1,0,0},{0,1,0,0,0,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='S' || letra=='s')
		{
			int matriz[8][8]={{0,0,1,1,1,1,1,0},{0,1,0,0,0,0,0,0},{0,1,0,0,0,0,0,0},{0,0,1,1,1,1,0,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0},{0,1,1,1,1,1,0,0}};
			ciclo(matriz);
		}
		else if(letra=='T' || letra=='t')
		{
			int matriz[8][8]={{0,1,1,1,1,1,1,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0}};
			ciclo(matriz);
		}
		else if(letra=='U' || letra=='u')
		{
			int matriz[8][8]={{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,0,1,1,1,1,0,0}};
			ciclo(matriz);
		}
		else if(letra=='V' || letra=='v')
		{
			int matriz[8][8]={{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,0,1,0,0,1,0,0},{0,0,0,1,1,0,0,0}};
			ciclo(matriz);
		}
		else if(letra=='W' || letra=='w')
		{
			int matriz[8][8]={{0,0,0,0,0,0,0,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,1,1,0,1,0},{0,1,0,1,1,0,1,0},{0,1,1,0,0,1,1,0},{0,1,0,0,0,0,1,0}};
			ciclo(matriz);
		}
		else if(letra=='X' || letra=='x')
		{
			int matriz[8][8]={{0,0,0,0,0,0,0,0},{0,1,0,0,0,0,1,0},{0,0,1,0,0,1,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,1,0,0,1,0,0},{0,1,0,0,0,0,1,0},{0,0,0,0,0,0,0,0}};
			ciclo(matriz);
		}
		else if(letra=='Y' || letra=='y')
		{
			int matriz[8][8]={{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,0,1,0,0,1,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0}};
			ciclo(matriz);
		}
		else if(letra=='Z' || letra=='z')
		{
			int matriz[8][8]={{0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,0},{0,0,0,0,0,1,0,0},{0,0,0,0,1,0,0,0},{0,0,0,1,0,0,0,0},{0,0,1,0,0,0,0,0},{0,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0}};
			ciclo(matriz);
		}
		else
			printf("\n\t ...... Value invalid ......");
		printf(">> Introduce la letra que quieres que aparesca(Para salir 0): ");
		scanf(" %c",&letra);
		fflush(stdin);
	}
	return 0;
}

void ciclo(int mat[8][8])
{
	for(i=0; i<8; i++)
	{
		printf("\t \t");
		for(p=0; p<8; p++)
			printf("%i ",mat[i][p]);
		printf("\n");
	}
}