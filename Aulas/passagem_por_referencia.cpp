#include<stdio.h>

int soma (int *x, int *y)
{
    *x= *x+2;
	return (*x+*y);
}


main()
{
	int x,y,total;
	
	x = 12;
	y = 4;
	
	
	total = soma(&x,&y);
	
	printf("O resultado eh %d\n", total);
	printf("O valor de x eh %d\n", x);

}
