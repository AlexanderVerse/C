////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Métodos reutilizables como lo son menu, titulos y descripciones del programa
*/

///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<string.h>
#include<C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.c>


////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
/*
Decripción: Hace un menu el cual muestra las opciones a elegir. Este puede cambiar su aparencia tanto su contorno ó donde se muestra el título.
Parámetros.
char *title[]: Título del menu.
char *options[]: Aqui se pasan todas las opciones que aparacerán en el menu en un arreglo de tipo apuntador.
int elements: Número de opciones en el menu.*/
char menu(char *title[],char *options[], int elements);

/**/
//void description_program(char *leyend[], int length_line, char form);

/*
Decripción: Crea titulos de acuerdo a la longitud del texto.
Parámetros.
char *text[]: El título que deseamos mostrar.
char form: caracter con el cual será rodeado el título.
int pos: puede haber varios títulos en text[] asi que este indica que título mostrar de todos los que hay ,por default es 0.*/
void titles(char *text[], char form, int pos);


/*Hace lo mismo que el menu nadamas que lo identa de una forma diferente.
*/
void list(char *title[], char *list[], int elements);
