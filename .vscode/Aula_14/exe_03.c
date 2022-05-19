#include <stdio.h> /*Adição da biblioteca imput and output*/
int main(){ 

    int n;
do
{
    printf("Digite o valor a ser testado\n");
    scanf("%d%*c",&n);
    if(n<=0){
        break;
    }else{
        if(n%2==0){
            printf("Numero par\n");
        }else{
            printf("Numero impar\n");
        }
    }
    
} while (n>0);

   
}