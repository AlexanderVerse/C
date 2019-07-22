////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Saca área y perímetro
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include <C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Methods_text.h>
#include<C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Mathematics_methods.h>
#define PI 3.1416
#define TRUE 1


////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
void circle(float radio);
void square(float side);
void rhombus(float d_larger, float d_lesser);
void trapezoid(float base_larger, float base_lesser, float height);
void parallegram(float base,float height, float side);
void rectangle(float base,float height);


///////////////////////////////////////////////
//////////           Code          ///////////
///////////////////////////////////////////////
int main()
{
	int option;
	char *letrero[] = {"\n\n\t>> Side(cm)"};
	char *aviso[] = {"...... Warning, just integers numbers ......"};
	char *title_menu[] = {"Area and perimeter"};
	char *options[]={"Circle","Square","Rhombus","Trapezoid","Parallegram","Rectangle","Exit"};
	float num;
	float num1, num2, num3, num4, num5;
	while(TRUE)
	{
		option = menu(title_menu,options,7);
		if(option==1)
		{
			titles(options,'-',0);
			printf("\n\n\t.......  Formulas  .......");
			printf("\n\t* Perimeter: (diameter)*PI where diameter is radio*2");
			printf("\n\t* Area: (radio^2)*PI");
			printf("\n\n\t>> Radio(cm): ");
			scanf("%f",&num);
			fflush(stdin);
			circle(num);
		}
		else if(option==2)
		{
			titles(options,'-',1);
			printf("\n\n\t    ---------");
			for (size_t i = 0; i < 4; i++)
			{
				printf("\n\t   |");
				for (size_t i = 0; i < 8; i++)
					printf(" ");
				printf(" | ");
			}
			printf("\n\t    ---------\n\t        ^\n\t        |\n\t       Side");
			printf("\n\n\t.......  Formulas  .......");
			printf("\n\t* Perimeter: side*4");
			printf("\n\t* Area: side*side");
			printf("\n\n\t>> Side(cm): ");
			scanf("%f",&num);
			fflush(stdin);
			//num = validation_int(letrero,0,0,aviso);
			square(num);
		}
		else if (option==3)
		{
			titles(options,'-',2);
			printf("\n\n\t     ^");
			printf("\n\t    /|\\");
			printf("\n\t   / | \\");
			printf("\n\t  /  |  \\");
			printf("\n\t <------- <- Lesser diagonal");
			printf("\n\t  \\  |  /");
			printf("\n\t   \\ | /");
			printf("\n\t    \\|/");
			printf("\n\t     ^");
			printf("\n\t     |");
			printf("\n\t     ----- Larger diagonal");
			printf("\n\n\t.......  Formulas  .......");
			printf("\n\t* Perimeter: side*4 \"where side=raiz((larger diagonal/2)^2 + (lesser digonal/2)^2)\"");
			printf("\n\t* Area: (larger diagonal * lesser diagonal)/2");
			printf("\n\n\t>> Larger diagonal(cm): ");
			scanf("%f",&num1);
			printf("\t>> Lesser diagonal(cm): ");
			scanf("%f",&num2);
			fflush(stdin);
			rhombus(num1, num2);
		}
		else if(option==4)
		{
			titles(options,'-',3);
			printf("\n\n\t          ");
			printf("\n\t          _________ <----Lesser base");
			printf("\n\t         /|        \\");
			printf("\n\t        / |         \\");
			printf("\n\t       /  |          \\");
			printf("\n\t      /   |           \\");
			printf("\n\t     /    |<---Height  \\");
			printf("\n\t    /_____|_____________\\");
			printf("\n\t               ^");
			printf("\n\t               |");
			printf("\n\t          Larger base");
			printf("\n\n\t.......  Formulas  .......");
			printf("\n\t* Perimeter: (side*2)+larger base+lesser base \"where side=raiz((larger base - lesser base)^2 + (height)^2)\"");
			printf("\n\t* Area: ((larger base + lesser_base)*height)/2");
			printf("\n\n\t>> Larger base(cm): ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("\t>> Lesser base(cm): ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("\t>> Height(cm): ");
			scanf("%f",&num3);
			fflush(stdin);
			trapezoid(num1,num2,num3);
		}
		else if(option==5)
		{
			titles(options,'-',4);
			printf("\n\n\t       ____________");
			printf("\n\t      /|          /");
			printf("\n\t     / |<-Height /");
			printf("\n\t    /  |        /");
			printf("\n\t   /   |       /<--- Side");
			printf("\n\t  /    |      /");
			printf("\n\t /     |     /");
			printf("\n\t/______|____/");
			printf("\n\t    ^");
			printf("\n\t    | ");
			printf("\n\t   Base");
			printf("\n\n\t.......  Formulas  .......");
			printf("\n\t* Perimeter: 2*(base+side)");
			printf("\n\t* Area: height*base");
			printf("\n\n\t>> Base(cm): ");
			scanf("%f",&num1);
			printf("\t>> Height(cm): ");
			scanf("%f",&num2);
			printf("\t>> Side(cm): ");
			scanf("%f",&num3);
			parallegram(num1, num2,num3);
		}
		else if(option==6)
		{
			titles(options,'-',5);
			printf("\n\n\t  ----------------");
			printf("\n\t  |              |");
			printf("\n\t  |              | ----> Height");
			printf("\n\t  |              |");
			printf("\n\t  |              |");
			printf("\n\t  ----------------");
			printf("\n\t          ^---- Base");
			printf("\n\n\t.......  Formulas  .......");
			printf("\n\t* Perimeter: (Height+Base)*2");
			printf("\n\t* Area: Base*Height");
			printf("\n\n\t>> Base: ");
			scanf("%f",&num1);
			printf("\t>> Heigth: ");
			scanf("%f",&num2);
			rectangle(num1,num2);
		}
		else
			break;
	}
	return 0;
}

void circle(float radio)
{
	if(radio<=0)
		printf("\n\t ¡VALUES INCORRECTS!");
	else
	{
		char *title[]={"Results"};
		titles(title,'*',0);
		printf("\n\t* Perimeter: %f cm",(radio*2)*PI);
		printf("\n\t* Area: %f cm^2",radio*radio*PI);
	}
}

void square(float side)
{
	if(side<=0)
		printf("\n\t ¡VALUES INCORRECTS!");
	else
	{
		char *title[]={"Results"};
		titles(title,'*',0);
		printf("\n\t* Perimeter: %f cm",side*4);
		printf("\n\t* Area: %f cm^2",side*side);
	}
}


void rhombus(float d_larger,float d_lesser)
{
	if(d_lesser>=d_larger)
		printf("\n\t ¡VALUES INCORRECTS!");
	else
	{
		char *title[]={"Results"};
		float area = (d_larger*d_lesser)/2;
		float perimeter = pitagoras(d_larger/2,d_lesser/2,1)*4;
		titles(title,'*',0);
		printf("\n\t* Perimeter: %f cm",perimeter);
		printf("\n\t* Area: %f cm^2",area);
	}
}


void trapezoid(float base_larger,float base_lesser,float height)
{
	if(base_lesser>=base_larger || height<=0 || base_lesser<=0 || base_larger<=0)
		printf("\n\t ¡VALUES INCORRECTS!");
	else
	{
		char *title[]={"Results"};
		float perimeter;
		perimeter=base_larger+base_lesser+pitagoras((base_larger-base_lesser)/2,height,1)*2;
		float area = ((base_larger+base_lesser)*height) /2;
		titles(title,'*',0);
		printf("\n\t* Perimeter: %f cm",perimeter);
		printf("\n\t* Area: %f cm^2",area);
	}
}

void parallegram(float base,float height, float side)
{
	if( base<=0 || height<=0 || side<=0)
		printf("\n\t ¡VALUES INCORRECTS!");
	else
	{
		char *title[]={"Results"};
		titles(title,'*',0);
		printf("\n\t* Perimiter: %f cm",2*(base+side));
		printf("\n\t* Area: %f cm^2",base*height);
	}
}

void rectangle(float base,float height)
{
	if (base<=0 || height<=0)
		printf("\n\t ¡VALUES INCORRECTS!");
	else
	{
		char *title[]={"Results"};
		titles(title,'*',0);
		printf("\n\t* Perimeter: %f cm",(base+height)*2);
		printf("\n\t* Area: %f cm^2",base*height);
	}
}
