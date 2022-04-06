/*AUMENTO DE 25% NO SALÁRIO*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /*
  Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%.
  */

  /*Variáveis*/
  float salario, aumento, novoSalario;

  /*Recebe e guarda os dados informados pelo usuário*/
  printf("Digite o valor do seu salário para receber seu merecido aumento: $");
  scanf("%f%*c", &salario);

  /*Calculo aumento..*/
  //forma 01
  aumento = salario * 25/100;
  novoSalario = salario + aumento;
  //forma 02
  //novoSalario = salario +(salario*0.25);
  //forma03
  //salario*=1+0.25;
  //salario= salario*1+0.25;

  printf("Seu novo salário é: $%.2f\n", novoSalario);
  return 0;
}



