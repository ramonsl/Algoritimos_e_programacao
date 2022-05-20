//Faça um programa que leia um número N, 
//e realize a soma dos números de 1 a N. 
//Ao final, deve-se escrever o resultado. Esse algoritmo deve ser feito duas vezes uma usando o While e Do-While

#include <stdio.h>

int main(){

    int numero;
    int soma=0;
    int i=1;
    printf("Digite o numero\n");
    scanf("%d%*c",&numero);
    do{
        soma=soma+i;
        i++;
    }while (i<=numero);
   

    printf("A soma é:%d", soma);

 //segunda forma

    printf("Digite o numero\n");
    scanf("%d%*c",&numero);
    soma=0;
    i=1;
    while (i<=numero){
        soma=soma+i;
        i++;
    }
   

    printf("A soma é:%d", soma);
   
}