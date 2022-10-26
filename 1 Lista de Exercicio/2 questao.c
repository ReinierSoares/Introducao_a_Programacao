#include <stdio.h>

main()
{
    float na,n1,n2,n3,m;
    printf("Aluno:");
scanf("%s",&na);
    
    printf("1 nota:");
scanf("%f",&n1);

    printf("2 nota:");
scanf("%f",&n2);

    printf("3 nota:");
scanf("%f",&n3);

m = (n1+n2+n3)/3;

printf("Média de %s:%0.1f\n",m,na);

    return 0;
}
    
