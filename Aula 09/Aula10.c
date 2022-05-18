
//Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.

#include <stdio.h>

int main(){
    int i,valor;
    int nImpar=0;
    int nPar=0;
    i=0;
    do{
    printf("Digite o valor inteiro\n");
    scanf("%d%*c", &valor);
     if(valor%2==0){
          printf("Numero par\n\n");
          nPar++;
        }else{
           printf("Numero impar\n\n");
           nImpar++;
       }
       printf("\n---------------------\n");
        i++;
    }while (i<10);
    

    printf("Foram executados %d pares\n",nPar);
    printf("Foram executados %d impares\n",nImpar);
    


}