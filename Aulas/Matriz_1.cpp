#include<stdio.h>

main()
{
 
 int M[2][3], X[3][3] = {1,4,2, 1,0,9, 0,0,3};
 
 int i,j;
 
 printf("A matriz X(3,3):\n");
 for(i=0;i<=2;i++)
  for(j=0;j<=2;j++)
  {
  	printf("%d  ",X[i][j]);
  	if(j==2)
  	printf("\n");
  }
  
  
  printf("Entre com a matriz M(2,3):\n");
  for(i=0;i<=1;i++)
   for(j=0;j<=2;j++)
	scanf("%d",&M[i][j]);
	
  printf("A matriz M(2,3):\n");	
	for(i=0;i<=1;i++)
    for(j=0;j<=2;j++)
     {
    	printf("%d  ",M[i][j]);
    	if(j==2)
  	    printf("\n");
    }   
}
