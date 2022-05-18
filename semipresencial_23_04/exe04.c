//Faça um programa para ler dois números. Se os números forem iguais imprimir a mensagem: "NÚMEROS IGUAIS" e encerrar a execução; caso contrário, imprimir o de maior valor
//https://vimeo.com/711392770/7829d65462
#include <stdio.h>

int main(){
    int num1,num2, maior;
    printf("Digite o numero 1:\n");
    scanf("%d%*c",&num1);
    printf("Digite o numero 2:\n");
    scanf("%d%*c",&num2);
    if(num1==num2){
        printf("Numeores iguais!!!\n");
    }else if(num1>num2){
        printf("Maior valor %d!\n",num1);
    }else{
        printf("Maior valor %d!\n",num2);
    }
}