//Elabore um programa que leia dois números e some 100 ao maior valor e apresente o resultado.
// video de correção https://vimeo.com/711365670

#include <stdio.h>

int main(){
    int num1,num2, maior;
    printf("Digite o valor de Numero 1");
    scanf("%d%*c",&num1);
    printf("Digite o valor de Numero 2");
    scanf("%d%*c",&num2);
    
    if(num1>num2){
        maior=num1+100;
        printf("O resultado é %d",maior);
    }else if(num2>num1){
        maior=num2+100;
        printf("O resultado é %d",maior);
    }else{
        printf("Valores iguais.");
    }
}