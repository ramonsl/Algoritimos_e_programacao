
//Faça um programa para ler 10 valores inteiros. 
//Para cada valor fornecido escrever uma
// mensagem que indica se cada valor fornecido
// é PAR ou ÍMPAR.
//mostre quantos pares e impares foram digitados.
//motre a soma dos pare e dos impares
#include <stdio.h>
int main(){
    int numero;
    int cont, cPar,cImpar,aPar,aImpar;
    cPar=0;
    cImpar=0;
    cont=0;
    aPar=0;
    aImpar=0;
    do
    {
        printf( "%d - Digite o numero \n",cont+1);
        scanf("%d%*c",&numero);
        if(numero==0){
            printf( "Numero nulo\n");
        }else if(numero%2==0){
            cPar++;
            aPar=aPar+numero;
            printf( "Numero par\n");
        }else{
            cImpar++;
            aImpar+=numero;
            printf( "Numero impar\n");
        }
        cont++;
    } while (cont<10);
    

    printf("Foram digitados %d pares\n", cPar);
    printf("Foram digitados %d impares\n", cImpar);
    printf("O acumulado de pares é %d \n", aPar);
    printf("O acumulado de impares é %d \n", aImpar);
    


}
