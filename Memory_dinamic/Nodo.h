///////////////////////////////////////////////
////////            Constants         /////////
///////////////////////////////////////////////
#define FALSE 0
#define TRUE 1


///////////////////////////////////////////////
//////////          Estructs        ///////////
///////////////////////////////////////////////
typedef struct nodo
{
    //int item;
    int item;
	struct nodo *prompter;
}
Nodo;// Cuando la estructura quiera ser usada deberá ser llamada de la siguiente forma.

typedef struct nodo_two_prompters
{
    int item;
    Nodo *apunt_right;
    struct nodo_two_prompters *apunt_down;
}Nodo_two_prompters;
