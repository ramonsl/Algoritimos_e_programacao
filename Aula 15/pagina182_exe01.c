#include <stdio.h>
int main()
{
    int valores[6];
    int i,pares,impares;
    pares=0;
    impares=0;
    for (i = 0; i < 6; i++)
    {
        printf("Digite %dº posição vetor valor\n", i + 1);
        scanf("%d%*c", &valores[i]);
        if(valores[i]%2==0){
                pares++;
        }else{
            impares++;
        }
    }
        printf("O Total de pares é: %d\n",pares);
        for ( i = 0; i < 6; i++){
            if(valores[i]%2==0){
                printf("%d\n",valores[i]);
            }
        }  
        printf("O Total de impares é: %d\n",impares);
        for ( i = 0; i < 6; i++){
            if(valores[i]%2!=0){
                printf("%d\n",valores[i]);
            }
        }
}