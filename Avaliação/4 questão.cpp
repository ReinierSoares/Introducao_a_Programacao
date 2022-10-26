
#include <stdio.h>
 
int main()
{
	int fatorial, n;     //N é fornecido pelo usuario e Fatorial fará o cálculo do fatorial do numero digitado
		
		printf(" Insira um numero para calcular seu fatorial: ");    //O usuário irá colocar um número
	
		scanf("%d", &n);
 
	for(fatorial = 1; n > 1; n = n - 1)      //Laço para ir diminuir em 1 o valor de N
		
		fatorial = fatorial * n;               
 
		printf(" \nO Fatorial eh: %d ", fatorial);
	
	return 0;
}
