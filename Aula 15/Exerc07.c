#include <stdio.h>
int main()
{
    //clean code
    int i,maior, posicao;
    int valores[10];

     for (i = 0; i < 10; i++){
        printf("Digite %dº posição vetor valor\n", i + 1);
        scanf("%d%*c", &valores[i]);
    }   
    maior=valores[0];
    for(i=0;i<10;i++){
        if(maior<valores[i]){
            maior=valores[i];
            posicao=i;
        }
    }
     for (i = 0; i < 10; i++){
        printf("VETOR  %dº posição %d\n", i ,valores[i]);
    }
    printf("Maior valor [%d] na posicao [%d]", maior, posicao);
}