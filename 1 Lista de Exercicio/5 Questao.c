#include <stdio.h> 
#include <stdlib.h>
int main (void)
{
  int n1, n2;
  int soma, subtracao, multiplicacao,divisao;
  
  printf("Operaçoes Matématicas\n\n");
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);
  printf("Digite outro valor: ");
  scanf("%d", &n2);
  
  soma = n1 + n2;
  printf("\nSoma = %d", soma);
  
  subtracao = n1 - n2;
  printf("\nSubtracao = %d", subtracao);
  
  multiplicacao = n1 * n2;
  printf("\nMultiplicacao = %d", multiplicacao);
  
  divisao = n1 / n2;
  printf("\nDivisao = %d\n", divisao);
  system("pause");
  return (0); 
}