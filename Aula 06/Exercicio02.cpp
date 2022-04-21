#include <stdio.h>

int main(){
    int n1,n2,n3;
    int media, notaExame;
    printf("Digite sua nota 01\n");
    scanf("%d%*c",&n1);
    printf("Digite sua nota 02\n");
    scanf("%d%*c",&n2);
    printf("Digite sua nota 03\n");
    scanf("%d%*c",&n3);
    media = (n1+n2+n3)/3;
    if((media >=7) && (media <=10));
        printf("Aprovado");
    else if((media >=3) && (media <7)){
        printf("Exame");
        notaExame = 12 - media;
        printf("Sua média é %d Você deve tirar:%d",media,notaExame);
    }else if((media >=0) && (media <3)){
        printf("Reprovado");
    }else
        printf("DADOS INVALIDOS!!!");
    
    return 0;
}