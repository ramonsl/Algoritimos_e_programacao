#include <stdio.h>

int main(){
 // Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE
int numero,soma;
soma=0;
for(int i=0;i<10;i++){
printf("Digite o numero %d\n",i+1);
scanf("%d%*c",&numero);
soma=numero+soma;
}
printf("A soma é:%d",soma);


}