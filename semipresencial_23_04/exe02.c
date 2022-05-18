//Faça um programa para determinar se uma pessoa é maior ou menor de idade.
//https://vimeo.com/711388346
#include <stdio.h>

int main(){
int idade;
    //18 anos
    printf("Digite a sua idade");
    scanf("%d%*c",&idade);
    if(idade>=18){
        printf("Você é maior de idade\n");
    }else{
         printf("Você é menor de idade\n");
    }
   
}