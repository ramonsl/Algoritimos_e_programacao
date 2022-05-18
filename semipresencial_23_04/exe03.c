//Faça um programa para ler dois valores numéricos e apresentar a diferença do maior pelo menor. 
//https://vimeo.com/711389865
#include <stdio.h>

int main(){
    int num1,num2, dif;

    printf("Digite o numero 1:\n");
    scanf("%d%*c",&num1);
    printf("Digite o numero 2:\n");
    scanf("%d%*c",&num2);

    if(num1>num2){
        dif=num1-num2; 
    }else{
         dif=num2-num1; 
    }
    printf("A diferença do maior pelo menor é:%d\n",dif);

}