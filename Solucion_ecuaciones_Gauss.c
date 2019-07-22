////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Resuelve ecuaciones por Gauss
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <wchar.h>
#include <locale.h>
int rows;
int cols;



////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
void ini_matrix(int rows, int cols, char matrix[50][50], char letrero[50] );
void mostrar_sistema(int rows, int cols, char sistema_ecuaciones[50][50], char letrero[50]);
void set_sistema_ecuaciones(char sistema_ecuaciones[rows][cols+1]);


///////////////////////////////////////////////
//////////            Code         ///////////
///////////////////////////////////////////////
void main()
{
    printf("Sistema de ecuaciones resuelto por Gauss, paso por paso\n");
    printf("¿Cuantas ecuaciones son?\n");
    scanf("%i", &rows);
    printf("¿Cuantas incógnitas se tienen el sistema?\n");
    scanf("%i", &cols);
    char matrix[rows][cols+1];
    ini_matrix(rows,cols,matrix,"Sistema de ecuaciones");
}

/*Inicializa la matrix en 0's y la muestra
Parámetros:
  -rows: Filas
  -cols: Columnas
  -matrix: matrix que será inicializada
  letrero: titulo de la matrix
*/
void ini_matrix(int rows, int cols, char matrix[50][50], char letrero[50] )
{

    for (size_t i = 0; i < rows; i++) //Inicializamos en 0 toda la matrix
        for (size_t j = 0; j < cols+1; j++)
            matrix[i][j]='0';
  printf("Se ha inicializado la matrix en 0's\n");
  mostrar_sistema(rows,cols,matrix,letrero);
}


//Permite al usuario introducir su sistema de ecuaciones
void set_sistema_ecuaciones(char matrix[rows][cols])
{
  printf("\nIntroduce el sistema de ecuaciones\n");
  for (int i = 0; i < rows; i++)
  {
    printf("Fila %i:\n",rows+1);
    for (size_t j = 0; j < cols; j++)
      scanf("%s",&matrix[i][0]);
    //printf("Introduce la primera ecuacion:\n");

  }
}



void mostrar_sistema(int rows, int cols, char matrix[50][50], char letrero [50] )
{
    printf("%s\n",letrero);
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols+1; j++)
            if( j == cols )
                printf("= ");
        printf("%c ", matrix[i][j]);
    }
    printf("\n");
}
