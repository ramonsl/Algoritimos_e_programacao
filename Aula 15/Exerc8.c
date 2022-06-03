#include <stdio.h>
int main()
{
    //clean code
    int i, numero;
    int valores[6];
    i=0;
do
{
    printf("Digite %dº posição vetor valor\n", i + 1);
    scanf("%d%*c", &numero);

        valores[i]=numero;
        i++;
    
} while (i<6);

    for(i=5;i>=0;i--){
        printf("%d\n", valores[i]);
    }


}
