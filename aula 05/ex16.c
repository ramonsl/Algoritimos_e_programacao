#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
  

  float salarioMinimo, horasTrabalhadas, valorHora, salarioBruto, imposto, salarioAreceber;
  printf("Digite o salario minimo: $");
  scanf("%f%*c", &salarioMinimo);
  printf("Digite o total de horas trabalhadas: ");
  scanf("%f%*c", &horasTrabalhadas);

  valorHora = salarioMinimo / 2;
  salarioBruto = horasTrabalhadas * valorHora;
  imposto = salarioBruto * 3 / 100;
  salarioAreceber = salarioBruto - imposto;
  printf("Salario a receber %.2f\n", salarioAreceber);
  return 0;
}