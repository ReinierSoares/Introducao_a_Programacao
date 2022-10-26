#include<stdio.h>

void altera (int x, int y)
{
    x = x+10;
	y = y + 5;
}


main()
{
	int x,y,total;
	
	x = 15;
	y = 5;
	
	total = x+y;
	printf("O antigo valor de x eh %d\n", x);
	printf("O antigo valor de y eh %d\n", y);
	printf("Total antes da funcao %d\n", total);

	
	altera(x,y);
	total = x+y;
	printf("\n\n--------------------------\n");
	printf("O novo valor de x eh %d\n", x);
	printf("O novo valor de y eh %d\n", y);
	printf("Total depois da funcao %d\n", total);


}
