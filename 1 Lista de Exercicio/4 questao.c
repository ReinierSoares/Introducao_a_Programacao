#include <stdlib.h>
#include <stdio.h>
int main ()
{
int n;
printf("Digitar um numero inteiro: ");
scanf("%d",&n);
if(n%2==0) //se a divisão não sobrar resto o número é par
{
printf("Par");
}
else             //se sobrar resto é ímpar
printf("Ímpar");

return 0;
}