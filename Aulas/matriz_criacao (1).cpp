#include<stdio.h>

main()
{
 int l,c,m[5][5];
 
  for(l=0;l<5;l++)
  for(c=0;c<5;c++)
  {
  	if(l==c)
	  m[l][c] = (l+c);
	
	if(l>c)
	  m[l][c] = (l*l);
	  
	if(c>l)
	  m[l][c] = (c*c);	
	
  }
  
  
  printf("Matriz:\n");
 for(l=0;l<5;l++)
  for(c=0;c<5;c++)
  {
  	
  	
  	printf("%d ",m[l][c]);
  	if(m[l][c]<=9)
  	printf(" ");
  	if(c==4)
  	printf("\n");
  }
  
  
}
