#include <stdio.h>

int main(){
int TAMANHO=3;//para testes
int i;
float soma,nota,media;
i=0;
soma=0;
/*
do
{
    printf("Digite a nota %d\n",i+1);
    scanf("%f%*c",&nota);
    soma=soma+nota;
    i++;
} while (i<TAMANHO);
*/

for(i=0;i<TAMANHO;i++){
    printf("Digite a nota %d\n",i+1);
    scanf("%f%*c",&nota);
    soma=soma+nota;
}
media=soma/TAMANHO;
printf("A média é %f",media);


}