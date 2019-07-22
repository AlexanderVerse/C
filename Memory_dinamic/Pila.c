////////////////////////////////////////////////////////////
///////////////           DESCRIPTION        ///////////////
////////////////////////////////////////////////////////////
/*
---> Representa memoría dinámica con una stack.<---
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
nombre-funcion(&estructura, &estructura2).
*/


///////////////////////////////////////////////
////////           Librarys          /////////
///////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Memory_dinamic\Nodo.h>

////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
Nodo *Pushitem (Nodo *head, int  item);
Nodo *Pullitem (Nodo *head);
void Printstack (Nodo *head);
Nodo *Clearstack (Nodo *head);



///////////////////////////////////////////////
/////              Functions             //////
///////////////////////////////////////////////
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
    Nodo *aux_head = head;
    Nodo *aux_nodo;
    if(head->prompter!=NULL)
    {
        while (head->prompter != NULL)
        {
            aux_nodo = head;
            head = head->prompter;
        }
        aux_nodo->prompter = NULL;
    }
    else
        aux_head = NULL;
    printf ("\t>> Element delete: %i\n", head->item);
    free (head);
    return aux_head;
}


void Printstack (Nodo *head)
{
    if (head == NULL)
        printf ("\t>> ¡¡ EMPTY STACK !!\n");
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



Nodo *Clearstack (Nodo *head)
{
    while (head != NULL)
        head = Pullitem(head);
    printf("\t>> ¡CLEAN STACK!\n");
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
	char *options[]={"Insert item","Delete item","Print stack","Clear stack","Exit"};
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
                printf ("\t>> ¡¡EMPTY STACK!!\n");
            else
                head = Pullitem (head);
        }
        else if (option==3)
            Printstack (head);
        else if (option==4)
            head = Clearstack (head);
        else if (option==5)
            break;
        else
            printf ("\t>> ¡OPTION INVALID!\n");
    }
    Clearstack(head);
    return 0;
}
