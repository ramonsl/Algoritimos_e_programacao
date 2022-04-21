#include <stdio.h>

int main(){
    int mes;
    printf("Digite o mês:\n");
    scanf("%d%*c",&mes);

    if(mes==1){
        printf("Janeiro!");
    }else if(mes==2) {
        printf("Fevereiro");
    }else if(mes==3) {
        printf("Março");
    }else if(mes==4) {
        printf("Abril");
    }else if(mes==5) {
        printf("Maio");
    }else if(mes==6) {
        printf("Junho");
    }else if(mes==7) {
        printf("Julho");
    }else if(mes==8) {
        printf("Agosto");
    }else if(mes==9) {
        printf("Setembro");
    }else if(mes==10) {
        printf("Outubro");
    }else if(mes==11) {
        printf("Novembro");
    }else if(mes==12) {
        printf("Dezembro");
    }else{
        printf("Não é um numero válido!");
    }

    printf("Digite NOVAMENTE o mês:\n");
    scanf("%d%*c",&mes);
    switch (mes){
    case 1:{
        printf("Janeiro");
        break;
    }
    case 2:{
        printf("Fevereiro");
        break;
    }
    case 3:{
        printf("Março");
        break;
    }
    default:{
        printf("Numero errado");
        break;
        }
    }
printf("Fim");
}