//Faça um programa que leia a matrícula, o nome e às três
// notas de 10 alunos, e indique para cada aluno,
// se ele foi aprovado ou não.

#include <stdio.h>

int main(){
    /*
    int TOTAL=3;
    int matricula,i;
    char nome[10];  
    float nota01,nota02,nota03, media;

    for(i=0;i<TOTAL;i++){ 
    printf("Digite o nome do aluno %d:\n",i+1);
    scanf("%s%*c", &nome);
    printf("Digite o matricula:\n");
    scanf("%d%*c", &matricula);
    printf("Digite o Nota 01:\n");
    scanf("%f%*c", &nota01);
    printf("Digite o Nota 02:\n");
    scanf("%f%*c", &nota02);
    printf("Digite o Nota 03:\n");
    scanf("%f%*c", &nota03);
    media= (nota01+nota02+nota03)/3;
    if(media>=7){
        printf("O Aluno %s matricula %d foi aprovado media=%.2f\n",nome,matricula,media);
    }else{
        printf("O Aluno %s matricula %d  não foi aprovado media=%.2f\n",nome,matricula,media);
    }
    }
    */

    int TOTAL=3;
    int matricula,i,n;
    char nome[10];  
    float nota, soma, media;
    
    for(i=0;i<TOTAL;i++){ 
    printf("Digite o nome do aluno %d:\n",i+1);
    scanf("%s%*c", &nome);
    printf("Digite o matricula:\n");
    scanf("%d%*c", &matricula);
    soma=0;
        for(n=0;n<3;n++){
            printf("Digite o Nota N%d:\n",n+1);
            scanf("%f%*c", &nota);
            soma=soma+nota;
        }
    media= soma/3;
    if(media>=7){
        printf("O Aluno %s matricula %d foi aprovado media=%.2f\n",nome,matricula,media);
    }else{
        printf("O Aluno %s matricula %d  não foi aprovado media=%.2f\n",nome,matricula,media);
    }
    }

}