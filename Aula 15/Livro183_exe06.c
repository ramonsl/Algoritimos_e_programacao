#include <stdio.h>
#include <string.h>
int main(){
    int TAM=3;
    float vendas[TAM];
    int percetual[TAM];
    char vendedores[TAM][20];

  for (int i = 0; i < TAM; i++){
        printf("Digite as vendas\n");
        scanf("%f%*c",&vendas[i]);
        printf("Digite o percentual\n");
        scanf("%d%*c",&percetual[i]);
        printf("Digite o nome do vendenor\n");
        scanf("%s%*c",vendedores[i]);
    }

   
    for (int i = 0; i <TAM; i++){
        float valor= (vendas[i]*percetual[i])/100;
        printf("O VENDENDOR %s - Total de vendas %f valor a receber %f\n",vendedores[i],vendas[i],valor );
    }
    int maiorVenda=0;
    int menorVenda=0;
    float totalVenda=0;

     for (int i = 0; i <TAM; i++){
         if(vendas[maiorVenda]<vendas[i]){
             maiorVenda=i;
         }
          if(vendas[menorVenda]>vendas[i]){
             menorVenda=i;
         }
         totalVenda=totalVenda+vendas[i];
        totalVenda+=vendas[i];
      }
    printf("VENDEDOR DO MES: %s\n", vendedores[maiorVenda]);
    printf("VALOR : %f\n", vendas[maiorVenda]);
    printf("PIOR DESEMPENHO DO MES: %s\n", vendedores[menorVenda]);
    printf("VALOR : %f\n", vendas[menorVenda]);
    printf("TOTAL DE VENDAS %f\n",totalVenda);

}