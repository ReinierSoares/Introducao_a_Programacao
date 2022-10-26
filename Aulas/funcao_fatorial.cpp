#include<stdio.h>

int fatorial (int n)
{
	int acc;

// modo 1
//	acc = n;
//	for( int i = n-1; i>=1;i--)
//	acc = acc*i;
//  return acc;

//modo 2
//    acc = n;
//    for( int i = 1; i<n;i++)
//	acc = acc*(n-i);
//   return acc;

//modo 3
//    acc = 1;
//    for( int i = 1; i<=n;i++)
//	acc = acc*i;	
//    return acc;

//modo 4
   
   if(n>1)
   return n*fatorial(n-1);
   else
   return 1;
   
}

main()
{
	int n, fat;
	
	printf("Entre com o valor de n:\n");
	scanf("%d",&n);
	
	fat = fatorial(n);
	
	printf("O fatorial de %d eh: %d\n",n,fat);
	
}
