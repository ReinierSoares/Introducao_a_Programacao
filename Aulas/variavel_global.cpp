#include<stdio.h>
int x=12;

int soma (int y)
{

	return (x+y);
}


main()
{
	int y,total;
	
	
	y = 4;
	
	
	total = soma(y);
	
	printf("O resultado eh %d\n", total);
	printf("O valor de x eh %d\n", x);
}
