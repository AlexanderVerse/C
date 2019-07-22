////////////////////////////////////////////////////////////
///////////////           DESCRIPTION        ///////////////
////////////////////////////////////////////////////////////
/*
---> Representa memoría dinámica con una cola.<---
*/
///////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////
////////////             NOTES	          ////////////
//////////////////////////////////////////////////////
/*1.- "&" devuelve la direccion de memoria donde se encuentra la variable.*/
/*2.- "int *var" variable de tipo puntero a un entero, puede ser de cualquier  tipo de item. Si después de declararla y inicializarla hacemos lo siguiente */
/*3.- Si hacemos un funcion de la siguiente manera:
"void nombre-funcion(int *var, int *var2)"
lo que hacemos es que la variable que se pase como parámetro se cambiará y no se creara una copia, los argumentos pasados serán modificados.
Para que esto resulte a la hora de llamar la función en parámetros serán pasado las direcciones de memoria de las variables como lo siguiente
nombre-funcion(&var, &var2)*/
/*4.-Lo de las funciones pasando la referencia tambien podemos pasar estructuras y que estas no creen una copia y eso hará las cosas mas rápidas, lo hacemos de l siguiente manera:
void nombre-funcion(struct nombre-estructura *var_prompter, struct nombre-estructura *var2_prompter).
Entonces para que sea llamada lo hacemos asi:
nombre-funcion(&estructura, &estructura2).*/
/*5.-Si estamos hablando de estructuras como por ejemplo:
A la hora de llamar una funcion se puede pasar expliciamente el nombre como tal de la variable sin antecederle el simbolo&.
Nodo *head;
name-function(Nodo *head)
llamada al metodo: name-function(head)
*/


///////////////////////////////////////////////
////////           Librarys          /////////
///////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Memory_dinamic\Nodo.h>

////////////////////////////////////////////////
//////////          Prototypes       ///////////
////////////////////////////////////////////////
Nodo *Pushitem (Nodo *head, int  item);
Nodo *Pullitem (Nodo *head);
void PrintCola (Nodo *head);
Nodo *ClearCola (Nodo *head);



///////////////////////////////////////////////
/////              Functions             //////
///////////////////////////////////////////////
/*Deberán pasarse como argumentos las direciones de memoria de la cola*/
Nodo *Pushitem (Nodo *head, int item)
{
    Nodo *auxhead = head;
    if (head != NULL)
    {
        while (head->prompter != NULL)
            head = head->prompter;
        head->prompter = (Nodo *) malloc(sizeof(Nodo));
        head =  head -> prompter;
        head->prompter = NULL;
        head->item = item;
        return auxhead;
    }
    else
    {
        head=(Nodo *)malloc(sizeof(Nodo));
        head->prompter = NULL;
        head->item = item;
        return head;
    }
}

Nodo *Pullitem (Nodo *head)
{
    Nodo *aux_head;
    printf ("\t>> Element delete: %i\n", head->item);
    aux_head =  head->prompter;
    free (head);
    return aux_head;
}


void PrintCola (Nodo *head)
{
    if (head == NULL)
        printf ("\t>> ¡¡ Cola empty !!\n");
    else
    {
        printf("\n\t>>  ");
        while (head != NULL)
        {
            printf ("%i->", head->item);
            head =  head->prompter;
        }
        printf ("null\n");
    }
}



Nodo *ClearCola (Nodo *head)
{
    while (head != NULL)
        head = Pullitem(head);
    printf("\t>> ¡Clean cola!\n");
    return NULL;
}


///////////////////////////////////////////////
//////////            Code          ///////////
///////////////////////////////////////////////
int main()
{
    int option,item;
    Nodo *head;
    head = NULL;
	char *title[] = {"Purchase"};
	char *options[]={"Insert item","Delete item","Print cola","Clear cola","Exit"};
    while (TRUE)
    {
        option = menu(title,options,5);
        if (option==1)
        {
            printf ("\t>> Item: ");
            scanf ("%i", &item);
            fflush(stdin);
            head = Pushitem (head, item);
            printf("\t>> ¡Element insert!\n");
        }
        else if (option==2)
        {
            if (head == NULL)
                printf ("\t>> ¡Empty cola!\n");
            else
                head = Pullitem (head);
        }
        else if (option==3)
            PrintCola (head);
        else if (option==4)
            head = ClearCola (head);
        else if (option==5)
            break;
    }
    ClearCola(head);
    return 0;
}
