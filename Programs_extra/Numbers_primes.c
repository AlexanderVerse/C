#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int num;
	printf("\n\n\t>> Introduce cuantos numeros primos quieres saber: ");
 	scanf("%i",&num);
 	int array[num];
 	int menos,res;
 	int conta=0,pos_array=0,contanum=0,p=2;
 	printf("\n\n\t* Estos son los numeros primos \n");
	while(contanum!=num)
	{
		conta=0;
 	    menos=p-2;
 		for(int i=2; i<p; i++)
		{
			res= p % i;
		    if(res>0)
			 	conta=conta+1;
		}
		if(conta==menos)
		{
			contanum+=1;
			array[pos_array]=p;
			pos_array+=1;
		}
		p++;
	}
    for(int i=0; i<num; i++)
		printf("\t-%d \n",array[i]);
}
