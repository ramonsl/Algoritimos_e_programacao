#include <stdio.h>

int main(){
    int numero;
    int i=0;
    for(i=0;i<5;i++){
    printf("Digite o numero\n");
    scanf("%d%*c",&numero);
    if(numero>0){
        printf( "Numero positivo\n");
    }else if(numero<0){
        printf("Numero negativo");
    }else{
        printf( "Numero nulo!!!");
    }
    }
}