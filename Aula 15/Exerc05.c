#include <stdio.h>
int main()
{
    int valores[10];
    int i,pares;
    pares=0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite %dº posição vetor valor\n", i + 1);
        scanf("%d%*c", &valores[i]);
        if(valores[i]%2==0){
                pares++;
        }
        printf("O mumero de pares é: %d",pares);
    }
}