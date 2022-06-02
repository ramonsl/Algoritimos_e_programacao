//4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições  X e Y . 

#include <stdio.h>
int main()
{
    int valores[8];
    int i,X,Y,soma;
   
    for (i = 0; i < 8; i++)
    {
        printf("Digite %dº posição vetor valor\n", i + 1);
        scanf("%d%*c", &valores[i]);
    }
    do{
    printf("Digite X\n");
    scanf("%d%*c",&X);
    }while (X>=8);
 
    
    do
    {
    printf("Digite Y\n");
    scanf("%d%*c",&Y);
    } while (Y>=8);
    
    

    printf("Valor Posicao X %d é [%d]\n",X,valores[X]);
    printf("Valor Posicao Y %d é [%d]\n",Y,valores[Y]);

    soma=valores[X]+valores[Y];
        printf("Soma  %d \n",soma);

}