#include <stdio.h>
#include <math.h>							// Biblioteca que permite usar potenciação e raiz

int main(void){
	
int n,fat;								// Variáveis de tipo inteira
float x,y,numerador; 						// Variáveis de tipo float

printf("Insira um valor inteiro e positivo para n:\n");// Mensagem na tela do usuário pedindo o valor de N
	scanf("%d",&n);						 // Armazenando o valor de n fornecido pelo usuário
if(n<0){								// Por ser fatorial,o valor de N não pode ser negativo
 printf("Apenas Valores positivos,tente novamente!\n");// Mensagem na tela do usuário para  que se atente 	
 return 0; // Encerramento do programa
		}									
	else					// Caso seja um valor inteiro e positivo,então:
	{
	printf("Insira um valor inteiro para x:\n"); // Se pedirá o valor da variável x
	scanf("%f",&x);		// Armazenamento do valor de x
	
	numerador = pow(x,n);	// Operação da potencia no numerador 
		
	for(fat = n+1; n > 1; n = n - 1)// Operação de fatorial no denominador n+1!
	fat *= n;							
		
	y=numerador/fat;				// Y é o resultado da operação da potencia divido pelo fat
printf("O resultado eh: %0.2f\n",y);// Aparece o resultado na tela do usuário 
	}

	return 0;							// Fim do programa
		
}
