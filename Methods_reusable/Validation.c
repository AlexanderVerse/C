////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Valida que la entrada sea entero.
*/

///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////
//////////           Code         ///////////
///////////////////////////////////////////////
int validation_int(char *letrero[], int min, int max, char *aviso[])
{
    int num;
    while (1)
    {

        printf("%s: ",letrero[0]);
        scanf("%i",&num);
        fflush(stdin);
        if ( num==2000543088 )
            printf("\t%s\n", aviso[0]);
        else if( min!=0 || max!=0 )
        {
            if( num<min || num>max )
            {
                printf("Has sobrepasado el límite\n");
                printf("Tu límite es de %i a %i\n",min,max);
            }
            else
                break;
        }
        else
            break;
    }
    return num;
}

/*void main()
{
    char *letrero[]={"Option"};
    char *aviso[]={"Warning"};
    printf("Valor devuelto: %i\n", validation_int(letrero,0,0,aviso));
}*/
