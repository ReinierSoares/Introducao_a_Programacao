#include<stdio.h>
#include <stdlib.h>

main()
{
	int linha,coluna, **m,i,j;
	
	printf("Entre com o tamanho da matriz:\n");
	scanf("%d%d",&linha,&coluna);
		
	m = (int **) calloc (linha, sizeof(int *));
	
	for(i=0;i<linha;i++)
		m[i] = (int*) calloc (coluna, sizeof(int));
		
	printf("Entre com os valores da matriz\n");
	for(i=0;i<linha;i++)
     for(j=0;j<coluna;j++)
	  scanf("%d",&m[i][j]);	
	  
	printf("A matriz m(%d,%d):\n", linha,coluna);	
	for(i=0;i<linha;i++)
    for(j=0;j<coluna;j++)
     {
    	printf("%d  ",m[i][j]);
    	if(j==coluna-1)
  	    printf("\n");
    } 
}
