#include <stdio.h>

int main(){
 // Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE
int numero,soma;
soma=0;
int i=0;
while (i<10){
    printf("Digite o numero %d\n",i+1);
    scanf("%d%*c",&numero);
    soma=numero+soma;
    i++;
}
printf("A soma é:%d",soma);
/*
char ch;
scanf("%c%*c",&ch);
if(ch=='s')*/

}