#include <stdio.h>
#include <math.h>
int main()
{
    int numero[10];
    int i;
    int quadrado[10];
    i=0;
    for(i=0;i<10;i++)
    {
        printf("digite um numero:%d\n",i);
        scanf("%d%*c", &numero[i]);
        quadrado[i] = (pow(numero[i],2));
    }
    for (i = 0; i < 10; i++)
    {
        printf("o quadrado do numero %.d e:%.d\n", numero[i], quadrado[i]);
    }
}