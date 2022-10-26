#include<stdio.h>
#include<math.h>	//Biblioteca que permite usar potenciação e raiz

main()
{
int fat,n=6,i,j,k,x,z;	//Variáveis de tipo inteiro


	printf("Insira o Valor de I: ");//Mensagem ao usuário pedindo o valor de I
 	scanf("%d",&i);				//Armazenamento de I
 	
 	printf("Insira o Valor de J: ");//Mensagem ao usuário pedindo o valor de J
 	scanf("%d",&j);				//Armazenamento de J
 	  
 	  x=i+j;				//X será a soma entre i e j para facilitar 
		k=x;				//K é igual a x 
 	if(i==j)				//Se i for igual a j,então:
		
		 for(fat=1;k > 1;k=k-1){//repetição para ter o fatorial do numerador
		 	fat*=k;		//Operação para achar o fat
			 z=fat/x;		//Z será então fat sobre x
		 }
		  	
	    
	if(i>j)				//Se i for maior que j,então:
		z =(pow(i,2)+j);		//z será i ao quadrado mais j
	if(i<j)				//Se i for menor que j,então:
		z=(pow(i,2)+pow(j,3));	//z será i ao quadrado mais j ao cubo
  
      
printf("\n Matriz : \n");
for(i = 0; i < n; i++){	//Laço de repetição para fornecer a matriz
		for(j= 0; j< n;j++) 
		printf("\t%d ", z);//Matriz
			 printf("\n");}
               

	return 0;		 //Fim do programa
}	

