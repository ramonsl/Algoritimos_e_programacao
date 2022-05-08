#include <stdio.h>

int main(){
    int idade, falta;
    printf("Digite a sua idade:\n");
    scanf("%d%*c",&idade);
    if(idade>=18){
        printf("Você é de maior, já pode ir no clube dos coras. Sua idade é: %d",idade);
    }else{
        falta= 18-idade;
        printf("Você é de menor %d, Falta %d para ir ao clube dos Coroas",idade,falta);
    }
}
