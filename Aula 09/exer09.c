//Elabore um programa que escreva a tabuada de um número qualquer.

#include <stdio.h>

int main(){
    int n,i;
    printf("Digite o numero da tabuada:\n");
    scanf("%d%*c",&n);
    for(i=1;i<11;i++){
        printf("%d X %d = %d\n",i,n,(n*i) );
    }
}