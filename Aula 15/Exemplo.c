#include <stdio.h>

int main(){

int vetor[10];
int i;
for ( i = 0; i < 10; i++)
{
  printf("Digite o valor do vetor[%d]\n",i);
  scanf("%d%*c",&vetor[i]);
}
for ( i = 0; i < 10; i++)
{
  printf("Valor do vetor[%d]\n",vetor[i]);

}




}