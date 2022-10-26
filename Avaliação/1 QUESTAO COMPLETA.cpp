#include <stdio.h>
#include <locale.h>	// Necessário para a função setlocale
#include <stdlib.h> 	// Necessário para as funções rand() e srand()
#include <time.h>		// Necessário para função time()

int main(void){
	
int i,j; 			// Variáveis que ajudarão nas repetições
int N;  			// Número fornecido pelo usuário
int x,y,z;			// Variáveis para o usuário saber se está perto ou longe do Número
int maior=0,menor=0;	// Varáveis para saber o menor e maior número no final
	
setlocale( LC_ALL,"Portuguese");// Necessário para usar acentos no programa	
srand(time(NULL));
x=rand()%50+1;		// x é a varíavel que vai armazenar um valor aleatório de 0 a 50
	
	
printf("*Jogo da adivinhação,em qual número estou pensando?*\n");// Mensagem na tela do usuário
		for(j=1;j<20;j++)					// Repetir a ação até no máximo de 20 vezes
	{
printf("\nInsira um Número inteiro de 0 a 50: ");// O usuário vai digitar um valor N inteiro e positivo
scanf("%d",&N);						// O valor fornecido pelo usuário fica na variável N
		
if(N<0||N>50){					// Se N for negativo ou Maior que 50,o programa encerra
	printf("\tNúmero não permitido!\n");// Mostra na tela do usuário que aquele número nao é permitido
	break;					// Comando pra encerrar o programa,caso a condição aconteça
		} 
		
	else{				// Caso o valor esteja dentro das condições,o programa se inicia	
	 for(i=1;i<20;i++){	// Laço de repetição para saber no final o maior e menor número
		if(menor==0)	// Se N for igual a 0 ,então:
		menor=N;		// A variável menor será o valor de N
				
		  if(N>maior){	// Se N for maior que 0,então	:				
			maior=N;	// a variável Maior será N
		}
			 if(N<menor){	// Se N for menor que a variável menor,então :
			menor=N;		// a variável Menor será N
		}
		}
	if(N==x)				// Se N é igual a váriavel x,então:
		{system("color 0a");			// Muda a cor das letras pra verde ao acertar o número
		printf("\tAcertou,o número é: %d\n",x);// Mensagem para o usuário dizendo que acertou
		break;					// Ao acertar o número,o programa se encerra
		}
			y=x+10;			// Variável y é a soma de x mais 10
			z=x-10;			// Variável z é a soma de x menos 10
		
		if(N<=y && N>=z)			// Se n for menor ou igual a y e n for maior igual a z:
		{
		system("color 0b");		// A cor das letras ficam azuis
	printf("\tVoce chegou perto\n",x);// Mostra uma mensagem dizendo que o usuário chegou perto
		}
			
			
		else					// Senão:
		{
			system("color 0c"); 	// A cor das letras ficam vermelhas
			printf("\tEssa foi longe\n");	// Mensagem ao usuário dizendo que está longe da resposta
		}
			
			
	if(j==19)			// Se o usuário atingir o limite de 20 tentativas
printf("\n*Limite de tentativas,o número sorteado é: %d!*\n",x);// Aparecerá na tela que as tentativas acabaram 
}
}

printf("\nO número de tentativas foram: %d\n",j);// No final de cada condição aparecerá o número de tentativas
printf("O Maior Número digitado foi: %d\n",maior);// Aparecerá o maior número digitado pelo usuário
printf("O Menor Número digitado foi: %d\n",menor);// Aparecerá o menor número digitado pelo usuário
	return 0;}
