	#include<stdio.h>
#include <math.h>		// Biblioteca que permite usar potencia��o e raiz


int main()
 {
 	
int   n,produtorio=1,denominador=0;	// Vari�veis para facilitar o c�lculo
int   i,j;					// vari�veis para repeti��o
int   funcaoP;				// A fun��o do Produt�rio
float funcaoS,somatorio=0,resultado; // A fun��o do Somat�rio,a vari�vel que armazena e o valor do resultado.
 
	printf("Insira um valor N inteiro\n ");  // Pede ao usu�rio que insira um valor N inteiro
 	scanf("%d", &n);				   // Armazena na vari�vel n
 	
 	for(i=0; i<=n; i++){ 			// La�o de repeti��o do somat�rio
 		denominador=2*i+1;		// O denominador da fun��o,para facilitar o calculo
 	   funcaoS=pow(i,3)/denominador;	// Fun��o do Somat�rio	
	 	somatorio+=funcaoS ;	     	// Somatorio armazena o valor das somas
	 }
	 
 	for(i=0; i<=n; i++){			// La�o de repeti��o do Produt�rio
	  funcaoP=2*pow(i,2)+1;			// Fun��o do Produt�rio
 		produtorio*= funcaoP ;  	     // Produt�rio armazena o valor dos produtos
 } 	
  
		
 resultado = somatorio + produtorio;	// Resultado faz a soma do somat�rio e produt�rio


 printf("\nA somatoria vale: %0.2f ", somatorio ); // Aparece na tela o valor do somat�rio de n
 printf("\nO produtorio vale: %d   ", produtorio); // Aparece na tela o valor do produt�rio de n	
 printf("\nO resultado vale: %0.2f ", resultado ); // Mostra o resultado da soma do somat�rio e produt�rio
 	return 0;
}


