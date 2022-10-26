#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

    struct dados
{
	    char nome[20];
	    int idade;
	    int dia_nasc;
	    char mes_nasc;
	    int ano_nasc;
	    int i;
};

    void inserir (struct dados *p, int n)
{
	    if (n==1)
	    p= (struct dados *)malloc(n*sizeof(struct dados));
	    else
	    p= (struct dados *)realloc(p, n*sizeof(struct dados));
	    
	        printf("Por gentileza entre com o seu primeiro nome: \n");
	        scanf("%s" , &p[n-1].nome);
	
	        printf("Por gentileza entre com a sua idade: \n" ,p[n-1].nome);
	        scanf("%d" ,&p[n-1].idade);
	
	        printf("Por gentileza entre com o seu dia de nascimento: \n" ,p[n-1].nome);
	        scanf("%d" ,&p[n-1].dia_nasc);
	
	        printf("Por gentileza entre com o seu mês de nascimento: \n" ,p[n-1].nome);
	        scanf("%s" ,&p[n-1].mes_nasc);
	
	        printf("Por gentileza entre com o seu ano de nascimento: \n" ,p[n-1].nome);
	        scanf("%d" ,&p[n-1].ano_nasc);
		
}

    void listar(struct dados *p, int n)
{
        for(int i=0; i<n ;i++)
            printf("Olá %s, você tem %d anos e nasceu no dia %d de %s de %d.\n", p[i].nome, p[i].idade, p[i].dia_nasc, p[i].mes_nasc, p[i].ano_nasc);

}

    main()
{ 
        setlocale(LC_ALL, "Portuguese");

        struct dados *inf;
        int n=0;
        system("color 0A");
        char opcao;
        
        do
{
        	printf("------------------------------------------------ # MENU DE ESTRUTURA # ------------------------------------------------\n");
        	printf("\n ~ MENU ~ \n\n");
        	printf("L: listar \nI: inserir \nA: alterar \nB: buscar \nE: excluir\nS: sair \n\n");
        	
        	opcao=getch();
        	system("cls");
        	
        	switch(opcao)
{
	            case 'I': case 'i': {
	            	                n++;
					                inserir(inf, n); break;
		                
				case 'L': case 'l': listar(inf,n);break;
			//	case 'A': case 'a':
			//	case 'B': case 'b':
			//	case 'E': case 'e':
				
				 break;
				default :printf ("\t\t\t                       ~~~ OPÇÃO INVALIDA ! ~~~\n\n");
				         printf ("\a");					
}
}
}
    while ((opcao!= 'S') && (opcao!='s'));
}
