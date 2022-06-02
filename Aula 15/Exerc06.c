#include <stdio.h>
int main()
{
    int valores[10];
    int i,maior,menor;
     for (i = 0; i < 10; i++)
    {
        printf("Digite %dº posição vetor valor\n", i + 1);
        scanf("%d%*c", &valores[i]);
    }   

    maior=valores[0];
    menor=valores[0];

    for(i=0;i<10;i++){
        if(maior<valores[i]){
            maior=valores[i];
        }
        if (menor> valores[i]){
            menor=valores[i];
        }
    }
        printf("O Maior é : %d\n",maior);
        printf("O Menor é : %d\n",menor);


}