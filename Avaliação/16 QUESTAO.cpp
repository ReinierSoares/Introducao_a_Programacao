#include<stdio.h>
#include<math.h>	//Biblioteca que permite usar potencia��o e raiz

main()
{
int fat,n=6,i,j,k,x,z;	//Vari�veis de tipo inteiro


	printf("Insira o Valor de I: ");//Mensagem ao usu�rio pedindo o valor de I
 	scanf("%d",&i);				//Armazenamento de I
 	
 	printf("Insira o Valor de J: ");//Mensagem ao usu�rio pedindo o valor de J
 	scanf("%d",&j);				//Armazenamento de J
 	  
 	  x=i+j;				//X ser� a soma entre i e j para facilitar 
		k=x;				//K � igual a x 
 	if(i==j)				//Se i for igual a j,ent�o:
		
		 for(fat=1;k > 1;k=k-1){//repeti��o para ter o fatorial do numerador
		 	fat*=k;		//Opera��o para achar o fat
			 z=fat/x;		//Z ser� ent�o fat sobre x
		 }
		  	
	    
	if(i>j)				//Se i for maior que j,ent�o:
		z =(pow(i,2)+j);		//z ser� i ao quadrado mais j
	if(i<j)				//Se i for menor que j,ent�o:
		z=(pow(i,2)+pow(j,3));	//z ser� i ao quadrado mais j ao cubo
  
      
printf("\n Matriz : \n");
for(i = 0; i < n; i++){	//La�o de repeti��o para fornecer a matriz
		for(j= 0; j< n;j++) 
		printf("\t%d ", z);//Matriz
			 printf("\n");}
               

	return 0;		 //Fim do programa
}	

