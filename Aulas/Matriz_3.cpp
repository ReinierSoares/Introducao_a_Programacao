#include<stdio.h>

main()
{
 
 int A[2][2] = {1,2, 0,4};
 int B[2][2] = {1,3, 1,0};
 int C[2][2];
 int i,j;
 
 
 //calculo da soma das matrizes
 for(i=0;i<=1;i++)
  for(j=0;j<=1;j++)
  C[i][j] = A[i][j] + B[i][j];
  
  printf("A matriz A(2,2):\n");	
	for(i=0;i<=1;i++)
    for(j=0;j<=1;j++)
     {
    	printf("%d  ",A[i][j]);
    	if(j==1)
  	    printf("\n");
    } 
    
    
    printf("A matriz B(2,2):\n");	
	for(i=0;i<=1;i++)
    for(j=0;j<=1;j++)
     {
    	printf("%d  ",B[i][j]);
    	if(j==1)
  	    printf("\n");
    } 
  
  
  //impressão da matriz C
  printf("A matriz C(2,2) = A(2,2) + B(2,2):\n");	
	for(i=0;i<=1;i++)
    for(j=0;j<=1;j++)
     {
    	printf("%d  ",C[i][j]);
    	if(j==1)
  	    printf("\n");
    } 
}
