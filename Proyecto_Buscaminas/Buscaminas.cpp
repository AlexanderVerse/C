#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int posicionCasillASubindices(int *i/*Reglon*/, int *j/*Columna*/, int posCasilla, int  dim){
	if((posCasilla<=(dim*dim))&&(posCasilla>0)){  //encuentra los subindices de la representaci�n
		if(posCasilla%dim==0)              // matricial de la posicion de casilla(posCasilla)
			*j=dim-1;                      // y se los asigna a los enteros apuntados
		// por i y j
		else
			*j=posCasilla%dim-1;
		*i=(posCasilla-(*j)-1)/dim;
		return 1;   //La posici�n de casilla a convertir est� en la cuadricula de juego
	}
	else
								 return 0;   //La posici�n de casilla no est� en la cuadr�cula
}


void colocaMinas(int cuadriculaDJuego[][10], int nuMinas, int dim){
	int i,j,k;
	int esMinaValida;
	int posMina;
	for(i=0;i<dim;i++){
		esMinaValida=0;        //Supone que la posici�n de la casilla tiene mina
		srand(time(NULL));
		while(esMinaValida==0){//Mientras la casilla en la posici�n (minPos) tenga una mina
			posMina=rand()% (dim*dim)+1;  //Genera una posici�n de mina entre 1 y dim*dim
			posicionCasillASubindices(&j,&k,posMina,dim); //Obtiene los subindices de matriz de la posicion
			if(cuadriculaDJuego[j][k]==0){ //Si la cuadricula en la posici�n no tiene mina
				cuadriculaDJuego[j][k]=9;  //  asignale mina
				esMinaValida=1;            //La posici�n de la casilla ahora tiene mina
			}
		}
	}
}
int cuentaMinas(int i, int j, int cuadriculaDJuego[][10],int dim){//Obtiene el numero de casillas
	int k,l;                                           //  adyacentes con minas para el elemento
	int contMinas=0;                                   //  con renglon i  y columna j en la
	for(k=i-1;k<=i+1;k++)                          //  cuadricula de juego
		for(l=j-1;l<=j+1;l++)
		if((k>=0)&&(k<dim)&&(l>=0)&&(l<dim))//Si k es un renglon y l una columna v�lida
		if(cuadriculaDJuego[k][l]==9)     //Si en el renglon k y columna l hay mina
		contMinas++;				  //  incrementa en uno el n�mero de minas
	return contMinas;
}

void asignaValoresDCasillas(int cuadriculaDJuego[][10],int dim){  //Asigna a cada casilla si esta
	int i,j;													//  no tiene minas el n�mero
	for(i=0;i<dim;i++)											//  de minas adyacentes
		for(j=0;j<dim;j++)
		if(cuadriculaDJuego[i][j]!=9)
		cuadriculaDJuego[i][j]=cuentaMinas(i,j,cuadriculaDJuego,dim);
}

void inicializaCuadriculaDJuego(int cuadriculaDJuego[][10], int dim, int nuMinas){//Inicializa la cuadricula
	int i,j;                                              //  de juego
	for(i=0;i<dim;i++)
		for(j=0;j<dim;j++)
		cuadriculaDJuego[i][j]=0;
		colocaMinas(cuadriculaDJuego,nuMinas,dim);
		asignaValoresDCasillas(cuadriculaDJuego,dim);
}

void inicializaCuadriculaDJuegoVisible(char cuadriculaDJuegoVisible[][10],int dim){
	int i,j;
	for(i=0;i<dim;i++)
		for(j=0;j<dim;j++)
		cuadriculaDJuegoVisible[i][j]=-2;
}

void muestraCuadricula(char cuadriculaDJuegoVisible[][10],int dim){//muestra la cuadricula en pantalla
	int i,j;
	printf("%c",201);       //Muestra
	for(i=0;i<dim*2;i++)  	//  el
		printf("%c",205);   //  margen
	printf("%c\n",187);		//  superior

	for(i=0;i<dim;i++){
		printf("%c",186);
		for(j=0;j<dim;j++)
			printf("%c ",cuadriculaDJuegoVisible[i][j]);
		printf("%c\n",186);
	}
	printf("%c",200);       //Muestra
	for(i=0;i<dim*2;i++)   	//  el
		printf("%c",205);   //  margen
	printf("%c\n",188);		//  inferior
}

void mostrarAreaDCasilla(int i, int j,char cuadriculaDJuegoVisible[][10],int cuadriculaDJuego[][10],int dim, int *casillasMostradas){
	int k,l;                      //Es usada en el caso de mostrar una casilla con cero
	for(k=i-1;k<=i+1;k++)          //Para la casilla central y casillas adyacentes
		for(l=j-1;l<=j+1;l++)      //  iguales a cero muestra el contenido de sus casillas adyacentes
		if((k>=0)&&(k<dim)&&(l>=0)&&(l<dim)){    //verifica que trabajemos con casillas dentro de la cuadricula de juego
		if(cuadriculaDJuegoVisible[k][l]==-2){  //Si la casilla est� en estado "no mostrada"
			if(cuadriculaDJuego[k][l]==0){     //Si la casilla no tine minas adyacentes
				cuadriculaDJuegoVisible[k][l]='0';  // cambia su estado a mostrada
				(*casillasMostradas)++;
				mostrarAreaDCasilla(k,l,cuadriculaDJuegoVisible,cuadriculaDJuego,dim,casillasMostradas);  //Explora sus minas adyacentes
			}
			else if(cuadriculaDJuegoVisible[k][l]!=9){
				cuadriculaDJuegoVisible[k][l]=cuadriculaDJuego[k][l]+48;  //Si no es mina cambia su estado a mostrada
				(*casillasMostradas)++;
			}
		}
	}
}



int muestraCasilla(int posCasilla,char cuadriculaDJuegoVisible[][10],int cuadriculaDJuego[][10],int dim,int *casillasMostradas){
	int i,j;
	if(posicionCasillASubindices(&i,&j,posCasilla,dim)){   //Si la posici�n de casilla est� en la cuadricula de juego
		if(cuadriculaDJuegoVisible[i][j]==-2){     //Si la casilla est� en estado "no mostrada"
			if(cuadriculaDJuego[i][j]==0){          //Si la casilla no tiene minas adyacentes
				cuadriculaDJuegoVisible[i][j]=48;   //  cambia su estado a mostrada
				(*casillasMostradas)++;
				mostrarAreaDCasilla(i,j,cuadriculaDJuegoVisible,cuadriculaDJuego,dim,casillasMostradas); //Explora sus minas adyacentes

			}
			else if(cuadriculaDJuego[i][j]==9){
				cuadriculaDJuegoVisible[i][j]='M';
				return 3;			//La mina se ha activado �estas perdido!
			}
			else{
				cuadriculaDJuegoVisible[i][j]=cuadriculaDJuego[i][j]+48;
				(*casillasMostradas)++;
			}
			return 1;               //La casilla se ha mostrado
		}
		else
			return 0;               //La casilla ya est� mostrada
	}
	else
								 return 2;                   //La casilla es inv�lida
}

void MarcarBanderas (int posCasilla, char cuadriculaDJuegoVisible[][10], int dim)
{
	int i,j;
	if(posicionCasillASubindices(&i,&j,posCasilla,dim)) //Si la casilla existe
	{
		if(cuadriculaDJuegoVisible[i][j]==-2)
		{
			cuadriculaDJuegoVisible[i][j]=-12;
		}
		else if (cuadriculaDJuegoVisible[i][j]==-12)
		{
			cuadriculaDJuegoVisible[i][j]=-2;
		}
		if((cuadriculaDJuegoVisible[i][j]!=-12)&&(cuadriculaDJuegoVisible[i][j]!=-2))
		{
			printf ("Casilla ya mostrada\n");
			system ("pause");
		}
	}
	else
	{
		printf ("Casilla no existe\n");
		system ("pause");
	}
}

void detonaMinas(int cuadriculaDJuego[][10],char cuadriculaDJuegoVisible[][10],int dim){
	int i,j;
	for(i=0;i<dim;i++)
		for(j=0;j<dim;j++)
		if(cuadriculaDJuego[i][j]==9)
		cuadriculaDJuegoVisible[i][j]='M';
}
int opcion()
{
	int op2;
	printf("�Que desea hacer?\n");
	printf("1.-Voltear casilla.\n");
	printf("2.-Marcar/Desmarcar Bandera.\n");
	scanf("%d",&op2);
	return op2;
}

int menu()
{
	int op;
	system("cls");
	printf("\tBienvenido a buscaminas\t\n");
	printf("Eliga una dificultad:\n");
	printf("1.-Principiante (5x5)\n");
	printf("2.-Intermedio (7x7)\n");
	printf("3.-Avanzado(10x10)\n");
	scanf("%d",&op);
	return op;
}

int ActivarBandera ()
{
	int posM;
	printf("�Qu� casilla quieres marcar/desmarcar?: ");
	scanf("%d",&posM);
	return posM;
}

int ActivarCasilla ()
{
	int posM;
	printf("�Qu� casilla quieres activar?: ");
	scanf("%d",&posM);
	return posM;
}

void CasillaYaMostrada ()
{
	printf("La casilla ya est� mostrada o marcada\n");
	system("pause");
}

void error()
{
	printf("Error: Opci�n inv�lida");
	system ("pause");
}

int Victoria()
{
	int estadoJuego;
	estadoJuego=4;
	printf("Felicidades has ganado %c\n",1);
	system("pause");
	return estadoJuego;
}

void Invalido()
{
	printf("La casilla es inv�lida\n");
	system("pause");
}

void Derrota ()
{
	printf("Has perdido las minas han estallado\n");
	system("pause");
}

int main(){
	int i;
	int numDMinas;
	int estadoJuego;
	int posM,casillasMostradas;
	char j=0;
	int k;
	int dim;               //Dimensi�n de la cuadr�cula de Juego
	int cuadriculaDJuego[10][10];	 //Cuadr�cula de juego
	char cuadriculaDJuegoVisible[10][10];
	int op;
	int op2;

	do {
		op=menu();
		if (op>=1&&op<=3)
		{
			switch (op)
			{
			case 1:
				numDMinas=5;
				inicializaCuadriculaDJuego(cuadriculaDJuego,5/*Aqu� va la variable "DIM" que define el tablero */,numDMinas);
				inicializaCuadriculaDJuegoVisible(cuadriculaDJuegoVisible,5);
				casillasMostradas=0;
				do{
					muestraCuadricula(cuadriculaDJuegoVisible,5);
					op2=opcion();
					switch (op2)
					{
					case 1:
						posM=ActivarCasilla();
						estadoJuego=muestraCasilla(posM,cuadriculaDJuegoVisible,cuadriculaDJuego,5,&casillasMostradas);
						switch(estadoJuego){
						case 0:
							CasillaYaMostrada();
							break;
						case 1:
							if(casillasMostradas==5*5-numDMinas){
								estadoJuego=Victoria();
							}
							break;
						case 2:
							Invalido();
							break;
						case 3:
							system("cls");
							detonaMinas(cuadriculaDJuego,cuadriculaDJuegoVisible,5);
							muestraCuadricula(cuadriculaDJuegoVisible,5);
							Derrota();
							break;
						}
						system("cls");
						break;
					case 2:
						posM=ActivarBandera();
						MarcarBanderas(posM,cuadriculaDJuegoVisible,5);
						muestraCuadricula(cuadriculaDJuegoVisible,5);
						system("cls");
						break;
					}
				}while((estadoJuego!=3)&&(estadoJuego!=4));
				break;
			case 2:
				numDMinas=7;
				inicializaCuadriculaDJuego(cuadriculaDJuego,7/*Aqu� va la variable "DIM" que define el tablero */,numDMinas);
				/*
				for(i=0;i<7;i++){
					for(k=0;k<7;k++)
						printf("%d ",cuadriculaDJuego[i][k]);   //Esta parte imprime la solucion del buscaminas
					printf("\n");
				}
				*/
				inicializaCuadriculaDJuegoVisible(cuadriculaDJuegoVisible,7);
				casillasMostradas=0;
				do{
					muestraCuadricula(cuadriculaDJuegoVisible,7);
					op2=opcion();
					switch (op2)
					{
					case 1:
						posM=ActivarCasilla();
						estadoJuego=muestraCasilla(posM,cuadriculaDJuegoVisible,cuadriculaDJuego,7,&casillasMostradas);
						switch(estadoJuego){
						case 0:
							CasillaYaMostrada();
							break;
						case 1:
							if(casillasMostradas==7*7-numDMinas){
								estadoJuego=Victoria();
							}
							break;
						case 2:
							Invalido();
							break;
						case 3:
							system("cls");
							detonaMinas(cuadriculaDJuego,cuadriculaDJuegoVisible,7);
							muestraCuadricula(cuadriculaDJuegoVisible,7);
							Derrota();
							break;
						}
						system("cls");
						break;
					case 2:
						posM=ActivarBandera();
						MarcarBanderas(posM,cuadriculaDJuegoVisible,7);
						muestraCuadricula(cuadriculaDJuegoVisible,7);
						system("cls");
						break;
					}
				}while((estadoJuego!=3)&&(estadoJuego!=4));
				break;
			case 3:
				numDMinas=10;
				inicializaCuadriculaDJuego(cuadriculaDJuego,10/*Aqu� va la variable "DIM" que define el tablero */,numDMinas);
				/*
				for(i=0;i<10;i++){
					for(k=0;k<10;k++)
						printf("%d ",cuadriculaDJuego[i][k]);        //Esta parte imprime la solucion del buscaminas
					printf("\n");
				}
				*/
				inicializaCuadriculaDJuegoVisible(cuadriculaDJuegoVisible,10);
				casillasMostradas=0;
				do{
					muestraCuadricula(cuadriculaDJuegoVisible,10);
					op2=opcion();
					switch (op2)
					{
					case 1:
						posM=ActivarCasilla();
						estadoJuego=muestraCasilla(posM,cuadriculaDJuegoVisible,cuadriculaDJuego,10,&casillasMostradas);
						switch(estadoJuego){
						case 0:
							CasillaYaMostrada();
							break;
						case 1:
							if(casillasMostradas==10*10-numDMinas){
								estadoJuego=Victoria();
							}
							break;
						case 2:
							Invalido();
							break;
						case 3:
							system("cls");
							detonaMinas(cuadriculaDJuego,cuadriculaDJuegoVisible,10);
							muestraCuadricula(cuadriculaDJuegoVisible,10);
							Derrota();
							break;
						}
						system("cls");
						break;
					case 2:
						posM=ActivarBandera();
						MarcarBanderas(posM,cuadriculaDJuegoVisible,10);
						muestraCuadricula(cuadriculaDJuegoVisible,10);
						system("cls");
						break;
					}
				}while((estadoJuego!=3)&&(estadoJuego!=4));
				break;
			}
		}
		else
		{
			error();
		}
	}while (op<1||op>3);
	return 0;
}
