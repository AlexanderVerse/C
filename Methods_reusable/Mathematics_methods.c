////////////////////////////////////////////////////////////////
//////////                DESCRIPTION                 //////////
////////////////////////////////////////////////////////////////
/*
Operaciones matemáticas comunes como teorema de pitágoras, sacar la distancia de dos puntos.
Nota: Los argumentos deben venir validados.
*/


///////////////////////////////////////////////
////////            Librarys          /////////
///////////////////////////////////////////////
#include<math.h>


///////////////////////////////////////////////
//////////          Methods         ///////////
///////////////////////////////////////////////

float pitagoras(float num1, float num2, int des)
{
    float res;
    if (des)
        res = sqrt( (num1*num1) + (num2*num2));
    else
    {
        if(num1>num2)
            res = sqrt((num1*num1) - (num2*num2));
        else
            res = sqrt((num2*num2) - (num1*num1));
    }
    return res;
}
float distance_two_points(float point1_x,float point1_y, float point2_x, float point2_y)
{
    return sqrt((point2_y-point1_y)*(point2_y-point1_y)+(point2_x-point1_x)*(point2_x-point1_x));
}

/*void main()
{
    printf("Result: %f\n", pitagoras(5,3,0));
}*/
