#include <stdio.h>
int main(){
    float n1,n2,n3,media;
    printf ("digite a nota 1:\t");
    scanf ("%f%*c",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &n2);
    printf("Digite a primeira nota: ");
    scanf("%f%*c", &n3);
    media=(n1+n2+n3)/3;
    if (media <4){
        printf("reprovado");

    }else if((media>=4)&&(media<7)){
        printf ("exame");

    }else{
        printf("aprovado");
    }
}