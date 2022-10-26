#include<stdio.h>

main()
{
	int x, *p,*q, m[3]={1,2,3};
	
	p = &x;
	x= 2;
	*p = *p +20;
     
	printf("O valor de x: %d\n",x);
	
	q = m;
	
	//*q = -1;
	
	 q=q+2;
	 *q= 10;
	 
	 
	 printf("vetor:\n");
	 
	 for(int i=0;i<=2;i++)
	 printf("%d ",m[i]);
	
	
	
}
