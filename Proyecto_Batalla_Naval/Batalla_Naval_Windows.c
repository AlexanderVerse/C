#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void letrero(int nada);
int posicion1_jugador1, posicion2_jugador1;
int posicion1_jugador2, posicion2_jugador2;
int MatA[10][10]={0},j,i,posi1,posi2,nbar=1,tamanio,arba;
int puntos1=0,MatB[10][10]={0},puntos2=0, nada;
int x,y,num;
char opcion,lugar;
//funciones para el tablero del jugador 1
int tablero_1(int j, int i)
{
printf("Tablero Jugador 1\n" );
for(i=0;i<=9;i++)
{
    for(j=0;j<=9;j++)
    printf("%10d (%d,%d)",MatA[i][j],i,j);
    printf("\n");
}
}
int Ale_1_3(int nbar, int x, int y)
{
    printf("Aleatoria\n");
        {
     m:printf("Ubicacion barco %d \n",nbar);
   srand ( time(NULL) );
    x= rand() % 10;
    y= rand() % 10;
     printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if(x==9 && y>7)
             {
                  srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                {
                  if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                        MatA[x][y]=3;
                        MatA[x-1][y]=3;
                        MatA[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }


                }
                if(num==1)//izquierda
        {
      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                        MatA[x][y]=3;
                        MatA[x][y-1]=3;
                        MatA[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
    }
      }
             if(x==9 && y<2)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                if(num==0)//arriba
                {
         if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
        MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                }
                if(num==2)//derecha
                {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                }
                }

             if(x==9 && y>=2 && y<=7)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                     if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x][y-2]==0 )
                      {
       MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                     if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {

        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//izquierda
                  {
                     if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                }

             if(x==0 && y>7)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                     if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//izquierda
                  {
                     if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x==0 && y<2)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                     if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//derecha
                  {
                    if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {  MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x==0 && y>=2 && y<=7)
             {
                   srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                    if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                             MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//derecha
                  {
                    if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==2)//izquierda
                  {
                    if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }

              if(x==1 && y>7)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                   if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }

             }
             if(x==1 && y<2)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                     if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)
                  {
                   if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }

             }
             if(x==1 && y>=2 && y<=7)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                     if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                    if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//izquierda
                  {
                     if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
              if(x==8 && y>7)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                    if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//izquierda
                  {
                    if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x==8 && y<2)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                            MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                   if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                             MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }

             }
             if(x==8 && y>=2 && y<=7)
             {
                  srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)
                  {
                   if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)
                  {
                    if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)
                  {
                     if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
            if(x>=2 && x<=7 && y<2)
             {
                  srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                       if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                     if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==2)//abajo
                  {
                     if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x>=2 && x<=7 && y>=2 &&y<=7)
             {
                 srand ( time(NULL) );
                  num= rand() % 4;
                  if(num==0)//arriba
                  {
                    if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//abajo
                  {
                      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==3)//derecha
                  {
                     if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
             }
             if(x>=2 && x<=7 && y>7)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                     if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//izquierda
                  {
                    if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//abajo
                  {
                     if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
             }
}
return nbar;
}

int Def_1_3(int nbar, int x, int y)
{
printf("Definida\n");
        {
           y: printf("De la posicion del barco num %d x,y\n",nbar);
            scanf("%d %d", &x, &y);
             printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if(x==9 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                        MatA[x][y]=3;
                        MatA[x-1][y]=3;
                        MatA[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                        MatA[x][y]=3;
                        MatA[x][y-1]=3;
                        MatA[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
        MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }
                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                       if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                       if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x][y-2]==0 )
                      {
       MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {

        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //:::::
             if(x==0 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {  MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                             MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }

             //::::: ya esta la fila 9 y 0
              if(x==1 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 1
              if(x==8 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                            MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                             MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 8
            if(x>=2 && x<=7 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                  printf("(c)Hacia abajo \n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                          MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                      case 'c': printf("Hacia abajo \n");
                    {
                      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>=2 && x<=7 && y>=2 &&y<=7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                printf("(c)Hacia abajo \n");
                printf("(d)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                       MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {
                      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                     case 'd': printf("Hacia la derecha \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x][y+1]=3;
        MatA[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>=2 && x<=7 && y>7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                printf("(c)Hacia abajo\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 )
                      {
                         MatA[x][y]=3;
        MatA[x-1][y]=3;
        MatA[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;

                    case 'b': printf("Hacia izquierda \n");
                    {
                      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 )
                      {
                        MatA[x][y]=3;
        MatA[x][y-1]=3;
        MatA[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                     case 'c': printf("Hacia abajo \n");
                    {
                      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 )
                      {
        MatA[x][y]=3;
        MatA[x+1][y]=3;
        MatA[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
        }//case b definida
return nbar;
}
int Ale_1_5(int nbar, int x, int y)
{
    printf("Aleatoria\n");
        {
     z:printf("Ubicacion barco %d \n",nbar);
    srand ( time(NULL) );
    x= rand() % 10;
    y= rand() % 10;
     printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );


             if(x==9 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                         MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==9 && y<5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
                     if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==1)//derecha
                  {
       if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
    }
             }
             if(x==9 && y==5)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
     if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
                       if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==2)//izquierda
                  {
                    if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==0 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                    if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//izquierda
                  {
                   if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
    }
             }
             if(x==0 && y<5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                    if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                   {
                    if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                   }
             }
             if(x==0 && y==5)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                    if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
                   if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==2)
                  {
                   if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
              if(x==1 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                    if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==1 && y<5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==1 && y==5)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                    if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==2)//izquierda
                  {
                    if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                   }
              if(num==1)//derecha
              {
                   if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

              }
             }

              if(x==8 && y>5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  { if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
      }
              if(num==1)//izquierda
              {
                if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
              }
             }
             if(x==8 && y<5)
             {
                  srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
                    if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
                     if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==8 && y==5)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }  }
              if(num==1)//derecha
              {
                if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
              }
              if(num==2)//izquierda
              {
               if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
              }
             }
            if(x>=2 && x<5 && y<4)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//derecha
                  {
                     if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                    if(num==1)//abajo
                          {
          if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
             }
             if(x>5 && x<=7 &&y<4)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                     {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                    if(num==1)//derecha
                         {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }

             }
             if(x>=2 && x<5 && y>4)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)
   {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                  if(num==1)
                      {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
             }
             if(x>5 && x<=7 &&y>4)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
               {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                  if(num==1)
                    {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
             }

             if(x==5 &&y<4)
             {
                    srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                    if(num==1)//derecha
                         {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                    if(num==2)//abajo
                         {
                          if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
       }
             }
              if(x==5 && y>4)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                     {
      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                    if(num==1)//izquierda
                         {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                        if(num==2)//abajo
                             {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }

             }
             if(x==5 && y==4)
             {
                 srand ( time(NULL) );
                  num= rand() % 4;
                  if(num==0)//arriba
                      {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                    if(num==1)//derecha
                          {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }                     }
                        if(num==2)//abajo
                              {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                    if(num==3)//izquierda
                         {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
}

}
return nbar;
}
int Def_1_5(int nbar, int x, int y)
{
printf("Definida\n");
        {
            l:printf("De la posicion del barco num %d x,y\n",nbar);
            scanf("%d %d", &x, &y);
             printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if(x==9 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                         MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {

       if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y==5)//no se
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                       if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //:::::
             if(x==0 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
 if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
         if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
      if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y==5)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
       if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }

             //::::: ya esta la fila 9 y 0
              if(x==1 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y==5)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 1
              if(x==8 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y==5)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 8
            if(x>=2 && x<5 && y<4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia la derecha\n");
                printf("(b)Hacia abajo \n");
                scanf(" %c",&lugar);
                switch(lugar)
                {

                      case 'a': printf("Hacia la derecha \n");
                    {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia abajo \n");
                    {
       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>5 && x<=7 &&y<4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la derecha \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if(x>=2 && x<5 && y>4)///esta mal
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia la izquierda\n");
                printf("(b)Hacia abajo \n");
                scanf(" %c",&lugar);
                switch(lugar)
                {

                      case 'a': printf("Hacia la izquierda \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia abajo \n");
                    {
       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>5 && x<=7 &&y>4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la izquierda \n");
                    {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;

                    default: printf("No se encontro opcion disponible.\n");
                }
             }

             if(x==5 &&y<4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia abajo\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
         if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la derecha \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {
         if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
              if(x==5 && y>4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                printf("(c)Hacia abajo\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
          if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la izquierda \n");
                    {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if(x==5 && y==4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia abajo\n");
                printf("(d)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
         if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 )
                      {
                       MatA[x][y]=5;
        MatA[x-1][y]=5;
        MatA[x-2][y]=5;
        MatA[x-3][y]=5;
        MatA[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la derecha \n");
                    {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x][y+1]=5;
        MatA[x][y+2]=5;
        MatA[x][y+3]=5;
        MatA[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {

 if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 )
                      {
                      MatA[x][y]=5;
        MatA[x+1][y]=5;
        MatA[x+2][y]=5;
        MatA[x+3][y]=5;
        MatA[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                     case 'd': printf("Hacia la izquierda \n");
                    {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 )
                      { MatA[x][y]=5;
        MatA[x][y-1]=5;
        MatA[x][y-2]=5;
        MatA[x][y-3]=5;
        MatA[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
        }//case b definida
return nbar;
}
int Ale_1_7(int nbar, int x, int y)
{
printf("Aleatoria\n");
        {
     p:printf("Ubicacion barco %d \n",nbar);
    srand ( time(NULL) );
    x= rand() % 10;
    y= rand() % 10;
     printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );
     if((x==9 || x==8 ||x==7)  && y>=0 && y<=3)
             {
                  srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                     {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 && MatA[x-5][y]==0 && MatA[x-6][y]==0)
                      {
        MatA[x][y]=7;
        MatA[x-1][y]=7;
        MatA[x-2][y]=7;
        MatA[x-3][y]=7;
        MatA[x-4][y]=7;
        MatA[x-5][y]=7;
        MatA[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//derecha
                          {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 && MatA[x][y+5]==0 && MatA[x][y+6]==0)
                      {
       MatA[x][y]=7;
        MatA[x][y+1]=7;
        MatA[x][y+2]=7;
        MatA[x][y+3]=7;
        MatA[x][y+4]=7;
        MatA[x][y+5]=7;
        MatA[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x==9 || x==8 ||x==7) && (y==4 || y==5))
             {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 && MatA[x-5][y]==0 && MatA[x-6][y]==0)
                      {
        MatA[x][y]=7;
        MatA[x-1][y]=7;
        MatA[x-2][y]=7;
        MatA[x-3][y]=7;
        MatA[x-4][y]=7;
        MatA[x-5][y]=7;
        MatA[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
             if((x==9 || x==8 ||x==7) && y<=9 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                     {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 && MatA[x-5][y]==0 && MatA[x-6][y]==0)
                      {
        MatA[x][y]=7;
        MatA[x-1][y]=7;
        MatA[x-2][y]=7;
        MatA[x-3][y]=7;
        MatA[x-4][y]=7;
        MatA[x-5][y]=7;
        MatA[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//izquierda
                          {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 && MatA[x][y-5]==0 && MatA[x][y-6]==0)
                      {
        MatA[x][y]=7;
        MatA[x][y-1]=7;
        MatA[x][y-2]=7;
        MatA[x][y-3]=7;
        MatA[x][y-4]=7;
        MatA[x][y-5]=7;
        MatA[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x==0 || x==1 ||x==2) && y>=0 && y<=3)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                    {
       if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 && MatA[x+5][y]==0 && MatA[x+6][y]==0)
                      {
         MatA[x][y]=7;
        MatA[x+1][y]=7;
        MatA[x+2][y]=7;
        MatA[x+3][y]=7;
        MatA[x+4][y]=7;
        MatA[x+5][y]=7;
        MatA[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//derecha
                         {
       if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 && MatA[x][y+5]==0 && MatA[x][y+6]==0)
                      {
       MatA[x][y]=7;
        MatA[x][y+1]=7;
        MatA[x][y+2]=7;
        MatA[x][y+3]=7;
        MatA[x][y+4]=7;
        MatA[x][y+5]=7;
        MatA[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x==0 || x==1 ||x==2) && (y==4 || y==5))
             {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 && MatA[x+5][y]==0 && MatA[x+6][y]==0)
                      {
         MatA[x][y]=7;
        MatA[x+1][y]=7;
        MatA[x+2][y]=7;
        MatA[x+3][y]=7;
        MatA[x+4][y]=7;
        MatA[x+5][y]=7;
        MatA[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
             if((x==0 || x==1 ||x==2) && y<=9 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                     {
         if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 && MatA[x+5][y]==0 && MatA[x+6][y]==0)
                      {
         MatA[x][y]=7;
        MatA[x+1][y]=7;
        MatA[x+2][y]=7;
        MatA[x+3][y]=7;
        MatA[x+4][y]=7;
        MatA[x+5][y]=7;
        MatA[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//izquierda
                          {
      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 && MatA[x][y-5]==0 && MatA[x][y-6]==0)
                      {
        MatA[x][y]=7;
        MatA[x][y-1]=7;
        MatA[x][y-2]=7;
        MatA[x][y-3]=7;
        MatA[x][y-4]=7;
        MatA[x][y-5]=7;
        MatA[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x>=3 && x<=6) && y>=0 && y<=3)
             {
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 && MatA[x][y+5]==0 && MatA[x][y+6]==0)
                      {
       MatA[x][y]=7;
        MatA[x][y+1]=7;
        MatA[x][y+2]=7;
        MatA[x][y+3]=7;
        MatA[x][y+4]=7;
        MatA[x][y+5]=7;
        MatA[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
             if((x>=3 && x<=6) && (y==4 || y==5))
             {
              printf("No se puede poner un barco  de 7 posiciones\n");
              printf("De una nueva coordenada\n");
           goto p;

             }
             if((x>=3 && x<=6) && y<=9 && y>5)
             {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 && MatA[x][y-5]==0 && MatA[x][y-6]==0)
                      {
        MatA[x][y]=7;
        MatA[x][y-1]=7;
        MatA[x][y-2]=7;
        MatA[x][y-3]=7;
        MatA[x][y-4]=7;
        MatA[x][y-5]=7;
        MatA[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
}
return nbar;
}
int Def_1_7(int nbar, int x, int y)
{
printf("Definida\n");
        {
            b:printf("De la posicion del barco x,y\n");
            scanf("%d %d", &x, &y);
             printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if((x==9 || x==8 ||x==7)  && y>=0 && y<=3)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 && MatA[x-5][y]==0 && MatA[x-6][y]==0)
                      {
        MatA[x][y]=7;
        MatA[x-1][y]=7;
        MatA[x-2][y]=7;
        MatA[x-3][y]=7;
        MatA[x-4][y]=7;
        MatA[x-5][y]=7;
        MatA[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha\n");
                    {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 && MatA[x][y+5]==0 && MatA[x][y+6]==0)
                      {
       MatA[x][y]=7;
        MatA[x][y+1]=7;
        MatA[x][y+2]=7;
        MatA[x][y+3]=7;
        MatA[x][y+4]=7;
        MatA[x][y+5]=7;
        MatA[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }
             }
             if((x==9 || x==8 ||x==7) && (y==4 || y==5))
             {
              printf("Hacia arriba\n");
       if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 && MatA[x-5][y]==0 && MatA[x-6][y]==0)
                      {
        MatA[x][y]=7;
        MatA[x-1][y]=7;
        MatA[x-2][y]=7;
        MatA[x-3][y]=7;
        MatA[x-4][y]=7;
        MatA[x-5][y]=7;
        MatA[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
             }
             if((x==9 || x==8 ||x==7) && y<=9 && y>5)
             {
              printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
              printf("(b)Hacia la izquierda\n");
              scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatA[x][y]==0 && MatA[x-1][y]==0 && MatA[x-2][y]==0 && MatA[x-3][y]==0 && MatA[x-4][y]==0 && MatA[x-5][y]==0 && MatA[x-6][y]==0)
                      {
        MatA[x][y]=7;
        MatA[x-1][y]=7;
        MatA[x-2][y]=7;
        MatA[x-3][y]=7;
        MatA[x-4][y]=7;
        MatA[x-5][y]=7;
        MatA[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda\n");
                    {
      if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 && MatA[x][y-5]==0 && MatA[x][y-6]==0)
                      {
        MatA[x][y]=7;
        MatA[x][y-1]=7;
        MatA[x][y-2]=7;
        MatA[x][y-3]=7;
        MatA[x][y-4]=7;
        MatA[x][y-5]=7;
        MatA[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if((x==0 || x==1 ||x==2) && y>=0 && y<=3)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
      if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 && MatA[x+5][y]==0 && MatA[x+6][y]==0)
                      {
         MatA[x][y]=7;
        MatA[x+1][y]=7;
        MatA[x+2][y]=7;
        MatA[x+3][y]=7;
        MatA[x+4][y]=7;
        MatA[x+5][y]=7;
        MatA[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha\n");
                    {
         if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 && MatA[x][y+5]==0 && MatA[x][y+6]==0)
                      {
       MatA[x][y]=7;
        MatA[x][y+1]=7;
        MatA[x][y+2]=7;
        MatA[x][y+3]=7;
        MatA[x][y+4]=7;
        MatA[x][y+5]=7;
        MatA[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }
             }
             if((x==0 || x==1 ||x==2) && (y==4 || y==5))
             {
              printf("Hacia abajo\n");
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 && MatA[x+5][y]==0 && MatA[x+6][y]==0)
                      {
         MatA[x][y]=7;
        MatA[x+1][y]=7;
        MatA[x+2][y]=7;
        MatA[x+3][y]=7;
        MatA[x+4][y]=7;
        MatA[x+5][y]=7;
        MatA[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
             }
             if((x==0 || x==1 ||x==2) && y<=9 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
        if(MatA[x][y]==0 && MatA[x+1][y]==0 && MatA[x+2][y]==0 && MatA[x+3][y]==0 && MatA[x+4][y]==0 && MatA[x+5][y]==0 && MatA[x+6][y]==0)
                      {
         MatA[x][y]=7;
        MatA[x+1][y]=7;
        MatA[x+2][y]=7;
        MatA[x+3][y]=7;
        MatA[x+4][y]=7;
        MatA[x+5][y]=7;
        MatA[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda\n");
                    {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 && MatA[x][y-5]==0 && MatA[x][y-6]==0)
                      {
        MatA[x][y]=7;
        MatA[x][y-1]=7;
        MatA[x][y-2]=7;
        MatA[x][y-3]=7;
        MatA[x][y-4]=7;
        MatA[x][y-5]=7;
        MatA[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if((x>=3 && x<=6) && y>=0 && y<=3)
             {
               printf("Hacia la derecha\n");
        if(MatA[x][y]==0 && MatA[x][y+1]==0 && MatA[x][y+2]==0 && MatA[x][y+3]==0 && MatA[x][y+4]==0 && MatA[x][y+5]==0 && MatA[x][y+6]==0)
                      {
       MatA[x][y]=7;
        MatA[x][y+1]=7;
        MatA[x][y+2]=7;
        MatA[x][y+3]=7;
        MatA[x][y+4]=7;
        MatA[x][y+5]=7;
        MatA[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
             }
             if((x>=3 && x<=6) && (y==4 || y==5))
             {
              printf("No se puede poner un barco  de 7 posiciones\n");
              printf("De una nueva coordenada\n");
           goto b;

             }
             if((x>=3 && x<=6) && y<=9 && y>5)
             {
             printf("Hacia la izquierda\n");
                    {
       if(MatA[x][y]==0 && MatA[x][y-1]==0 && MatA[x][y-2]==0 && MatA[x][y-3]==0 && MatA[x][y-4]==0 && MatA[x][y-5]==0 && MatA[x][y-6]==0)
                      {
        MatA[x][y]=7;
        MatA[x][y-1]=7;
        MatA[x][y-2]=7;
        MatA[x][y-3]=7;
        MatA[x][y-4]=7;
        MatA[x][y-5]=7;
        MatA[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto b;
                      }
                    }
             }
                  }//case b definida
return nbar;
}
int p_tablero1(int j, int i)
{
     for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        printf("%10d (%d,%d)",MatA[i][j],i,j);
        printf("\n");
    }
}
int puntos_1(int puntos1)
{
      printf("\n\n\n \t\t\t\t\t\t >>>>>>>>>>>>>>>JUGADOR 1<<<<<<<<<<<<<<<\n");
      printf("\t\t\t\t\t >>>>>>>>>>>>>>>PUNTOS JUGADOR 1 =%d<<<<<<<<<<<<<<< \n",puntos1 );
}

//funciones que se pueden usar para ambos
int p_no()
{
printf("No se encontro opcion disponible.\n");
}
int opc_1()
{
        printf("(a)Ubicacion aleatoria\n");
        printf("(b)Ubicacion definida\n");
        scanf(" %c",&opcion);
    return opcion;
}
int tamanio_1(int nbar)
{
  	printf("De que tamanio desea el barco %d \n",nbar );
   printf("(3)Barco corto\n");
   printf("(5)Barco intermedio\n");
   printf("(7)Barco Largo\n");
   scanf(" %d",&tamanio);
   return tamanio;
}



//funciones para el tablero del jugador 2
int tablero_2(int j, int i)
{
 printf("Tablero Jugador 2\n" );
 nbar=1;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        printf("%10d (%d,%d)",MatB[i][j],i,j);
        printf("\n");
    }
return nbar;
}
int Ale_2_3(int nbar, int x, int y)
{
    printf("Aleatoria\n");
        {
     m:printf("Ubicacion barco %d \n",nbar);
   srand ( time(NULL) );
    x= rand() % 10;
    y= rand() % 10;
     printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if(x==9 && y>7)
             {
                  srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                {
                  if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                        MatB[x][y]=3;
                        MatB[x-1][y]=3;
                        MatB[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }


                }
                if(num==1)//izquierda
        {
      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                        MatB[x][y]=3;
                        MatB[x][y-1]=3;
                        MatB[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
    }
      }
             if(x==9 && y<2)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                if(num==0)//arriba
                {
         if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
        MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                }
                if(num==2)//derecha
                {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                }
                }

             if(x==9 && y>=2 && y<=7)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                     if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x][y-2]==0 )
                      {
       MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                     if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {

        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//izquierda
                  {
                     if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                }

             if(x==0 && y>7)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                     if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//izquierda
                  {
                     if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x==0 && y<2)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                     if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//derecha
                  {
                    if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {  MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x==0 && y>=2 && y<=7)
             {
                   srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                    if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                             MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//derecha
                  {
                    if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==2)//izquierda
                  {
                    if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }

              if(x==1 && y>7)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                   if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }

             }
             if(x==1 && y<2)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                     if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)
                  {
                   if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }

             }
             if(x==1 && y>=2 && y<=7)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                     if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                    if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//izquierda
                  {
                     if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
              if(x==8 && y>7)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                    if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//izquierda
                  {
                    if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x==8 && y<2)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                            MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                   if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                             MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }

             }
             if(x==8 && y>=2 && y<=7)
             {
                  srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)
                  {
                   if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)
                  {
                    if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)
                  {
                     if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
            if(x>=2 && x<=7 && y<2)
             {
                  srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                       if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//derecha
                  {
                     if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==2)//abajo
                  {
                     if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
             }
             if(x>=2 && x<=7 && y>=2 &&y<=7)
             {
                 srand ( time(NULL) );
                  num= rand() % 4;
                  if(num==0)//arriba
                  {
                    if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//abajo
                  {
                      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==3)//derecha
                  {
                     if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
             }
             if(x>=2 && x<=7 && y>7)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
                     if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==1)//izquierda
                  {
                    if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }
                  }
                  if(num==2)//abajo
                  {
                     if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto m;
                      }

                  }
             }
}
return nbar;
}

int Def_2_3(int nbar, int x, int y)
{
printf("Definida\n");
        {
           y: printf("De la posicion del barco num %d x,y\n",nbar);
            scanf("%d %d", &x, &y);
             printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if(x==9 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                        MatB[x][y]=3;
                        MatB[x-1][y]=3;
                        MatB[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                        MatB[x][y]=3;
                        MatB[x][y-1]=3;
                        MatB[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
        MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }
                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                       if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                       if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x][y-2]==0 )
                      {
       MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {

        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //:::::
             if(x==0 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {  MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                             MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }

             //::::: ya esta la fila 9 y 0
              if(x==1 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
                      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 1
              if(x==8 && y>7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                            MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                             MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y>=2 && y<=7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 8
            if(x>=2 && x<=7 && y<2)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                  printf("(c)Hacia abajo \n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                          MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                      case 'c': printf("Hacia abajo \n");
                    {
                      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>=2 && x<=7 && y>=2 &&y<=7)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                printf("(c)Hacia abajo \n");
                printf("(d)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                       MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {
                      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                     case 'd': printf("Hacia la derecha \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x][y+1]=3;
        MatB[x][y+2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>=2 && x<=7 && y>7)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                printf("(c)Hacia abajo\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 )
                      {
                         MatB[x][y]=3;
        MatB[x-1][y]=3;
        MatB[x-2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }


                    }
                    break;

                    case 'b': printf("Hacia izquierda \n");
                    {
                      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 )
                      {
                        MatB[x][y]=3;
        MatB[x][y-1]=3;
        MatB[x][y-2]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                     case 'c': printf("Hacia abajo \n");
                    {
                      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 )
                      {
        MatB[x][y]=3;
        MatB[x+1][y]=3;
        MatB[x+2][y]=3;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto y;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
        }//case b definida
return nbar;
}
int Ale_2_5(int nbar, int x, int y)
{
    printf("Aleatoria\n");
        {
     z:printf("Ubicacion barco %d \n",nbar);
    srand ( time(NULL) );
    x= rand() % 10;
    y= rand() % 10;
     printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );


             if(x==9 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                         MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==9 && y<5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
                     if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==1)//derecha
                  {
       if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
    }
             }
             if(x==9 && y==5)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {
     if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
                       if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==2)//izquierda
                  {
                    if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==0 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                    if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//izquierda
                  {
                   if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
    }
             }
             if(x==0 && y<5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                    if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                   {
                    if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                   }
             }
             if(x==0 && y==5)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                    if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
                   if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==2)
                  {
                   if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
              if(x==1 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                    if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==1)//izquierda
                  {
                     if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==1 && y<5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                  {
                       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==1 && y==5)
             {
                srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//abajo
                  {
                    if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                  }
                  if(num==2)//izquierda
                  {
                    if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                   }
              if(num==1)//derecha
              {
                   if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

              }
             }

              if(x==8 && y>5)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  { if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
      }
              if(num==1)//izquierda
              {
                if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
              }
             }
             if(x==8 && y<5)
             {
                  srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                  {
                    if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                  if(num==1)//derecha
                  {
                     if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
             }
             if(x==8 && y==5)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                  {if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }  }
              if(num==1)//derecha
              {
                if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
              }
              if(num==2)//izquierda
              {
               if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
              }
             }
            if(x>=2 && x<5 && y<4)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//derecha
                  {
                     if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                  }
                    if(num==1)//abajo
                          {
          if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
             }
             if(x>5 && x<=7 &&y<4)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                     {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                    if(num==1)//derecha
                         {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }

             }
             if(x>=2 && x<5 && y>4)
             {
                 srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)
   {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                  if(num==1)
                      {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
             }
             if(x>5 && x<=7 &&y>4)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
               {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                  if(num==1)
                    {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
             }

             if(x==5 &&y<4)
             {
                    srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                    if(num==1)//derecha
                         {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                    if(num==2)//abajo
                         {
                          if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
       }
             }
              if(x==5 && y>4)
             {
                 srand ( time(NULL) );
                  num= rand() % 3;
                  if(num==0)//arriba
                     {
      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                    if(num==1)//izquierda
                         {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                        if(num==2)//abajo
                             {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }

             }
             if(x==5 && y==4)
             {
                 srand ( time(NULL) );
                  num= rand() % 4;
                  if(num==0)//arriba
                      {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }

                    }
                    if(num==1)//derecha
                          {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }                     }
                        if(num==2)//abajo
                              {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
                    if(num==3)//izquierda
                         {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto z;
                      }
                    }
}

}
return nbar;
}
int Def_2_5(int nbar, int x, int y)
{
printf("Definida\n");
        {
            l:printf("De la posicion del barco num %d x,y\n",nbar);
            scanf("%d %d", &x, &y);
             printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if(x==9 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                      if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                         MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
                        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {

       if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==9 && y==5)//no se
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
                       if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //:::::
             if(x==0 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
 if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
         if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
      if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==0 && y==5)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
       if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }

             //::::: ya esta la fila 9 y 0
              if(x==1 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==1 && y==5)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 1
              if(x==8 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y<5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x==8 && y==5)
             {
                 printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia izquierda \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }

             }
             //::::: fila 8
            if(x>=2 && x<5 && y<4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia la derecha\n");
                printf("(b)Hacia abajo \n");
                scanf(" %c",&lugar);
                switch(lugar)
                {

                      case 'a': printf("Hacia la derecha \n");
                    {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia abajo \n");
                    {
       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>5 && x<=7 &&y<4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la derecha \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if(x>=2 && x<5 && y>4)///esta mal
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia la izquierda\n");
                printf("(b)Hacia abajo \n");
                scanf(" %c",&lugar);
                switch(lugar)
                {

                      case 'a': printf("Hacia la izquierda \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                      case 'b': printf("Hacia abajo \n");
                    {
       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }


             }
             if(x>5 && x<=7 &&y>4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la izquierda \n");
                    {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;

                    default: printf("No se encontro opcion disponible.\n");
                }
             }

             if(x==5 &&y<4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia abajo\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
         if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la derecha \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {
         if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
              if(x==5 && y>4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la izquierda\n");
                printf("(c)Hacia abajo\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
          if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la izquierda \n");
                    {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if(x==5 && y==4)
             {
                printf("Seleciona la posicion\n");
                printf("(a)Hacia arriba\n");
                printf("(b)Hacia la derecha\n");
                printf("(c)Hacia abajo\n");
                printf("(d)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
         if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 )
                      {
                       MatB[x][y]=5;
        MatB[x-1][y]=5;
        MatB[x-2][y]=5;
        MatB[x-3][y]=5;
        MatB[x-4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }

                    }
                    break;
                     case 'b': printf("Hacia la derecha \n");
                    {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x][y+1]=5;
        MatB[x][y+2]=5;
        MatB[x][y+3]=5;
        MatB[x][y+4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    case 'c': printf("Hacia abajo \n");
                    {

 if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 )
                      {
                      MatB[x][y]=5;
        MatB[x+1][y]=5;
        MatB[x+2][y]=5;
        MatB[x+3][y]=5;
        MatB[x+4][y]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                     case 'd': printf("Hacia la izquierda \n");
                    {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 )
                      { MatB[x][y]=5;
        MatB[x][y-1]=5;
        MatB[x][y-2]=5;
        MatB[x][y-3]=5;
        MatB[x][y-4]=5;
                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto l;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
        }//case b definida
return nbar;
}
int Ale_2_7(int nbar, int x, int y)
{
printf("Aleatoria\n");
        {
     p:printf("Ubicacion barco %d \n",nbar);
    srand ( time(NULL) );
    x= rand() % 10;
    y= rand() % 10;
     printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );
     if((x==9 || x==8 ||x==7)  && y>=0 && y<=3)
             {
                  srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                     {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 && MatB[x-5][y]==0 && MatB[x-6][y]==0)
                      {
        MatB[x][y]=7;
        MatB[x-1][y]=7;
        MatB[x-2][y]=7;
        MatB[x-3][y]=7;
        MatB[x-4][y]=7;
        MatB[x-5][y]=7;
        MatB[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//derecha
                          {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 && MatB[x][y+5]==0 && MatB[x][y+6]==0)
                      {
       MatB[x][y]=7;
        MatB[x][y+1]=7;
        MatB[x][y+2]=7;
        MatB[x][y+3]=7;
        MatB[x][y+4]=7;
        MatB[x][y+5]=7;
        MatB[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x==9 || x==8 ||x==7) && (y==4 || y==5))
             {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 && MatB[x-5][y]==0 && MatB[x-6][y]==0)
                      {
        MatB[x][y]=7;
        MatB[x-1][y]=7;
        MatB[x-2][y]=7;
        MatB[x-3][y]=7;
        MatB[x-4][y]=7;
        MatB[x-5][y]=7;
        MatB[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
             if((x==9 || x==8 ||x==7) && y<=9 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//arriba
                     {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 && MatB[x-5][y]==0 && MatB[x-6][y]==0)
                      {
        MatB[x][y]=7;
        MatB[x-1][y]=7;
        MatB[x-2][y]=7;
        MatB[x-3][y]=7;
        MatB[x-4][y]=7;
        MatB[x-5][y]=7;
        MatB[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//izquierda
                          {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 && MatB[x][y-5]==0 && MatB[x][y-6]==0)
                      {
        MatB[x][y]=7;
        MatB[x][y-1]=7;
        MatB[x][y-2]=7;
        MatB[x][y-3]=7;
        MatB[x][y-4]=7;
        MatB[x][y-5]=7;
        MatB[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x==0 || x==1 ||x==2) && y>=0 && y<=3)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                    {
       if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 && MatB[x+5][y]==0 && MatB[x+6][y]==0)
                      {
         MatB[x][y]=7;
        MatB[x+1][y]=7;
        MatB[x+2][y]=7;
        MatB[x+3][y]=7;
        MatB[x+4][y]=7;
        MatB[x+5][y]=7;
        MatB[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//derecha
                         {
       if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 && MatB[x][y+5]==0 && MatB[x][y+6]==0)
                      {
       MatB[x][y]=7;
        MatB[x][y+1]=7;
        MatB[x][y+2]=7;
        MatB[x][y+3]=7;
        MatB[x][y+4]=7;
        MatB[x][y+5]=7;
        MatB[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x==0 || x==1 ||x==2) && (y==4 || y==5))
             {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 && MatB[x+5][y]==0 && MatB[x+6][y]==0)
                      {
         MatB[x][y]=7;
        MatB[x+1][y]=7;
        MatB[x+2][y]=7;
        MatB[x+3][y]=7;
        MatB[x+4][y]=7;
        MatB[x+5][y]=7;
        MatB[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
             if((x==0 || x==1 ||x==2) && y<=9 && y>5)
             {
                srand ( time(NULL) );
                  num= rand() % 2;
                  if(num==0)//abajo
                     {
         if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 && MatB[x+5][y]==0 && MatB[x+6][y]==0)
                      {
         MatB[x][y]=7;
        MatB[x+1][y]=7;
        MatB[x+2][y]=7;
        MatB[x+3][y]=7;
        MatB[x+4][y]=7;
        MatB[x+5][y]=7;
        MatB[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }

                    }
                    if(num==1)//izquierda
                          {
      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 && MatB[x][y-5]==0 && MatB[x][y-6]==0)
                      {
        MatB[x][y]=7;
        MatB[x][y-1]=7;
        MatB[x][y-2]=7;
        MatB[x][y-3]=7;
        MatB[x][y-4]=7;
        MatB[x][y-5]=7;
        MatB[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
                    }
             }
             if((x>=3 && x<=6) && y>=0 && y<=3)
             {
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 && MatB[x][y+5]==0 && MatB[x][y+6]==0)
                      {
       MatB[x][y]=7;
        MatB[x][y+1]=7;
        MatB[x][y+2]=7;
        MatB[x][y+3]=7;
        MatB[x][y+4]=7;
        MatB[x][y+5]=7;
        MatB[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
             if((x>=3 && x<=6) && (y==4 || y==5))
             {
              printf("No se puede poner un barco  de 7 posiciones\n");
              printf("De una nueva coordenada\n");
           goto p;

             }
             if((x>=3 && x<=6) && y<=9 && y>5)
             {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 && MatB[x][y-5]==0 && MatB[x][y-6]==0)
                      {
        MatB[x][y]=7;
        MatB[x][y-1]=7;
        MatB[x][y-2]=7;
        MatB[x][y-3]=7;
        MatB[x][y-4]=7;
        MatB[x][y-5]=7;
        MatB[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto p;
                      }
             }
}
return nbar;
}
int Def_2_7(int nbar, int x, int y)
{
printf("Definida\n");
        {
            q:printf("De la posicion del barco x,y\n");
            scanf("%d %d", &x, &y);
             printf("La punta del Barco %d estara en la posicion (%d,%d) \n",nbar,x,y );

             if((x==9 || x==8 ||x==7)  && y>=0 && y<=3)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
                printf("(b)Hacia derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 && MatB[x-5][y]==0 && MatB[x-6][y]==0)
                      {
        MatB[x][y]=7;
        MatB[x-1][y]=7;
        MatB[x-2][y]=7;
        MatB[x-3][y]=7;
        MatB[x-4][y]=7;
        MatB[x-5][y]=7;
        MatB[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha\n");
                    {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 && MatB[x][y+5]==0 && MatB[x][y+6]==0)
                      {
       MatB[x][y]=7;
        MatB[x][y+1]=7;
        MatB[x][y+2]=7;
        MatB[x][y+3]=7;
        MatB[x][y+4]=7;
        MatB[x][y+5]=7;
        MatB[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }
             }
             if((x==9 || x==8 ||x==7) && (y==4 || y==5))
             {
              printf("Hacia arriba\n");
       if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 && MatB[x-5][y]==0 && MatB[x-6][y]==0)
                      {
        MatB[x][y]=7;
        MatB[x-1][y]=7;
        MatB[x-2][y]=7;
        MatB[x-3][y]=7;
        MatB[x-4][y]=7;
        MatB[x-5][y]=7;
        MatB[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
             }
             if((x==9 || x==8 ||x==7) && y<=9 && y>5)
             {
              printf("Seleciona la posicion\n");
             printf("(a)Hacia arriba\n");
              printf("(b)Hacia la izquierda\n");
              scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia arriba\n");
                    {
        if(MatB[x][y]==0 && MatB[x-1][y]==0 && MatB[x-2][y]==0 && MatB[x-3][y]==0 && MatB[x-4][y]==0 && MatB[x-5][y]==0 && MatB[x-6][y]==0)
                      {
        MatB[x][y]=7;
        MatB[x-1][y]=7;
        MatB[x-2][y]=7;
        MatB[x-3][y]=7;
        MatB[x-4][y]=7;
        MatB[x-5][y]=7;
        MatB[x-6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda\n");
                    {
      if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 && MatB[x][y-5]==0 && MatB[x][y-6]==0)
                      {
        MatB[x][y]=7;
        MatB[x][y-1]=7;
        MatB[x][y-2]=7;
        MatB[x][y-3]=7;
        MatB[x][y-4]=7;
        MatB[x][y-5]=7;
        MatB[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if((x==0 || x==1 ||x==2) && y>=0 && y<=3)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia derecha\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
      if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 && MatB[x+5][y]==0 && MatB[x+6][y]==0)
                      {
         MatB[x][y]=7;
        MatB[x+1][y]=7;
        MatB[x+2][y]=7;
        MatB[x+3][y]=7;
        MatB[x+4][y]=7;
        MatB[x+5][y]=7;
        MatB[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la derecha\n");
                    {
         if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 && MatB[x][y+5]==0 && MatB[x][y+6]==0)
                      {
       MatB[x][y]=7;
        MatB[x][y+1]=7;
        MatB[x][y+2]=7;
        MatB[x][y+3]=7;
        MatB[x][y+4]=7;
        MatB[x][y+5]=7;
        MatB[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");

                }
             }
             if((x==0 || x==1 ||x==2) && (y==4 || y==5))
             {
              printf("Hacia abajo\n");
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 && MatB[x+5][y]==0 && MatB[x+6][y]==0)
                      {
         MatB[x][y]=7;
        MatB[x+1][y]=7;
        MatB[x+2][y]=7;
        MatB[x+3][y]=7;
        MatB[x+4][y]=7;
        MatB[x+5][y]=7;
        MatB[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
             }
             if((x==0 || x==1 ||x==2) && y<=9 && y>5)
             {
                printf("Seleciona la posicion\n");
             printf("(a)Hacia abajo\n");
                printf("(b)Hacia la izquierda\n");
                scanf(" %c",&lugar);
                switch(lugar)
                {
                    case 'a': printf("Hacia abajo\n");
                    {
        if(MatB[x][y]==0 && MatB[x+1][y]==0 && MatB[x+2][y]==0 && MatB[x+3][y]==0 && MatB[x+4][y]==0 && MatB[x+5][y]==0 && MatB[x+6][y]==0)
                      {
         MatB[x][y]=7;
        MatB[x+1][y]=7;
        MatB[x+2][y]=7;
        MatB[x+3][y]=7;
        MatB[x+4][y]=7;
        MatB[x+5][y]=7;
        MatB[x+6][y]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }

                    }
                    break;
                      case 'b': printf("Hacia la izquierda\n");
                    {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 && MatB[x][y-5]==0 && MatB[x][y-6]==0)
                      {
        MatB[x][y]=7;
        MatB[x][y-1]=7;
        MatB[x][y-2]=7;
        MatB[x][y-3]=7;
        MatB[x][y-4]=7;
        MatB[x][y-5]=7;
        MatB[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
                    }
                    break;
                    default: printf("No se encontro opcion disponible.\n");
                }
             }
             if((x>=3 && x<=6) && y>=0 && y<=3)
             {
               printf("Hacia la derecha\n");
        if(MatB[x][y]==0 && MatB[x][y+1]==0 && MatB[x][y+2]==0 && MatB[x][y+3]==0 && MatB[x][y+4]==0 && MatB[x][y+5]==0 && MatB[x][y+6]==0)
                      {
       MatB[x][y]=7;
        MatB[x][y+1]=7;
        MatB[x][y+2]=7;
        MatB[x][y+3]=7;
        MatB[x][y+4]=7;
        MatB[x][y+5]=7;
        MatB[x][y+6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
             }
             if((x>=3 && x<=6) && (y==4 || y==5))
             {
              printf("No se puede poner un barco  de 7 posiciones\n");
              printf("De una nueva coordenada\n");
           goto q;

             }
             if((x>=3 && x<=6) && y<=9 && y>5)
             {
             printf("Hacia la izquierda\n");
                    {
       if(MatB[x][y]==0 && MatB[x][y-1]==0 && MatB[x][y-2]==0 && MatB[x][y-3]==0 && MatB[x][y-4]==0 && MatB[x][y-5]==0 && MatB[x][y-6]==0)
                      {
        MatB[x][y]=7;
        MatB[x][y-1]=7;
        MatB[x][y-2]=7;
        MatB[x][y-3]=7;
        MatB[x][y-4]=7;
        MatB[x][y-5]=7;
        MatB[x][y-6]=7;

                      }
                      else
                      {
                        printf("Ya se encuentra un barco es esa posicion\n");
                        goto q;
                      }
                    }
             }
                  }//case b definida
return nbar;
}
int p_tablero2(int j, int i)
{
     for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        printf("%10d (%d,%d)",MatB[i][j],i,j);
        printf("\n");
    }
}
int puntos_2(int puntos2)
{
    printf("\n\n\n\n\t\t\t\t\t\t >>>>>>>>>>>>>>>JUGADOR2<<<<<<<<<<<<<<< \n");
    printf("\t\t\t\t\t>>>>>>>>>>>>>>>PUNTOS DE JUGADOR 2 =%d<<<<<<<<<<<<<<< \n",puntos2 );
}
//presentaciones
void presentacion(int nada)
{
	printf(" \n *******************************************************************************************************************************");
	printf(" \n *******************************************************************************************************************************");
	printf(" \n *******************************************************************************************************************************");
	printf(" \n **     __________     ____________     ___________     ____________     ____              ____              ____________      **");
	printf(" \n **     |  _____  )    |  ______   |    |          |    |  ______   |    |   |             |   |             |  ______   |     **");
	printf(" \n **     |  |    | )    |  |     |  |    |___    ___|    |  |     |  |    |   |             |   |             |  |     |  |     **");
	printf(" \n **     |  |____| )    |  |_____|  |        |  |        |  |_____|  |    |   |             |   |             |  |_____|  |     **");
	printf(" \n **     |---------)    |  _______  |        |  |        |  ______   |    |   |             |   |             |  _______  |     **");
	printf(" \n **     |  _____  )    |  |     |  |        |  |        |  |     |  |    |   |             |   |             |  |     |  |     **");
	printf(" \n **     |  |    | )    |  |     |  |        |  |        |  |     |  |    |   |________     |   |________     |  |     |  |     **");
	printf(" \n **     |  |____| )    |  |     |  |        |  |        |  |     |  |    |            |    |            |    |  |     |  |     **");
	printf(" \n **     |_________)    |__|     |__|        |__|        |__|     |__|    |____________|    |____________|    |__|     |__|     **");
	printf(" \n **                                                                                                                            **");
	printf(" \n **                       ____      ____    ____________     ____              ____    ____________     ____                   **");
	printf(" \n **                       |   |     |  |    |  ______   |    |  |              |  |    |  ______   |    |   |                  **");
	printf(" \n **                       |   \\     |  |    |  |     |  |    \\  \\             /  /     |  |     |  |    |   |                  **");
	printf(" \n **                       |    \\    |  |    |  |_____|  |     \\  \\           /  /      |  |_____|  |    |   |                  **");
	printf(" \n **                       |  |\\ \\   |  |    |  _______  |      \\  \\         /  /       |  _______  |    |   |                  **");
	printf(" \n **                       |  | \\ \\  |  |    |  |     |  |       \\  \\       /  /        |  |     |  |    |   |                  **");
	printf(" \n **                       |  |  \\ \\_|  |    |  |     |  |        \\  \\_____/  /         |  |     |  |    |   |__________        **");
	printf(" \n **                       |  |   \\     |    |  |     |  |         \\         /          |  |     |  |    |             |        **");
	printf(" \n **                       |__|    \\____|    |__|     |__|          \\_______/           |__|     |__|    |_____________|   TM   **");
	printf(" \n **                                                                                                                            **");
	printf(" \n **                                                                                                                            **");
	printf(" \n ********************************************************************************************************************************");
	printf(" \n ********************************************************************************************************************************");
	printf(" \n ********************************************************************************************************************************");
	printf("\n \t\t \"BATALLA NAVAL AND ALL RELATED ELEMENTS ARE THE PROPERTY OF JAC COMPANY TM & 2017.\"\n\t\t\t\t\t          ALL RIGHTS RESERVED \n \t\t\t\t\t     2017 SEGA. ALL RIGHTS RESERVED. \n \t\t\t\t\t\t    FEEL GOOD INC.");
	printf(" \n \n       ----------------------------------------PRESIONA ENTER PARA EMPEZAR A JUGAR-------------------------------------------");
	printf("  \n\n   \t\t\t\t\t\t \t \tSTART ");
	getchar();
	system("cls");
}
void letrero(int nada)
{
	printf(" \n  |   ********    *******    *********   *******   **        **        *******        **     **   *******   **          **   *******   **                 |");
	printf(" \n  |   *  *   ))   *  *  *    *********   *  *  *   **        **        *  *  *        ***    **   *  *  *   **          **   *  *  *   **                 |");
	printf(" \n  |   *  *   ))   *  *  *       ***      *  *  *   **        **        *  *  *        ** *   **   *  *  *    **        **    *  *  *   **                 |");
	printf(" \n  |   ********    *     *       ***      *     *   **        **        *     *        **  *  **   *     *     **      **     *     *   **                 |");
	printf(" \n  |   *  *   ))   *******       ***      *******   **        **        *******        **   * **   *******      **    **      *******   **                 |");
	printf(" \n  |   *  *   ))   **   **       ***      **   **   *******   *******   **   **        **    ***   **   **       ******       **   **   *******            |");
	printf(" \n  |   ********    **   **       ***      **   **   *******   *******   **   **        **     **   **   **         ***        **   **   ******* (TM) SEGA  |");
	printf(" \n  \\------------------------------------------------------------------------------------------------------------------------------------------------------/");
	printf("\n");
}
void letrero2(int nada)
{
	printf(" \n  |   ********    *******    *********   *******   **        **        *******        **     **   *******   **          **   *******   **                 |");
	printf(" \n  |   *  *   ))   *  *  *    *********   *  *  *   **        **        *  *  *        ***    **   *  *  *   **          **   *  *  *   **                 |");
	printf(" \n  |   *  *   ))   *  *  *       ***      *  *  *   **        **        *  *  *        ** *   **   *  *  *    **        **    *  *  *   **                 |");
	printf(" \n  |   ********    *     *       ***      *     *   **        **        *     *        **  *  **   *     *     **      **     *     *   **                 |");
	printf(" \n  |   *  *   ))   *******       ***      *******   **        **        *******        **   * **   *******      **    **      *******   **                 |");
	printf(" \n  |   *  *   ))   **   **       ***      **   **   *******   *******   **   **        **    ***   **   **       ******       **   **   *******            |");
	printf(" \n  |   ********    **   **       ***      **   **   *******   *******   **   **        **     **   **   **         ***        **   **   ******* (TM) SEGA  |");
	printf(" \n  \\------------------------------------------------------------------------------------------------------------------------------------------------------/");
	printf("\n \n \n");
	printf("\t\t\t\t\t\t\t\t LOADING...");
	getchar();
	printf("\n");
}
void ganaste(int nada)
{
	printf(" \n\n\n\n      ||| ********  *******   *         *********   ********   *********   *******     ********   *******     *******    ********* |||");
	printf(" \n      ||| *         *         *             *       *              *       *      ))   *      *   *      ))   *          *         |||");
	printf(" \n      ||| *         *         *             *       *              *       *      ))   *      *   *      ))   *          *         |||");
	printf(" \n      ||| ****      *         *             *       *              *       *      ))   *      *   *      ))   *          ********* |||");
	printf(" \n      ||| *         *******   *             *       *              *       *      ))   ********   *      ))   *******            * |||");
	printf(" \n      ||| *         *         *             *       *              *       *      ))   *      *   *      ))   *                  * |||");
	printf(" \n      ||| *         *         *             *       *              *       *      ))   *      *   *      ))   *                  * |||");
	printf(" \n      ||| *         *******   *******   *********   ********    *********  *******     *      *   *******     *******    ********* |||");
	printf("\n");
}
//jugabilidad
int juego_PVP(int posicion1_jugador1, int posicion2_jugador1, int posicion1_jugador2, int posicion2_jugador2)
{
  while(puntos1>0 && puntos2>0)
  {
    getchar();
    system("cls");
    letrero(nada);
    printf("\t\t\t\t\t\t>>>>>>>>>>>>>>>JUGADOR 1<<<<<<<<<<<<<<<\n");
    tablero_1(j, i);
    printf("\t\t\t\t\t\tTus puntos son: %i",puntos1);
    printf("\n Introduce una posicion del tablero:\n");
    scanf("%i",&posicion1_jugador1);
    scanf("%i",&posicion2_jugador1);


    //Aqui se valida la posicion que se dio
    while(posicion1_jugador1<0 || posicion1_jugador1>9 || posicion2_jugador1<0 || posicion2_jugador1>9)
    {
      system("cls");
      letrero(nada);
      printf("\t\t\t\t\t\t>>>>>>>>>>>>>>>JUGADOR 1<<<<<<<<<<<<<<<\n");
      tablero_1(j, i);
      printf("\t\t\t\t\t\tTus puntos son: %i",puntos1);
      printf("\n Introduce una posicion del tablero:\n");
      scanf("%i",&posicion1_jugador1);
      scanf("%i",&posicion2_jugador1);
    }
    //Aqui termina


    if(MatB[posicion1_jugador1][posicion2_jugador1]==3)
    {
      printf("\n ZAAAZZZZ, Le diste a una posicion del barco tu oponente te puede ir ganando\n");
      puntos2=puntos2-1;
      MatB[posicion1_jugador1][posicion2_jugador1]=0;
      MatA[posicion1_jugador1][posicion2_jugador1]=7;
    }
    else if(MatB[posicion1_jugador1][posicion2_jugador1]==5)
    {
      printf("\n ZAAAZZZZ, Le diste a una posicion del barco \n");
      puntos2=puntos2-1;
      MatB[posicion1_jugador1][posicion2_jugador1]=0;
      MatA[posicion1_jugador1][posicion2_jugador1]=7;
    }
    else if(MatB[posicion1_jugador1][posicion2_jugador1]==7)
    {
      printf("\n ZAAAZZZZ, Le diste a una posicion del barco \n");
      puntos2=puntos2-1;
      MatB[posicion1_jugador1][posicion2_jugador1]=0;
      MatA[posicion1_jugador1][posicion2_jugador1]=7;
    }
    else
    {
      printf("\n No le distes a ningun barco :( \n");
      MatA[posicion1_jugador1][posicion2_jugador1]=9;
      //MatB[posicion1_jugador1][posicion2_jugador1]=5;
    }
    for(i=0;i<=9;i++)
     {
          for(j=0;j<=9;j++)
          printf("%10d (%d,%d)",MatA[i][j],i,j);
          printf("\n");
     }
     getchar();



     //Aqui va el segundo jugador, y se verifica que antes tenga mayor puntuacion
     if(puntos2>0)
     {
      getchar();
       system("cls");
       letrero(nada);
       printf("\t\t\t\t\t\t>>>>>>>>>>>>>>>JUGADOR 2<<<<<<<<<<<<<<<\n");
       tablero_2(j, i);
       printf("\t\t\t\t\t\tTus puntos son: %i",puntos2);
      printf("\nIntroduce una posicion del tablero: \n");
      scanf("%i",&posicion1_jugador2);
      scanf("%i",&posicion2_jugador2);

      //Aqui se valida lo que introdujo
      while(posicion1_jugador2<0 || posicion1_jugador2>9 || posicion2_jugador2<0 || posicion2_jugador2>9)
      {
        system("cls");
        letrero(nada);
        printf("\t\t\t\t\t\t>>>>>>>>>>>>>>>JUGADOR 2<<<<<<<<<<<<<<<\n");
        tablero_1(j, i);
        printf("\t\t\t\t\t\tTus puntos son: %i",puntos2);
        printf("\n Introduce una posicion del tablero:\n");
        scanf("%i",&posicion1_jugador2);
        scanf("%i",&posicion2_jugador2);
      }
      //Aqui termina
      if(MatA[posicion1_jugador2][posicion2_jugador2]==3)
      {
        printf("\n ZAAAZZZZ, Le diste a una posicion del barco \n");
        puntos1=puntos1-1;
        MatA[posicion1_jugador2][posicion2_jugador2]=0;
        MatB[posicion1_jugador2][posicion2_jugador2]=7;
      }
      else if(MatA[posicion1_jugador2][posicion2_jugador2]==5)
      {
        printf("\n ZAAAZZZZ, Le diste a una posicion del barco \n");
        puntos1=puntos1-1;
        MatA[posicion1_jugador2][posicion2_jugador2]=0;
        MatB[posicion1_jugador2][posicion2_jugador2]=7;
      }
      else if(MatA[posicion1_jugador2][posicion2_jugador2]==7)
      {
        printf("\n ZAAAZZZZ, Le diste a una posicion del barco \n");
        puntos1=puntos1-1;
        MatA[posicion1_jugador2][posicion2_jugador2]=0;
        MatB[posicion1_jugador2][posicion2_jugador2]=7;
      }
      else
      {
        printf("No le distes a ningun barco, tu oponente te puede ir ganando :( \n");
        MatB[posicion1_jugador2][posicion2_jugador2]=7;
        //MatA[posicion1_jugador2][posicion2_jugador2]=0;
      }
      for(i=0;i<=9;i++)
       {
            for(j=0;j<=9;j++)
            printf("%10d (%d,%d)",MatB[i][j],i,j);
            printf("\n");
       }
       getchar();
    }
  }




	//Aqui se checa quien perdio, que tendra un valor en sus puntos =0
	if(puntos1==0)
	{
		system("cls");
		letrero(nada);
		ganaste(nada);
		printf("\t\t\t\t\t >>>>>>>>>>>>>JUGADOR 2, HAS GANADO EL JUEGO DEJANDO A TU RIVAL CON \"0\" PUNTOS.<<<<<<<<<<<<<<<\n")		;
		printf("\t\t\t\t\t >>>>>>>>>>>>>IT IS AMAZING :)<<<<<<<<<<<<<<< \n");
		printf("\t\t\t\t\t >>>>>>>>>>>>>TU PUNTAJE SE QUEDO EN: %i<<<<<<<<<<<<<<<",puntos2);
		getchar();
	}
	else
	{
		system("cls");
		letrero(nada);
		ganaste(nada);
		printf("\t\t\t\t\t >>>>>>>>>>>>>JUGADOR 1, HAS GANADO EL JUEGO DEJANDO A TU RIVAL CON \"0\" PUNTOS.<<<<<<<<<<<<<<<\n")		;
		printf("\t\t\t\t\t >>>>>>>>>>>>>IT IS AMAZING :)<<<<<<<<<<<<<<< \n");
		printf("\t\t\t\t\t >>>>>>>>>>>>>TU PUNTAJE SE QUEDO EN: %i<<<<<<<<<<<<<<<",puntos1);
		getchar();
	}

}

int main()
{

	//AQUI MUESTRA LA PRESENTACION DEL JUEGO
	presentacion(nada);

	//AQUI SE PIDE AL USUSAIO QUE INGRESE SU ALIAS DE COMO SERA RECONOCIDO EN EL JUEGO
	letrero(nada);

tablero_1(j, i);
 do{
	tamanio_1(nbar);
    if(tamanio== 3)
    {
		opc_1();
        switch (opcion)
        {
        case 'a':
		Ale_1_3(nbar, x, y);
        break;
        case 'b':
		Def_1_3(nbar, x, y);
        break;
        default: p_no();
    }
     puntos1=puntos1+3;
}
    if(tamanio== 5)
    {
		opc_1();
        switch (opcion)
        {
        case 'a':
		Ale_1_5(nbar, x, y);
        break;
        case 'b':
		Def_1_5(nbar, x, y);
        break;
        default: p_no();
    }
     puntos1=puntos1+5;


    }
    if(tamanio== 7)
    {
        opc_1();
        switch (opcion)
        {
        case 'a':
		Ale_1_7(nbar, x, y);
        break;
        case 'b':
		Def_1_7(nbar, x, y);
        break;
        default: p_no();
    }
     puntos1=puntos1+7;
////_______________

    }
		p_tablero1(j, i);
      	nbar=nbar+1;
      	getchar();
			system("cls");
			letrero(nada);
    }
    while(nbar!=4);
    getchar();
    tablero_1(j, i);

   getchar();
	system("cls");
	letrero(nada);
	puntos_1(puntos1);
//________________________________________________________________
getchar();
system("cls");
//_________________________________________________________________
letrero2(nada);
tablero_2(j, i);
 do{
  	tamanio_1(nbar);
    if(tamanio== 3)
    {
        opc_1();
        switch (opcion)
        {
        case 'a':
		Ale_2_3(nbar, x, y);
        break;
        case 'b':
		Def_2_3(nbar, x, y);
        break;
        default: p_no();
    }
     puntos2=puntos2+3;
}
    if(tamanio== 5)
    {

        opc_1();
        switch (opcion)
        {
        case 'a':
		Ale_2_5(nbar, x, y);
        break;
        case 'b':
		Def_2_5(nbar, x, y);
        break;
        default: p_no();
    }
     puntos2=puntos2+5;


    }
    if(tamanio== 7)
    {
		opc_1();
        switch (opcion)
        {
        case 'a':
        Ale_2_7(nbar, x, y);
        break;
        case 'b':

		break;
		Def_2_7(nbar, x, y);
        default: p_no();
    }
     puntos2=puntos2+7;
////_______________

    }
		p_tablero2(j, i);
      	nbar=nbar+1;
      	getchar();
      	system("cls");
      	letrero(nada);
    }
    while(nbar!=4);
    getchar();
    tablero_2(j, i);
   getchar();
   system("cls");
   letrero2(nada);
 	puntos_2(puntos2);
//________________________________________________________________
system("cls");
//_________________________________________________________________

//Aqui empieza el codigo de pedir posiciones del barco
juego_PVP(posicion1_jugador1, posicion2_jugador1, posicion1_jugador2, posicion2_jugador2);

}
//main
