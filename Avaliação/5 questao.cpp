#include <stdio.h>
#include <math.h>							// Biblioteca que permite usar potencia��o e raiz

int main(void){
	
int n,fat;								// Vari�veis de tipo inteira
float x,y,numerador; 						// Vari�veis de tipo float

printf("Insira um valor inteiro e positivo para n:\n");// Mensagem na tela do usu�rio pedindo o valor de N
	scanf("%d",&n);						 // Armazenando o valor de n fornecido pelo usu�rio
if(n<0){								// Por ser fatorial,o valor de N n�o pode ser negativo
 printf("Apenas Valores positivos,tente novamente!\n");// Mensagem na tela do usu�rio para  que se atente 	
 return 0; // Encerramento do programa
		}									
	else					// Caso seja um valor inteiro e positivo,ent�o:
	{
	printf("Insira um valor inteiro para x:\n"); // Se pedir� o valor da vari�vel x
	scanf("%f",&x);		// Armazenamento do valor de x
	
	numerador = pow(x,n);	// Opera��o da potencia no numerador 
		
	for(fat = n+1; n > 1; n = n - 1)// Opera��o de fatorial no denominador n+1!
	fat *= n;							
		
	y=numerador/fat;				// Y � o resultado da opera��o da potencia divido pelo fat
printf("O resultado eh: %0.2f\n",y);// Aparece o resultado na tela do usu�rio 
	}

	return 0;							// Fim do programa
		
}
