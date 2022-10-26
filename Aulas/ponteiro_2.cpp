#include<stdio.h>
#include <stdlib.h>

main()
{
	int tamanho,i,*v,novo_tamanho;
	
	printf("Entre com o tamanho do vetor:\n");
	scanf("%d",&tamanho);
	
//	v = (int *)malloc(tamanho*sizeof(int));
	v = (int *)calloc(tamanho,sizeof(int));
	
	printf("Entre com os %d valores do vetor\n", tamanho);
	for(i=0;i<tamanho;i++)
	scanf("%d",&v[i]);
	
	
	printf("Os valores do vetor foram:\n");
	for(i=0;i<tamanho;i++)
	printf("%d ",v[i]);
	
	
	printf("\nEntre com o novo tamanho do vetor:\n");
	scanf("%d",&novo_tamanho);
	
	realloc(v, novo_tamanho*sizeof(int));
	
	printf("Entre com os %d valores novos do vetor\n", novo_tamanho);
	for(i=tamanho;i<novo_tamanho;i++)
	scanf("%d",&v[i]);
	
	printf("Os valores do vetor foram:\n");
	for(i=0;i<novo_tamanho;i++)
	printf("%d ",v[i]);
	
}
