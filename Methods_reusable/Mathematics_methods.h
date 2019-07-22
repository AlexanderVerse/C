////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Métodos comunes en matemáticas. Pitagoras, distancia entre dos puntos en un plano cartesiano.
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<C:\Users\hisuk\Documents\LISDER\C\Methods_reusable\Mathematics_methods.c>


////////////////////////////////////////////////
//////////         Prototypes        ///////////
////////////////////////////////////////////////
/*Decripción: Devuelve un cateto o la hipotenusa ya sea según el caso que se desea volver.
Parámetros.
float num1: Cateto o hipotenusa.
float num2: Cateto o hipotenusa.
int des: Este determina que se desea sacar, si es la hipotenusa se pone 1. Si es un cateto se pone un 0.
*/
float pitagoras(float num1, float num2, int des);

/*Decripción: Saca la distancia entre dos puntos en un plano cartesiano.
Parámetros.
float point1_x: Punto 1 eje x(abcisa).
float point1_y: Punto 1 eje y(ordenada)
float point2_x: Punto 2 eje x(abcisa).
float point2_y: Punto 2 eje y(abcisa).
*/
float distance_two_points(float point1_x,float point1_y, float point2_x, float point2_y);
