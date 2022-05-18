//Elabore um programa que escreva a tabuada de um número qualquer.

#include <stdio.h>

int main(){
    int n,i;
    n=8;
    for(i=1;i<11;i++){
        printf("%d X %d = %d\n",i,n,(n*i) );
    }
}