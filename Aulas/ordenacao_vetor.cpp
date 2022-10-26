#include<stdio.h>

main()
{
 int i,j,troca, vet[5] = {1,9,3,4,2};
 
 printf("Vetor desordenado:\n");
 for(i=0;i<5;i++)
 printf("%d ",vet[i]);
 
 
 for(i=0;i<5;i++)
  for(j=i+1;j<5;j++)
  {
  	if(vet[i]>vet[j])
  	{
  	 troca = vet[i];
	 vet[i] = vet[j];
	 vet[j] = troca;   	
	}
  }
  
  printf("\n\n--------------------------\n");
  printf("Vetor ordenado:\n");
 for(i=0;i<5;i++)
 printf("%d ",vet[i]);
}
