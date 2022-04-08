#include <stdio.h>

int main(){
    float n1,n2,n3;
    float media, notaExame;
    printf("Digite sua nota 01\n");
    scanf("%f%*c",&n1);
    printf("Digite sua nota 02\n");
    scanf("%f%*c",&n2);
    printf("Digite sua nota 03\n");
    scanf("%f%*c",&n3);
    media = (n1+n2+n3)/3;
    if((media >=7) && (media <=10)) {
        printf("Aprovado");
    }else if((media >=3) && (media <7)){
        printf("Exame");
        notaExame = 12 - media;
        printf("Você deve tirar:%.2f",notaExame);
    }else if((media >=0) && (media <3)){
        printf("Reprovado");
    }else{
        printf("DADOS INVALIDOS!!!");
    }
    return 0;
}