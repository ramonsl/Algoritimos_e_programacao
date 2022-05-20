//Faça um programa que leia a matrícula, 
//o nome e às três notas de 10 alunos, 
//e indique para cada aluno, se ele foi aprovado ou não, 
//considere a media 7.
#include <stdio.h>

int main(){
    int TAMANHO=10;
    int matricula;
    char nome[10];
    float nota,media, soma;
    int i,j;
for(i=0;i<TAMANHO;i++){
    printf("Digte a matricula\n");
    scanf("%d%*c",&matricula); 
    printf("Digte a nome\n");
    scanf("%s%*c",&nome); 
    soma=0;
    for(j=0;j<3;j++){
        printf("Digte a nota %d\n",(j+1));
        scanf("%f%*c",&nota); 
        soma=nota+soma;
    }
    media=soma/3;
    if(media>=7){
        printf(" \nParabéns! %s você esta aprovado %.2f\n",nome,media);
    }else{
        printf(" \nOpa!! %s você esta reprovado %.2f\n",nome,media);
    }

    /*
    float nota1,nota2,nota3,media;
    int i;
for(i=0;i<TAMANHO;i++){
    printf("Digte a matricula\n");
    scanf("%d%*c",&matricula); 
    printf("Digte a nome\n");
    scanf("%s%*c",&nome); 
    printf("Digte a nota 1\n");
    scanf("%f%*c",&nota1); 
    printf("Digte a nota 2\n");
    scanf("%f%*c",&nota2); 
    printf("Digte a nota 3\n");
    scanf("%f%*c",&nota3); 
    media=(nota1+nota2+nota3)/3;
    if(media>=7){
        printf(" Parabéns! %s você esta aprovado %.2f",nome,media);
    }else{
        printf(" Opa!! %s você esta reprovado %.2f",nome,media);
    }
}
*/

}}