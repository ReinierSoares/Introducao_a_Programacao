// Biliotecas adotadas: //
#include<stdio.h>   
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct tratamento /*Criacao da struct tratamento*/
{ char nome[40];
  char diagnose[40];
  char tratamento[100];
  int codigo;
  struct tratamento *prox;
  struct tratamento *ant;
  }lista;
 
void listar(lista *atual)/**************funcao listar*********************/
{
lista *p=atual;

if(p==NULL)/*se alista esta vazia imprime um aviso*/
printf("\t\t\t     **Lista Vazia !**\n\n");
else /*caso a lista nao esteja vazia*/
{
 printf("\t\t\t  **IMPRESSAO DA LISTA**\n");
 while(p!=NULL)/*enquanto p nao apontar pra NULL realiza os comandos abaixo*/
 {/*impressao da lista*/
  printf("%s",p->nome);
  printf("%s",p->diagnose);
  printf("%s",p->tratamento);
  printf("Codigo:%d\n\n",p->codigo);
  p=p->prox;/*p passa a apontar para o proximo elemento*/
 }
}

}

lista *inserir(lista*atual)/*************funcao inserir*****************/
{ 

int cod; 
lista *p,*novo;
 p = atual;
 novo = (lista*)malloc(sizeof(lista));

  printf("\t\t\t     **Novo Elemento!**\n");
  printf("\n");
 printf("Nome: \n");
 scanf("%s",&novo->nome);
  
 printf("Diagnose: \n");
 scanf("%s",&novo->diagnose);
 
 printf("Tratamento: \n");
 scanf("%s",&novo->tratamento);
 
 printf("Codigo: ");
 scanf("%d", &cod);
 
p->codigo = cod;

if(p==NULL)
{
 		novo->prox = novo;
   		p = novo;
     }
 else{
      novo->prox = p->prox;
   		p->prox = novo;	

     }
	return (p);	
}

void alterar(lista *atual)/*************funcao alterar ******************/
{
int cod;
lista *p=atual;
char aux[100];

if(p==NULL)/*teste pra verificar se a lista esta vazia*/
printf("\t\t\t     **Lista Vazia !**\n\n");
else/*caso exista elementos na lista*/
{
 printf("Entre com o codigo do tratamento:\n");
 scanf("%d",&cod);/*solicita a entrada do codigo para o usuario*/
 fflush(stdin);
 while((p!=NULL)&&(p->codigo!=cod))/*enquanto nao chega no fim
 da lista ou nao encontrar o codigo em questao*/ 
 p=p->prox;
   
 if(p==NULL)/*verifica se nao encontrou o codigo na lista */
 printf("\t\t\t**Codigo nao encontrado !**\n\n");
 else /*caso tenha encontrado o codigo na lista, inicia a alteracao*/
 {printf("\t\t\t   **Iniciar Alteracao!**\n");
  printf("Nome: ");
  strcpy(p->nome,"Nome: ");
  gets(aux);
  strcat(p->nome,aux);
  strcat(p->nome,"\n");
  
  printf("Diagnose: ");
  strcpy(p->diagnose,"Diagnose: ");
  gets(aux);
  strcat(p->diagnose,aux);
  strcat(p->diagnose,"\n");
  
  printf("Tratamento: ");
  strcpy(p->tratamento,"Tratamento: ");
  gets(aux);
  strcat(p->tratamento,aux);
  strcat(p->tratamento,"\n");
  printf("\n\n");
 }
}

}

lista *remover(lista *atual)/**************funcao remover*******************/
{
lista *anterior=NULL;
lista *p=atual;
int cod;

if(p==NULL)/*testa se a lista esta vazia, caso esteja imprime um aviso*/
printf("\t\t\t     **Lista Vazia !**\n\n");
else/*caso a lista nao esteja vazia*/
{/*solicita a entrada do codigo pelo usuario*/
 printf("Entre com o codigo que deseja remover:\n");
 scanf("%d",&cod);
 while((p!=NULL)&&(p->codigo!=cod))/*executa o comando abaixo enquanto a lista
 nao termina ou nao encontra um elemento com o codigo em questao*/
 {
  anterior=p;/*anterior sempre aponta para o anterior elemento da lista */
  p=p->prox;/*p aponta para o proximo elemento da lista*/
  }

 if(p==NULL)/*se p apontar pra num e porque nao encontrou o respectivo codigo*/
 printf("\t\t\t**Codigo nao encontrado !**\n\n");
 else{/*se encontrou o codigo inicia a remocao*/
     printf("\t\t\t  **Posicao Removida com Sucesso !**\n\n");
     if(anterior==NULL)/*verifica se e o 1ºelemento da lista que sera eliminado*/
     {
      if(p->prox==NULL)
      atual=NULL;
      else
      {                            
      atual=p->prox;
      atual->ant=NULL;
      }
      }
     else/*caso nao seja o 1º elemento da lista*/
     {
      anterior->prox=p->prox;/*anterior->prox aponta para o proximo elemento de
      p, ja que p sera excluido*/
      if(anterior->prox!=NULL)/*verifica se o proximo elemento nao e NULL*/
       p->prox->ant=anterior;/*liga o proximo com o anterior,se nao
        for NULL*/
     }
     free(p); /*exclui o elemento em questao*/
     } 
}
return(atual);/*retorna a lista*/

}

lista *desaloca(lista *alocada)/************funcao desaloca****************/
{
lista *p=alocada,*aux;
if(alocada!=NULL)/*testa se a lista esta ou nao vazia*/
{
 while(p!=NULL)/*se a lista nao estiver vazia percorre a lista ate 
 chegar em NULL*/
 {
  aux=p->prox;/*aux sempre aponta para o proximo elemento de p*/
  free(p);/*desaloca o  elemento que p aponta*/
  p=aux;/*p agora aponta para o mesmo elemento de aux*/
 }

}
return p;
}

void salvar(lista* atual)/*funcao salvar no arquivo*/
{
int n;
FILE *fp;/* ponteiro usado para manipular o arquivo*/
char final='$';/*caracter usado para marcar as estruturas*/
lista* p=atual;/*ponteiro do tipo lista que recebe atual*/

/*system("cls");*/

if(p==NULL) /* Realiza as operações abaixo se a lista não estiver vazia */
printf("\t\t\t   Gravacao Impossivel!!\n \
\t\t\t     **Lista Vazia !**\n\n"); /* Aviso de lista vazia */ 
else
{
 fp=fopen("Lista_rest.txt","w");/*abre ou cria um arquvo pra gravacao*/
 if(!fp)/*caso tenha ocorrido algum erro acima*/
 printf("\t\t\tErro ao abrir o arquivo !!\n\n");
 else/*caso nao tenha ocorrido erro */
 {
 printf("\t\t\tSalvo no arquivo Questao 1 !!\n\n");
  while(p!=NULL)/*executa enquanto nao termina a lista*/
  {
   /*passa os campos da lista para o arquivo*/                        
   fputs(p->nome,fp);
   fputs(p->diagnose,fp);
   fputs(p->tratamento,fp);
   fprintf(fp,"Codigo: %d\n\n",p->codigo);
   fprintf(fp,"%c\n",final);/*coloca o identificador*/
   
   p=p->prox;/*passa para a proxima estrutura*/
   
  }
  fclose(fp);/*FECHA O ARQUIVO*/
 }
}
}

lista* lerarquivo(lista* atual)/*funcao ler arquivo*/
{

FILE *fp;/*ponteiro usado para manipular o arquivo*/
int i=0,total=0,encontrado=0,x;
char c,lin[100],marca[100];
lista* p=atual,*novo=NULL;/*ponteiro do tipo lista que serao usados*/
 
fp=fopen("Lista_rest.txt","r");/*tenta abrir o arquivo pra leitura*/
 
if (fp!=NULL)/*caso tenha aberto o arquivo*/
{

 while((c=getc(fp))!=EOF)/*PERCORRER TODOS OS CARACTERES DO ARQUIVO TEXTO*/
 {
  if(c=='$')/*caso encontre o caracter separador de estrutura*/
  {
   encontrado=1;
   total++;/*conta o numero de estruturas*/
  }
 }

fseek(fp,0,0);/*POSICIONA O PONTEIRO NO COMEÇO DO ARQUIVO*/

/*PEGA OS DADOS DO ARQUIVO PARA AMOSTRAR NO VIDEO*/
 if(encontrado=1)
 {
  printf("\t\t\t  **IMPRESSAO DO ARQUIVO**\n");
  for(i=1;i<=total;i++)
  {
   novo = (lista*) malloc(sizeof(lista));/*ponteiro do tipo lista que ira receber
   as informacoes do arquivo*/
  
   fgets(lin,60,fp);/*ler toda a linha do arquivo na ordem e armazena na string 
   lin*/
   strcpy(novo->nome,lin);/*passa string lin para a lista novo de campo nome*/
   printf("%s",novo->nome);/*imprime na tela esse nome*/
   
   fgets(lin,60,fp);/*ler toda a linha do arquivo na ordem e armazena na string 
   lin*/
   strcpy(novo->diagnose,lin);/*passa string lin para a lista novo de campo
    diagnóstico*/
   printf("%s",novo->diagnose);/*inprime na tela essa enfermidade-doença*/

   fgets(lin,60,fp);/*ler toda a linha do arquivo na ordem e armazena na string 
   lin*/
   strcpy(novo->tratamento,lin);/*passa string lin para a lista novo de campo
    tratamento da doença*/
   printf("%s",novo->tratamento);/*inprime na tela esse tratamento adotado*/
   
   fgets(marca,8,fp);/*ler toda a linha do arquivo na ordem e armazena na string 
   marca*/
   fscanf(fp,"%d",&x);/*armazena o codigo da estrutura na variavel x*/
   novo->codigo = x;/*passa o valor da variavel x para o campo codigo da estrutura*/
   printf("Codigo: %d\n\n",x);/*imprime na tela o codigo */
    
    /*passa para as proximas linhas do arquivo*/
   fgets(marca,10,fp);
   fgets(marca,10,fp);
   fgets(marca,10,fp);
   fgets(marca,10,fp);
   if(p==NULL)/* rverificacao se a lista ta vazia */
   {
    novo->ant=NULL; /* ver se o elemento anterio estar vazia */
    novo->prox=NULL; /* tambem verifica se o proximo está vazia */
   }
   else/* Caso a lista nao estiver vazia vai entra nesse laço */
   {
    novo->prox=p; /* o próximo elemento será o anteriormente adicionado */
    novo->ant=NULL; /* e o anterior será vazio. */
    p->ant=novo;  /* O novo elemento se tornará antigo. */
   }
   p=novo;

 }
 fclose(fp);/*fecha o arquvo*/
 
}
}
else/*caso o arquivo nao exista*/
printf("\t\t\t**Arquivo inexistente !!**\n\n");

return p;/*retorno de p*/
}

void excluirarquivo()/*funcao excluir arquivo*/
{
FILE *fp;/*ponteiro usado para manipular o arquivo*/
fp=fopen("Lista_rest.txt","r");/*tenta abrir o arquivo para leitura*/

if(!fp)/*se nao conseguiu abrir dar um aviso*/
printf("\t\t\t **Arquivo inexistente !!**\n\n");
else/*caso tenha conseguido abrir*/
{
fclose(fp); /*fecha o arquivo*/    
printf("\t\t\t  **Arquivo Excluido !!**\n\n");
remove("Lista_rest.txt");/*remove o arquivo*/
}
}

/*****************************************************************************/

main()/**********execucao do programa *********************/
{
	system("color 0B");
lista *atual=NULL;/*ponteiro do tipo lista que sera usado nas 
operacoes com a lista*/
char opcao;/*usado para ler as opcoes do usuario*/

do{/*inicia o menu de opcoes e de funcoes*/

printf("   _______________* REGISTRO DO PACIENTE*______________\
\n");
printf("\n\n *MENU*\n\n");
printf("L:Listar \nI:Inserir \nA:Alterar \nE:Excluir\nR:Abrir  arquivo\
\nQ:Excluir arquivo\nW:Salvar em arquivo \nS:Sair\n\n"); 

opcao=getch();
system("cls");

switch(opcao)
  {/*chamada das respectivas funcoes*/
   case 'L': case 'l': listar(atual); break;
   case 'I': case 'i': atual=inserir(atual);break;
   case 'A': case 'a': alterar(atual);break;
   case 'E': case 'e': atual=remover(atual);break;
   case 'W': case 'w': salvar(atual);break;
   case 'R': case 'r': atual=lerarquivo(atual);break;
   case 'Q': case 'q': excluirarquivo();break;
   case 'S': case 's':desaloca(atual);break;/*desaloca a lista atual*/
   default :printf("\t\t\t   **Opcao Invalida !**\n\n");
   printf("\a");
  }
 
fflush(stdin);             
  }while((opcao!='S')&& (opcao!='s')); /*condicao de execucao do programa*/
               
}

