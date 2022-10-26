#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct dados
{
 char nome[20];
 int idade;
 struct dados *prox;
 struct dados *ant;
}TDados;



TDados *inserir (TDados *cabeca)
{
 
 TDados *novo;
 novo = (TDados*)malloc(sizeof(TDados));
  
 printf("Entre com o nome:\n");
 scanf("%s",&novo->nome);
  
 printf("Entre com a idade:\n");
 scanf("%d",&novo->idade);
  
 
 if(cabeca == NULL)
  {
   novo->prox = NULL;
   novo->ant = NULL;
   cabeca = novo;	
  }
 else
  {
   novo->prox = cabeca->prox;
   cabeca->prox = novo;
   novo->ant = cabeca;
   	
  }
	
	return (cabeca);
}




void listar (TDados *cabeca)
{
	TDados *p;
	
	p = cabeca;
	
	if(p == NULL)
	printf("Lista vazia!\n");
	else
	{
	 while(p!=NULL)	
	 {
	 	printf("Nome: %s\n",p->nome);
	 	printf("Idade: %d\n",p->idade);
	 	printf("\n---------------\n");
	 	
	 	p = p->prox;
	 }
	}
}


main()
{
	
TDados *lista_dupla;
        lista_dupla = NULL;
        system("color 0A");
    //COMANDO PARA INDENTIFICAR A OPÇÃO ESCOLHIDA
        char opcao;
        
do{
     printf("\n ~ MENU ~ \n\n");
     printf("Escolha a opção desejada: \nL: listar \nI: inserir \nS: sair\n");
        	
     opcao=getch();
     system("cls");
        	
    switch(opcao)
    {    
	  case 'I': case 'i': 
	            	      lista_dupla = inserir(lista_dupla); break;
		                
	  case 'L': case 'l': 
				          listar(lista_dupla); break;
				                    
	  default :printf (" OPÇÃO INVALIDA !\n\n");
				printf ("\a");			

    }
  }while ((opcao!= 'S') && (opcao!='s'));
}
