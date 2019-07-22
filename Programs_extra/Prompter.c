#include <stdio.h>

int main ()
{
	int *ptr,i;
	int a[3];
	ptr=&a[0];
	for (i=0;i<3;i++){

		scanf ("%d",&a[i]);
	}
	for (i=0;i<3;i++){
		printf ("%d",*(ptr+i));
		printf("\n");
	}
	return 0;
}
