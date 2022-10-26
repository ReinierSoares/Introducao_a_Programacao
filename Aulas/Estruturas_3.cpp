#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Dados
{
 char nome[10];
 int idade;
 int ano_nasc;	
};

main()
{

struct Dados *inf;

int i,n;

printf("Entre com o tamanho da estrutura\n");
scanf("%d",&n);

inf = (struct Dados *)malloc(n*sizeof(struct Dados));

for( i=0;i<n;i++)
{
 printf("Entre com o %d nome\n",i+1);
 scanf("%s",&inf[i].nome);
 
 printf("%s entre com a sua idade:\n",inf[i].nome);
 scanf("%d",&inf[i].idade);
 
 printf("%s entre com a data de nascimento:\n",inf[i].nome);
 scanf("%d",&inf[i].ano_nasc);	
}



for( i=0;i<n;i++)
printf("Oi %s, voce tem %d anos e nasceu em %d\n", inf[i].nome, inf[i].idade, inf[i].ano_nasc);	
	
}
