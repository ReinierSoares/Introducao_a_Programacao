#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CLIENTES 5
#include <locale.h>
#include <string.h>
 
// 1. Declarar a estrutura
struct dados {
    char nome[30];
    int idade;
    int nascimento;
};
 
struct dados clientes[MAX_CLIENTES];
int i;
int n_clientes = 0;
 
// Função para cadastrar um novo cliente no vetor clientes
void cadastraDados(struct dados cliente) {
    clientes[n_clientes] = cliente;
    n_clientes++;
}
 
// Função para ler as informações do novo cliente
// Retorna um cliente com os dados preenchidos.
struct dados leDados() {
    struct dados auxiliar;
    printf("\n\n");
    printf("Nome: ");
    fflush(stdin);
    fgets(auxiliar.nome, 50, stdin);
    
    printf("Idade: ");
    fflush(stdin);
    scanf("%d", &auxiliar.idade);
    
    
	printf("Data de Nascimento dd/mm/aaaa: ");
    fflush(stdin);
    scanf("%d", &auxiliar.nascimento);
    
	return auxiliar;
}
// Função para imprimir todos os clientes na tela
void ListaDados() {
    for (i=0; i<n_clientes; i++) {
        printf("\nCodigo: %d\n", i+1);
        printf("Nome..: %s\n", clientes[i].nome);
		printf("Idade.: %d\n", clientes[i].idade);
        printf("Nascimento..: %d", clientes[i].nascimento);
        printf("\n+++++++++++++++++++\n");
        
    }
}
 
// Função para exibir o menu de opções
int menu() {
    int opcao;
 
  	printf("\n ~ MENU ~ \n\n");
        	printf("1: listar \n");
			printf("2: inserir \n");
			printf("3: alterar \n");
			printf("4: buscar \n");
			printf("5: excluir\n");
			printf("6: sair \n");
			
			printf("\nEscolha a opção desejada: \n");
			scanf("%d", &opcao);

        	system("cls");
    
 
    		return opcao;
}
 
// Função para remover um cliente do vetor
void excluir(int posicao) {
    int indice = posicao - 1;
    int i = 0;
 
    if ((posicao < 1) || (posicao > n_clientes)) {
        printf("\nPosicao invalida!\n");
        return;
    }
 
    // 1. caso - remover no final do vetor
    if (posicao == n_clientes) {
        n_clientes--;
        return;
    }
 
    // 2. remove qualquer outra posicao
    for (i=indice; i<n_clientes; i++) {
        clientes[i] = clientes[i+1];
    }
    n_clientes--;
}

int BuscaIdade(int busca){
int i;

	for(i=0;i<n_clientes;i++){
		if(busca==clientes[i].idade)
			return i;
}
	return -1;
}
 
// Função principal, aqui começa o programa.
int main()
{
	setlocale(LC_ALL, "Portuguese");
    int opcao_selecionada;
    int rem = 0;
    struct dados novo_dado;
    int r;
 
    do {
        opcao_selecionada = menu();
        switch(opcao_selecionada) {
            case 6: 											// sair	
			break;
			
 			case 1:												// código para exibir
			 if(n_clientes==0)
			 	printf("Não tem nenhum dado cadastrado!\n");
			 else
			 	ListaDados();
			 	system("pause");
			 	system("cls");
                break;			
			 
			 	 
            case 2: 												// código para inserir
			 if (n_clientes == MAX_CLIENTES) {
                    printf("\nBANCO DE DADOS LOTADO!\n");
                    break;
                }											
                novo_dado = leDados();	
                cadastraDados(novo_dado);
                system("cls");
                break;
                
            case 3:													//Alterar
	
	
		
			case 4:													//Buscar
				//printf("Digite a Idade que queira buscar: ");
				//scanf("%d",&idade);	
				//BuscaIdade(idade);
				//printf("Digite a Idade que queira buscar:%d ",i);
				
		
                
            case 5: 												// código para excluir
                printf("Digite a posicao que deseja excluir: ");
                scanf("%d", &r);
                excluir(r);
                
           
            default:
                printf("----- OPCAO INVALIDA -----");
        }
    }
    while (opcao_selecionada != 0);
    return 0;
}
