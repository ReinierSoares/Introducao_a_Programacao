#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct dados
{
 char nome[20];
 int idade;
 struct dados *prox;
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
   novo->prox = novo;
   cabeca = novo;	
  }
 else
  {
   novo->prox = cabeca->prox;
   cabeca->prox = novo;	
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
	 do 	
	 {
	 	printf("Nome: %s\n",p->nome);
	 	printf("Idade: %d\n",p->idade);
	 	printf("\n---------------\n");
	 	
	 	p = p->prox;
	 }while(p!=cabeca);
	}
}


main()
{
	
TDados *lista_simples;
        lista_simples = NULL;
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
	            	      lista_simples = inserir(lista_simples); break;
		                
	  case 'L': case 'l': 
				          listar(lista_simples); break;
				                    
	  default :printf (" OPÇÃO INVALIDA !\n\n");
				printf ("\a");			

    }
  }while ((opcao!= 'S') && (opcao!='s'));
}
