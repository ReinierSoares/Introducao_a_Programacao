
#include <stdio.h>
 
int main()
{
	int fatorial, n;     //N � fornecido pelo usuario e Fatorial far� o c�lculo do fatorial do numero digitado
		
		printf(" Insira um numero para calcular seu fatorial: ");    //O usu�rio ir� colocar um n�mero
	
		scanf("%d", &n);
 
	for(fatorial = 1; n > 1; n = n - 1)      //La�o para ir diminuir em 1 o valor de N
		
		fatorial = fatorial * n;               
 
		printf(" \nO Fatorial eh: %d ", fatorial);
	
	return 0;
}
