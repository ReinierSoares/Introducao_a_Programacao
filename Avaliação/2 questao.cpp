	#include<stdio.h>
#include <math.h>		// Biblioteca que permite usar potenciação e raiz


int main()
 {
 	
int   n,produtorio=1,denominador=0;	// Variáveis para facilitar o cálculo
int   i,j;					// variáveis para repetição
int   funcaoP;				// A função do Produtório
float funcaoS,somatorio=0,resultado; // A função do Somatório,a variável que armazena e o valor do resultado.
 
	printf("Insira um valor N inteiro\n ");  // Pede ao usuário que insira um valor N inteiro
 	scanf("%d", &n);				   // Armazena na variável n
 	
 	for(i=0; i<=n; i++){ 			// Laço de repetição do somatório
 		denominador=2*i+1;		// O denominador da função,para facilitar o calculo
 	   funcaoS=pow(i,3)/denominador;	// Função do Somatório	
	 	somatorio+=funcaoS ;	     	// Somatorio armazena o valor das somas
	 }
	 
 	for(i=0; i<=n; i++){			// Laço de repetição do Produtório
	  funcaoP=2*pow(i,2)+1;			// Função do Produtório
 		produtorio*= funcaoP ;  	     // Produtório armazena o valor dos produtos
 } 	
  
		
 resultado = somatorio + produtorio;	// Resultado faz a soma do somatório e produtório


 printf("\nA somatoria vale: %0.2f ", somatorio ); // Aparece na tela o valor do somatório de n
 printf("\nO produtorio vale: %d   ", produtorio); // Aparece na tela o valor do produtório de n	
 printf("\nO resultado vale: %0.2f ", resultado ); // Mostra o resultado da soma do somatório e produtório
 	return 0;
}


