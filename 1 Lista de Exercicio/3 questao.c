#include<stdio.h>
#include<math.h>

int main()
{
int numero;

scanf("%d",&numero);

if (numero >= 0){   //se o numero for maior ou igual a 0 ele é positivo
printf("o Número é positivo\n"); 
}
else if (numero < 0) //se o numero for menor que 0 ele é negativo
printf("o Número é negativo\n");

return 0;
}