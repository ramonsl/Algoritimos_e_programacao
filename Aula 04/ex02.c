/*SOMANDO AS 3 NOTAS DO SEMESTRE*/

/*Incluindo biblioteca entrada e saída*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* Lendo notas informadas pelo usuario e atribuindo a respectiva váriável*/
int main() {


  /*recebendo dados do usuário e atribuindo nas respectivas variáveis*/
  float ap1;
 printf("Digite a nota da AP1: \n");
 scanf("%f%*c", &ap1);
  float ap2;
 printf("Digite a nota da AP2: \n");
 scanf("%f%*c", &ap2);
  float as;
 printf("Digite a nota da AS: \n");
 scanf("%f%*c", &as);
  float total = (ap1+ap2+as);

/*Imprimindo resultado na tela*/
printf("As suas notas de AP1, AP2, AS foram respectivamente %.1f, %.1f, %.1f\n", ap1, ap2, as);
printf("O média das suas notas foi %.1f", total / 3);
}
