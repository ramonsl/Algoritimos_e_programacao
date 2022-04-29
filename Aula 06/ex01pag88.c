#include <stdio.h>
#include <stdlib.h>
#define MEDIA 7

int main() {
    float nota1, nota2, nota3, nota4, qntNotas = 4, mediaAritimetica;
    printf("Digite a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f%*c", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f%*c", &nota4);

    mediaAritimetica = (nota1 + nota2 + nota3 + nota4) / qntNotas;
    printf("Média das notas do aluno: %.2f", mediaAritimetica);

    if (mediaAritimetica >= MEDIA) {
        printf(" Aprovado");
    } else {
        printf(" Reprovado");
    }
}