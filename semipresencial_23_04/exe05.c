//Elabore um programa que lê dois valores e escreve cada um com a mensagem: “É múltiplo de 2” ou “Não é múltiplo de dois”.

//https://vimeo.com/711397808


#include <stdio.h>

int main(){
    int num1,num2;
    printf("Digite o numero 1:\n");
    scanf("%d%*c",&num1);
    printf("Digite o numero 2:\n");
    scanf("%d%*c",&num2);
    if(num1%2==0){
        printf("O Numero 1 %d Multiplo de 2\n", num1);
    }else{
        printf("O Numero 1 %d não Multiplo de 2\n",num1);
    }

   if(num2%2==0){
        printf("O Numero 2 %d Multiplo de 2\n", num2);
    }else{
        printf("O Numero 2 %d não Multiplo de 2\n",num2);
    }
}