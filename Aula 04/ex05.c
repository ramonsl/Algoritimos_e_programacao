#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
 /*
  /*
  Faça um programa que receba o salário de um funcionário e o
   percentual de aumento, calcule e mostre
o valor do aumento e o novo salário.
  */

  float salario, novoSalario, aumento;
  int percentualAumento;

  /*Recebe dados do usuario*/
  printf("Salario: $");
  scanf("%f%*c", &salario);
  printf("Percentual de aumento: ");
  scanf("%d%*c", &percentualAumento);

  /*Calculo aumento*/
  aumento = salario*percentualAumento/100;
  novoSalario = salario + aumento;

  /*Mostra resultado na tela.*/
  printf("Valor do aumento: $%.2f\n", aumento);
  printf("Novo salario %.2f\n", novoSalario);
  return 0;
}
