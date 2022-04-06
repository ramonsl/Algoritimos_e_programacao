#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

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