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



///////////////////////////////////////////////
////////            Structs           /////////
///////////////////////////////////////////////
typedef struct Factura
{
	char nombre_producto[100];
	int numero_unidades;
	float precio_unidad;
	int codigo;
	float subtotal;
	char nombre_tien[100];
	char nom_empleado[100];
}factura;


///////////////////////////////////////////////
//////////            Code          ///////////
///////////////////////////////////////////////
int main()
{
	int productos;
	float suma;
	float iva, total;
	int numero1, numero2;
	int num=1;
	char nombre_tienda[20];
	char nombre_empleado[20];
	int pos=0;
	printf("\n\t>> Cuantos productos desea capturar: ");
	scanf("%i",&productos);
	// Aqui se crean tantas estructuras que queramos
	factura num_factura[productos];
	printf("\t>> Escriba el nombre de la tienda: ");
	fflush(stdin);
	gets(nombre_tienda);
	printf("\t>> Escriba el nombre del vendedor: ");
	fflush(stdin);
	gets(nombre_empleado);
	while(num<=productos)
	{
		printf("\n\t>> Cual es el nombre del producto %i: ",num);
		fflush(stdin);
		gets(num_factura[pos].nombre_producto);
		printf("\t>> Cuantas unidades pedira: ");
		scanf("%d",&num_factura[pos].numero_unidades);
		printf("\t>> Deme el precio de una unidad: ");
		scanf("%f",&num_factura[pos].precio_unidad);
		printf("\t>> Deme el codigo de el producto: ");
		scanf("%i",&num_factura[pos].codigo);
		num_factura[pos].subtotal=num_factura[pos].numero_unidades*num_factura[pos].precio_unidad;
		suma=suma+num_factura[pos].subtotal;
		pos=pos+1;
		num=num+1;
	}
	iva=suma*.16;
	total=iva+suma;
	system("cls");
	printf("\n \t \t FACTURA\n");
	printf("\t* Nombre de la tienda: \"%s\"\n",nombre_tienda);
	printf("\t* Vendedor: %s \n",nombre_empleado);
	printf("Producto \t    Precio por unidad \t     Unidades \t     codigo \t   Total por unidades\n");
	for(int i=0; i<productos; i++)
	{
		printf("%s \t \t %f \t\t  %i  \t\t  %i  \t\t %f \n",num_factura[i].nombre_producto,num_factura[i].precio_unidad,num_factura[i].numero_unidades,num_factura[i].codigo,num_factura[i].subtotal);
	}
	printf("\t* Subtotal: %f\n",suma);
	printf("\t* IVA: %f\n",iva);
	printf("\t* Total: %f\n",total);
	printf("Para quejas y reclamos vaya con su mam� :) xD");
}
