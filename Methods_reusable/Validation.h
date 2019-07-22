////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Validacion en la entrada de teclado ya sea enteros, float, doubles ...*/


///////////////////////////////////////////////
////////           Librarys          /////////
///////////////////////////////////////////////
#include <C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Validation.c>


////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
/*Decripción: Valida un número entero que es ingresado por el teclado.
Parámetros.
char *letrero[]: Descripción del dato que será ingresado.
int min: Si existe un límite inferior.
int max: Si existe un límite superior, sirve para establecer rangos.
char *aviso[]: Si no es introducido un número entero, se mostrará este mensaje.
*/
int validation_int(char *letrero[], int min, int max, char *aviso[]);
