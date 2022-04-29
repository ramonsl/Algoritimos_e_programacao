#include<stdio.h>
int main(){
    float n1, n2;
    printf("Digite o primeiro numero:\n");
    scanf("%f%*c",&n1);
    printf("Digite o segundo numero:\n");
    scanf("%f%*c",&n2);
    if (n1<n2)
    {
        printf("o menor numero é %.1f.\n",n1);
    }
    else if (n2<n1)
    {
        printf("O menor numero é %.1f.\n",n2);
    }
    else
    {
        printf("Os numeros sao iguais.\n");
    }
}