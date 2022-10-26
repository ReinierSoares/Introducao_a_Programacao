#include <stdio.h>
#include <locale.h>	// Necess�rio para a fun��o setlocale
#include <stdlib.h> 	// Necess�rio para as fun��es rand() e srand()
#include <time.h>		// Necess�rio para fun��o time()

int main(void){
	
int i,j; 			// Vari�veis que ajudar�o nas repeti��es
int N;  			// N�mero fornecido pelo usu�rio
int x,y,z;			// Vari�veis para o usu�rio saber se est� perto ou longe do N�mero
int maior=0,menor=0;	// Var�veis para saber o menor e maior n�mero no final
	
setlocale( LC_ALL,"Portuguese");// Necess�rio para usar acentos no programa	
srand(time(NULL));
x=rand()%50+1;		// x � a var�avel que vai armazenar um valor aleat�rio de 0 a 50
	
	
printf("*Jogo da adivinha��o,em qual n�mero estou pensando?*\n");// Mensagem na tela do usu�rio
		for(j=1;j<20;j++)					// Repetir a a��o at� no m�ximo de 20 vezes
	{
printf("\nInsira um N�mero inteiro de 0 a 50: ");// O usu�rio vai digitar um valor N inteiro e positivo
scanf("%d",&N);						// O valor fornecido pelo usu�rio fica na vari�vel N
		
if(N<0||N>50){					// Se N for negativo ou Maior que 50,o programa encerra
	printf("\tN�mero n�o permitido!\n");// Mostra na tela do usu�rio que aquele n�mero nao � permitido
	break;					// Comando pra encerrar o programa,caso a condi��o aconte�a
		} 
		
	else{				// Caso o valor esteja dentro das condi��es,o programa se inicia	
	 for(i=1;i<20;i++){	// La�o de repeti��o para saber no final o maior e menor n�mero
		if(menor==0)	// Se N for igual a 0 ,ent�o:
		menor=N;		// A vari�vel menor ser� o valor de N
				
		  if(N>maior){	// Se N for maior que 0,ent�o	:				
			maior=N;	// a vari�vel Maior ser� N
		}
			 if(N<menor){	// Se N for menor que a vari�vel menor,ent�o :
			menor=N;		// a vari�vel Menor ser� N
		}
		}
	if(N==x)				// Se N � igual a v�riavel x,ent�o:
		{system("color 0a");			// Muda a cor das letras pra verde ao acertar o n�mero
		printf("\tAcertou,o n�mero �: %d\n",x);// Mensagem para o usu�rio dizendo que acertou
		break;					// Ao acertar o n�mero,o programa se encerra
		}
			y=x+10;			// Vari�vel y � a soma de x mais 10
			z=x-10;			// Vari�vel z � a soma de x menos 10
		
		if(N<=y && N>=z)			// Se n for menor ou igual a y e n for maior igual a z:
		{
		system("color 0b");		// A cor das letras ficam azuis
	printf("\tVoce chegou perto\n",x);// Mostra uma mensagem dizendo que o usu�rio chegou perto
		}
			
			
		else					// Sen�o:
		{
			system("color 0c"); 	// A cor das letras ficam vermelhas
			printf("\tEssa foi longe\n");	// Mensagem ao usu�rio dizendo que est� longe da resposta
		}
			
			
	if(j==19)			// Se o usu�rio atingir o limite de 20 tentativas
printf("\n*Limite de tentativas,o n�mero sorteado �: %d!*\n",x);// Aparecer� na tela que as tentativas acabaram 
}
}

printf("\nO n�mero de tentativas foram: %d\n",j);// No final de cada condi��o aparecer� o n�mero de tentativas
printf("O Maior N�mero digitado foi: %d\n",maior);// Aparecer� o maior n�mero digitado pelo usu�rio
printf("O Menor N�mero digitado foi: %d\n",menor);// Aparecer� o menor n�mero digitado pelo usu�rio
	return 0;}
