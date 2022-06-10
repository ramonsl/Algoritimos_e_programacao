#include <stdio.h>
int main(){
    int TAM=15;
    int vet[TAM];

  for (int i = 0; i < TAM; i++){
        printf("Digite o numero\n");
        scanf("%d%*c",&vet[i]);
    }

for (int i = 0; i < TAM; i++){
    if(vet[i]==30){
        printf("O valor 30 está presentente em:%d\n",i);
    }
    }
}