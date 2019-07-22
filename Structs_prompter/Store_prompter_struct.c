////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Factura
{
	char nombre_producto[20];
	int numero_unidades;
	float precio_unidad;
	int codigo;
	float subtotal;
}factura;


int main()
{
	factura *prompter;
	char nombre_tien[100];
	char nom_empleado[100];
	int cant_products;
	float iva, total, suma=0;
	int longi;
	printf("\n\t----------TIENDA----------\n");
	printf("Cuantos productos desea capturar: ");
	scanf("%i",&cant_products);
	factura num_factura[cant_products];
	prompter=&num_factura[0];
	printf("Escriba el nombre de la tienda: ");
	fflush(stdin);
	gets(nombre_tien);
	printf("Escriba el nombre del vendedor: ");
	fflush(stdin);
	gets(nom_empleado);
	for(int i=0; i<cant_products; i++)
	{
		printf("\n\n\t----------> Producto %i <----------",i+1);
		printf("\n\t>> Name: ");
		fflush(stdin);
		gets((prompter+i)->nombre_producto);
		printf("\t>> Units : ");
		scanf("%d",&(prompter+i)->numero_unidades);
		printf("\t>> Price : ");
		scanf("%f",&(prompter+i)->precio_unidad);
		printf("\t>> Code : ");
		scanf("%i",&(prompter+i)->codigo);
		(prompter+i)->subtotal=(prompter+i)->numero_unidades*(prompter+i)->precio_unidad;
		suma+=(prompter+i)->subtotal;
	}
	iva=suma*.16;
	total=suma+iva;
	printf("\n \t \t ********************FACTURA********************\n");
	printf("\n------->Nombre de la tienda: \"%s\"\n",nombre_tien);
	printf("\n------->Vendedor: %s \n\n\n",nom_empleado);
	printf("_________________________________________________________________________________________________________\n");
	printf("|Producto                 Precio por unidad   Unidades   Codigo   Total por unidades\n");
	for(int i=0; i<cant_products; i++)
	{
		longi=strlen((prompter+i)->nombre_producto);
		printf("| ");
		printf("%s",(prompter+i)->nombre_producto);
		for (size_t i = 1; i < (25-longi); i++)
			printf(" ");

		printf("%f               %i       %i\t\t%f \n",(prompter+i)->precio_unidad,(prompter+i)->numero_unidades,(prompter+i)->codigo,(prompter+i)->subtotal);
	}
	printf("\n\n\nSubtotal: %f\n",suma);
	printf("IVA: %f\n",iva);
	printf("Total: %f\n",total);
	printf("Para quejas y reclamos vaya con su mam� :) xD");
}
