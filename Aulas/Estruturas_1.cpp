#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Dados
{
 char nome[15];
 int idade;
 int ano_nasc;	
};

main()
{

struct Dados inf[3];

strcpy(inf[0].nome,"Francisco");
inf[0].idade = 23;
inf[0].ano_nasc = 1998;


printf("Oi %s, voce tem %d anos e nasceu em %d", inf[0].nome, inf[0].idade, inf[0].ano_nasc);

printf("\n");


strcpy(inf[1].nome,"Gustavo");
inf[1].idade = 19;
inf[1].ano_nasc = 2001;


printf("Oi %s, voce tem %d anos e nasceu em %d", inf[1].nome, inf[1].idade, inf[1].ano_nasc);

printf("\n");


strcpy(inf[2].nome,"Edio");
inf[2].idade = 28;
inf[2].ano_nasc = 1992;


printf("Oi %s, voce tem %d anos e nasceu em %d", inf[2].nome, inf[2].idade, inf[2].ano_nasc);

	
	
}
