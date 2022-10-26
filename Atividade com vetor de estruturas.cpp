#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

    struct dados
{
	    char nome[20];
	    int idade;
	    int dia_nasc;
	    int mes_nasc;
	    int ano_nasc;
	    int i;
};


	void Inserir(struct dados*inserir[i]){					//FUNÇÃO INSERIR
	
		printf("Insira o primeiro nome");
		scanf("%s",lista[i].nome);
		printf("Insira a idade");
		scanf("%d",lista[i].idade);
		printf("Insira dd/mm/aaaa");
		scanf("%d/%d/%d",lista[i].dia_nasc,
	     				 lista[i].mes_nasc,
	   					 lista[i].ano_nasc);
	   					   					 
	}
	   					 
	void Listar(int*){
		int i;
		for(i=o;i<n;i++);
			printf("%d\n",);
	}

int main()
{
setlocale(LC_ALL, "Portuguese");

int n=0;
int opcao;
int sair=1;


while(sair !=2)
{
	printf("------------------------------------------------ # MENU DE ESTRUTURA # ------------------------------------------------\n");
        	printf("\n ~ MENU ~ \n\n");
        	printf("1: listar \n");
			printf("2: inserir \n");
			printf("3: alterar \n");
			printf("4: buscar \n");
			printf("5: excluir\n");
			printf("6: sair \n");
			
			printf("\nEscolha a opção desejada: \n");
			
        	
        	opcao=getch();
        	system("cls");
        	
 
 switch (opcao)  						//Interruptor
 {
	case 6:		 			//Sair
		printf("Fim do programa!");
    	sair=2;
	    break;
	    
	    
	case 1:								//Listar
		system("pause");
		break;
		
		
	case 2:	
		Inserir();				//Inserir
		system("pause");
		
		
	case 3:								//Alterar
	
	
	
	case 4:								//Buscar
	
	
	
	case 5:								//Excluir
	
	
	
	default :printf ("\t\t\t                       ~~~ OPÇÃO INVALIDA ! ~~~\n\n");
			 printf ("\a");	
 }
 	
}

	
	
}

} return 0;


