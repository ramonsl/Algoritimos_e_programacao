#include <stdio.h>
int main()
{
    int TAM=3;
    int codProdutos[]={10,20,30,40,50,60,70,80,90,100};
    int qtdProdutos[]={15,15,15,15,15,15,15,15,15,15};
    int codigoCliente;
    int codProd, qtdProd;
    int i,it, pos=-1;
    do{
        printf("Digite o Código do Cliente\n");
        scanf("%d%*c",&codigoCliente);
        if(codigoCliente!=0){
            printf("Bem-vindo cliente %d\n", codigoCliente);

            printf("Qual codigo você deseja??\n");
            scanf("%d%*c",&codProd);
           
            for ( it = 0; it < 10; it++){
                 if(codProdutos[it]==codProd){
                    pos=it;
                 }
            }
    
            if (pos>-1){
                printf("Qual a quantidade do produto você deseja??\n");
                scanf("%d%*c",&qtdProd);  
                if (qtdProd <= qtdProdutos[pos]){
                    printf("Pedido atendido! Obrigado!\n");
                    qtdProdutos[pos]=qtdProdutos[pos]-qtdProd;
                }else{
                    printf("Não foi possivel atender a demanda\n!");
                }

            }else{
                printf("Codigo inexistente.\n");
            }
            pos=-1;
        }

    } while (codigoCliente!=0);

  printf("Estoque atualizado!\n");
      for ( it = 0; it < 10; it++){
                 printf("Cod %d qtd %d\n", codProdutos[it], qtdProdutos[it]);
     }
    printf("Obrigado!\n");

}