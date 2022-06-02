#include <stdio.h>
int main()
{
    int TAM=3;
    int tem=0;
    int codProdutos[10];
    int qtdProdutos[10];
    int codigoCliente;
    int codProd, qtdProd;
    int i;
    for (int i = 0; i < TAM; i++){
        printf("Digite o Codigo do produto\n");
        scanf("%d%*c",&codProdutos[i]);
        printf("Digite o quantida do produto cod %d\n",codProdutos[i]);
        scanf("%d%*c",&qtdProdutos[i]);
    }
        do
        {
            printf("Digite o Codigo do cliente\n");
            scanf("%d%*c",&codigoCliente);
            if(codigoCliente!=0){
                printf("Digite o Codigo do produto\n");
                scanf("%d%*c",&codProd);
                for (int i = 0; i < TAM; i++)
                {
                   if(codProd==codProdutos[i]){
                       tem=1;
                        printf("Digite o Quantidade do produto %d\n",codProd);
                        scanf("%d%*c",&qtdProd);
                        if(qtdProd<=qtdProdutos[i]){
                            printf("Pedido atendido! Obrigado! Volte sempre");
                            qtdProdutos[i]=qtdProdutos[i]-qtdProd;
                        }else{
                            printf("Não temos estoque! Nossa qtd maxima é %d\n",qtdProdutos[i]);
                        }
                   }                   
                }
                 if (tem!=1){
                       printf("Codigo não existe!\n");
                   }
                
            }
            
        } while (codigoCliente!=0);
        printf("estoque atualizado\n");
        for ( i = 0; i < TAM; i++){
                printf("Produto COD %d  QUantidade:%d\n",codProdutos[i],qtdProdutos[i]);
        }
        
        
        
    
    

}