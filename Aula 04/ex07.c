#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
/*
Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
*/
  float salarioBase, salarioAreceber;

  printf("Informe o salario base do colaborador: $");
  scanf("%f%*c", &salarioBase);

  float imposto = salarioBase - (salarioBase - (salarioBase*10/100));
  salarioAreceber = salarioBase + 50 - imposto;
  printf("Salario a receber: $%.2f \n", salarioAreceber);
  return 0;
}

