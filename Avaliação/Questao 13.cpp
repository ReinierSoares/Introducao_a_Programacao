#include <stdio.h>
#include <math.h>	// Biblioteca que permite usar potenciação e raiz
#include <locale.h>// Necessário para a função setlocale

int main(void){
	
setlocale(LC_ALL, "");// Necessário para usar acentos no programa
int M1[3][3];// Matriz 1
int M2[3][3];// Matriz 2
int i,j;	// Variáveis de repetição
int soma[5];// Para as somas nas letras B,C e D
int Det[1];	// Variável para a letra E
int Ms[3][3];// Matriz soma,letra F
int Mm[3][3],x,aux;// Matriz multiplicação e váriaveis da letra G
int busca; // Variável para a letra H
	
	
//Letra A	
	printf("Primeira Matriz:\n");	// Mensagem indicando que é a primeira matriz
	
   	 for(i=0; i<3;++i ){		// Laço de repetição 
        for(j=0; j<3;++j){
    	  printf("Digite o numero [%d] [%d]: ",i+1,j+1);// Mensagem ao usuário pedindo os elementos da matriz 1
        	scanf("%d",&M1 [i][j]);}}// Armazena os valores que o usuário colocou
        	
      printf("\nSegunda Matriz:\n");// Mensagem indicando que é a segunda matriz
      
   	 for(i=0; i<3;++i ){		// Laço de repetição
        for(j=0; j<3;++j){
    	  printf("Digite o numero [%d][%d]: ",i+1,j+1);// Mensagem ao usuário pedindo os elementos da matriz 2
        	scanf("%d",&M2[i][j]);}}	// Armazena os valores que o usuário colocou
        		
        	
      printf("\nA)");							
        	
	printf("\n Matriz 1: \n");// Mostra a matriz 1 fornecida pelo usuário
	
	    for( i=0; i< 3; ++i){
            for (j=0; j<3; ++j)
                printf("\t%d ",M1[i][j]);
            printf("\n");}
            
    	printf("\n Matriz 2: \n");// Mostra a matriz 1 fornecida pelo usuário
    	
	    for(i=0; i< 3; ++i){
            for (j=0; j<3; ++j)
                printf("\t%d ",M2[i][j]);
            printf("\n");}

// Letra B
	printf("\nB)A soma dos quadrados dos elementos da coluna 1");
	
	// Soma dos quadrados dos elementos da coluna 1 da matriz 1
	soma[0] = pow(M1[0][0],2)+pow(M1[1][0],2)+pow(M1[2][0],2);
		printf("\n  Matriz 1: %d",soma[0]);	// Mostra o resultado ao usuário
		
	// Soma dos quadrados dos elementos da coluna 1 da matriz 2
	soma[1] = pow(M2[0][0],2)+pow(M2[1][0],2)+pow(M2[2][0],2);
        	printf("\n  Matriz 2: %d\n",soma[1]);// Mostra o resultado ao usuário
        	
// Letra C
	printf("\nC) A soma dos elementos da linha 2");
	
	// A soma dos elementos da linha 2 da matriz 1
	soma[2] = (M1[1][0]+M1[1][1]+M1[1][2]);
		printf("\n Matriz 1: %d",soma[2]);// Mostra o resultado ao usuário
		
	// A soma dos elementos da linha 2 da matriz 2
	soma[3] = (M2[1][0]+M2[1][1]+M2[1][2]);
		printf("\n Matriz 2: %d\n",soma[3]);// Mostra o resultado ao usuário
	
// Letra D
	printf("\nD)Soma da diagonal");
	
	soma[4] = (M1[0][0]+M1[1][1]+M1[2][2]);// Soma da diagonal da matriz 1
		printf("\n Matriz 1: %d",soma[4]);// Mostra o resultado ao usuário
	
	soma[5] = (M2[0][0]+M2[1][1]+M2[2][2]);// Soma da diagonal da matriz 1
        	printf("\n Matriz 2: %d\n",soma[5]);// Mostra o resultado ao usuário
// Letra E
	printf("\nE)O determinante");
	
	//Cálculo para achar o determinante da matriz 1
	Det[0]=(M1[0][0]*M1[1][1]*M1[2][2])+(M1[0][1]*M1[1][2]*M1[2][0])+(M1[0][2]*M1[1][0]*M1[2][1])
      -((M1[0][1]*M1[1][0]*M1[2][2])+(M1[0][0]*M1[1][2]*M1[2][1])+(M1[0][2]*M1[1][1]*M1[2][0]));
      	
     	printf("\n Matriz 1: %d",Det[0]); 	// Mostra o determinante da matriz 1
     	
      //Cálculo para achar o determinante da matriz 2
	Det[1]=(M2[0][0]*M2[1][1]*M2[2][2])+(M2[0][1]*M2[1][2]*M2[2][0])+(M2[0][2]*M2[1][0]*M2[2][1])
      -((M2[0][1]*M2[1][0]*M2[2][2])+(M2[0][0]*M2[1][2]*M2[2][1])+(M2[0][2]*M2[1][1]*M2[2][0]));
      	
      printf("\n Matriz 2: %d\n",Det[1]); // Mostra o determinante da matriz 2
      
// Letra F
	printf("\nF)A matriz soma:\n");
	
	for(i=0;i<3;i++){
	 for(j=0;j<3;j++)
  	  Ms[i][j] = M1[i][j]+M2[i][j];// Somando os elementos correspondentes temos uma terceira matriz
	}		
		for(i=0; i< 3; ++i){
            	for (j=0; j<3; ++j)
               	 printf("\t%d ",Ms[i][j]);// Mostra a matriz soma
			    	printf("\n");}
            		
// Letra G
	printf("\nG)A matriz multiplicação:\n");
	
	for(i = 0; i < 3; i++){
		for(j= 0; j< 3;j++){
		  Mm[i][j]=0;
			for(x = 0; x < 3; x++){
			
				aux +=  M1[i][x]*M2[x][j];
			}
				Mm[i][j] = aux;			
				aux=0;
		}
	}
		for(i = 0; i < 3; i++){
			for(j= 0; j< 3;j++) 
			 printf("\t%d ", Mm[i][j]);//Mostra a matriz multiplicação
			 	 printf("\n");}
	
	
	
return 0;
}
