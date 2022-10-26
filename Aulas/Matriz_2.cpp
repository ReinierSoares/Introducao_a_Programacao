#include<stdio.h>

main()
{
 
 int M[4][5];
 
 int i,j;
 
 
 for(i=0;i<=3;i++)
  for(j=0;j<=4;j++)
  {
  	if(i>j)
  	M[i][j] = 2*(i+1);
  	
  	if(i==j)
  	M[i][j] = i +j+2;
  	
  	if(i<j)
  	M[i][j] = 2*(j+1);
  }
  
  
 	
  printf("A matriz M(4,5):\n");	
	for(i=0;i<=3;i++)
    for(j=0;j<=4;j++)
     {
    	printf("%d  ",M[i][j]);
    	if(j==4)
  	    printf("\n");
    }   
}
