//Elabore um programa que escreva a tabuada de um número qualquer.

#include <stdio.h>

int main(){
    int numero,i;

    numero=9;
    for ( i = 1; i <=10; i++)
    {
        printf(" __________________\n");
        printf("|%d  X  %d = %d    |\n", i,numero,(i*numero));
        printf(" __________________\n");
    }
    
}