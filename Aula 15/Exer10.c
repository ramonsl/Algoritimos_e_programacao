#include <stdio.h>
int main()
{
    //clean code
    float soma,media;
    soma=0;
    float notas[15];
    int i=0;
do
{
    printf("Digite a nota %dº posição vetor\n", i + 1);
    scanf("%f%*c", &notas[i]);
    i++;
} while (i<15);

    for(i=0;i<=15;i++){
        soma+=notas[i];
    }
    media=soma/15;
  
    printf("A média é:%f",media);


}
