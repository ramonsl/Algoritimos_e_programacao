
//Efetue um programa que mostre todos os números inteiros ímpares situados na faixa de 1000 a 1500. Esse algoritmo deve ser feito duas vezes uma usando o FOR,WHILE;
#include <stdio.h>
int main(){
int nInicial, nFinal;
printf("Digite numero inicial");
scanf("%d%*c",&nInicial);
printf("Digite numero Final");
scanf("%d%*c",&nFinal);

for(int i=nInicial;i<nFinal;i++){
    if(i%2!=0){
        printf("Numero impar:%d\n",i);
    }

}
}
