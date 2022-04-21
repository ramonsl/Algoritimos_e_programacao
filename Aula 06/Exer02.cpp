#include <stdio.h>

int main(){

    float n1, n2, n3, media, exame;
    printf("Digite a nota 01\n");
    scanf("%f%*c",&n1);
    printf("Digite a nota 02\n");
    scanf("%f%*c",&n2);
    printf("Digite a nota 03");
    scanf("%f%*c",&n3);
    media = (n1+n2+n3)/3;
//começa aqui
    printf("\nSua nota é\n %.2f",media);
    if ((media>= 7)&&(media<=10)){
       printf("Aprovado");
    }else if((media>= 3)&&(media<7)){
        printf("Exame");
        exame = 12 - media;
        printf("Deve tirar a nota %.2f para passsar",exame);
    }else if((media>= 0)&&(media<3)){
        printf("Reprovado");
    }else{
        printf("Valores invalidos!");
    }
   
  
    
   
}