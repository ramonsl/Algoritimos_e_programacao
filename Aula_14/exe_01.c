#include <stdio.h> /*Adição da biblioteca input and output*/
int main(){ 

    int i;
    float nota,media,soma;
    soma=0;
    i=0;
    do
    {
        printf("Digite a nota %d\n", i+1);
        scanf("%f%*c",&nota);
        
        if(nota>=0){
            i++;
            soma=soma+nota;
        }else{
            printf("Encerrando...\n");
            break;
        } 
    } while (nota>=0);
    media=soma/i;
    printf("A média é %f\n",media);
    printf("Foram lidos  %d\n",i);
    



}