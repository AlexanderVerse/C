////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Métodos que servirán para cualquier programa que quiera usar un menu, un titulo.
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
#include<C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Validation.h>


////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////



///////////////////////////////////////////////
//////////            Code          ///////////
///////////////////////////////////////////////
/*
Decripción: Hace un menu el cual muestra las opciones a elegir. Este puede cambiar su aparencia tanto su contorno ó donde se muestra el título.
Parámetros.
char *title[]: Título del menu.
char *options[]: Aqui se pasan todas las opciones que aparacerán en el menu en un arreglo de tipo apuntador.
int elements: Número de opciones en el menu.
*/
char menu(char *title[], char *options[], int elements)
{
	int option;
	printf("\n\n\n\t\t\t\t");
	int higher_length = 0;
	int len = 0;
	int length;
    int pos_elements = 1;
    char char_title = '*';
    char char_contour = '*';
    int length_menu = 10;
    int length_title;
	int text_elements;
	for (size_t i = 0; i < elements; i++)
	{
		len = strlen(options[i]);
		if ( len>higher_length )
			higher_length=len;
	}
	length_title = strlen(title[0]);
	if (length_title > higher_length)
	{
		text_elements = (int)((length_title - higher_length)/2) + length_menu;
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t p = 0; p < text_elements; p++)
				printf("%c",char_title);
			if ( i==0 )
				printf(" %s ",title[0]);
            else
				printf("\n");
		}
		for (size_t i = 0; i < elements; i++)
		{
			printf("\t\t\t\t");
            length = ((text_elements*2)+length_title) - strlen(options[i]) - 5;
            printf("%c %d.- %s",char_contour,pos_elements,options[i]);
			for (size_t p = 0; p < length; p++)
				printf(" ");
            printf("%c\n",char_contour);
            pos_elements += 1;
            length = text_elements*2+2+length_title;
		}
        printf("\t\t\t\t");
		for (size_t i = 0; i < length; i++)
			printf("%c",char_contour);
	}
    else
	{
		text_elements = (int)((higher_length-length_title)/2) + length_menu;
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t p = 0; p < text_elements; p++)
				printf("%c",char_title);
			if (i==0)
				printf(" %s ",title[0]);
			else
				printf("\n");
		}
		for (size_t i = 0; i < elements; i++)
		{
			printf("\t\t\t\t");
            length = ((text_elements*2)+length_title+2) - strlen(options[i]) - 7;
            printf("%c %d.- %s",char_contour,pos_elements,options[i]);
			for (size_t p = 0; p < length; p++)
				printf(" ");
            printf("%c\n",char_contour);
            pos_elements += 1;
            length = text_elements*2+length_title+2;
		}
        printf("\t\t\t\t");
		for (size_t i = 0; i < length; i++)
            printf("%c",char_contour);
	}

	char *letrero[]={"Option"};
    char *aviso[]={"Warning"};
	printf("\n\t\t\t\t");
    option= validation_int(letrero,1,elements,aviso);
	fflush(stdin); //Se pone para limpiar el buffer y asi no tener problemas con la introduccion de caracteres.
	return option;
}


void list(char *title[], char *list[], int elements)
{
	printf("\n\t");
	int higher_length = 0;
	int len = 0;
	int length;
    int pos_elements = 1;
    char char_title = '-';
    int length_menu = 10;
    int length_title;
	int text_elements;
	for (size_t i = 0; i < elements; i++)
	{
		len = strlen(list[i]);
		if ( len>higher_length )
			higher_length=len;
	}
	length_title = strlen(title[0]);
	if (length_title > higher_length)
	{

		text_elements = (int)((length_title - higher_length)/2) + length_menu;
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t p = 0; p < text_elements; p++)
				printf("%c",char_title);
			if ( i==0 )
				printf(" %s ",title[0]);
            else
				printf("\n");
		}
		for (size_t i = 0; i < elements; i++)
		{
			printf("\t");
            length = ((text_elements*2)+length_title) - strlen(list[i]) - 5;
            printf("%d.- %s\n",pos_elements,list[i]);
            pos_elements += 1;
            length = text_elements*2+2+length_title;
		}
        printf("\t");
		for (size_t i = 0; i < length; i++)
			printf("%c",char_title);
		printf("\n");
	}
    else
	{
		text_elements = (int)((higher_length-length_title)/2) + length_menu;
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t p = 0; p < text_elements; p++)
				printf("%c",char_title);
			if (i==0)
				printf(" %s ",title[0]);
			else
				printf("\n");
		}
		for (size_t i = 0; i < elements; i++)
		{
			printf("\t");
            length = ((text_elements*2)+length_title+2) - strlen(list[i]) - 7;
            printf("%d.- %s\n",pos_elements,list[i]);
            pos_elements += 1;
            length = text_elements*2+length_title+2;
		}
        printf("\t");
		for (size_t i = 0; i < length; i++)
            printf("%c",char_title);
		printf("\n");
	}

}



void titles(char *text[], char form, int pos)
{
	printf("\n\n\t");
	for (size_t i = 0; i < strlen(text[pos])+16; i++)
		printf("%c",form);
	printf("\n\t");
	for (size_t i = 0; i < 5; i++)
		printf("%c",form);
    printf("   %s   ",text[pos]);
	for (size_t i = 0; i < 5; i++)
		printf("%c",form);
	printf("\n\t");
	for (size_t i = 0; i < strlen(text[pos])+16; i++)
		printf("%c",form);
}

/*void description_program(char *leyend[], int length_line, char form)
{
	//char form = '-'
	//length_line = 120
	leyend = leyend.split()
    length_text = length_line - 20
    total_chars = 0
    pos_leyend = 0
    pos_leyend2 = 0
    length_leyend = len(leyend)
    os.system("cls")
    print("\n\n\t\t ",end="")
    for i in range(0,length_line):
        print(form,end="",sep=(''))
    try:
        while True:
            print("\n\t\t --->     ",end="",sep=(''))
            for i in range(pos_leyend,length_leyend):
                length_string = len(leyend[i]) + total_chars
                if length_string > length_text:
                    pos_leyend = pos_leyend2
                    break;
                else:
                    print(leyend[i]," ",end="",sep=(''))
                    pos_leyend2 += 1
                    total_chars = length_string + 1

            res = length_text - total_chars
            for x in range(0,res+2):
                print(" ",end="",sep=(''))
            if pos_leyend2==length_leyend:
                raise
            total_chars = 0
            print("     <--- ",sep=(''),end="")
    except:
        print("     <--- ",sep=(''),end="")
        pass
    print("\n\t\t ",end="")
    for i in range(0,length_line):
        print("-",end="",sep=(''))
}*/


/*void main()
{
	char option;
	char *title[] = {"Purchase"};
	char *options[]={"Cola","Insert item","Delete item","Print cola","Exit"};
	option = menu(title,options,4);
}*/
