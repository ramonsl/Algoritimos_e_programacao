#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /*
  Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam-
bém sobre o salário base.
*/

  float salarioBase, salarioAreceber;
  /*recebe dados usuário*/
  printf("Digite o salário base do colaborador: $");
  scanf("%f%*c", &salarioBase);
  /*Calculo do salario a receber*/
  float gratificacao = salarioBase * 0.05;
  float imposto = salarioBase - (salarioBase - salarioBase * 7/100);
  salarioAreceber = salarioBase + gratificacao - imposto;
  /*Imprime o resultado*/
  printf("Salario a receber: $%.2f \n", salarioAreceber);
  return 0;
}