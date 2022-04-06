#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8); 
  float salario, cheque1, cheque2, cpmf1, cpmf2;

  printf("Valor do salário depositado: $");
  scanf("%f%*c", &salario);
  printf("Cheque descontado: $");
  scanf("%f%*c", &cheque1);
  printf("Cheque descontado: $");
  scanf("%f%*c", &cheque2);
  cpmf1 = cheque1 * 0.38 / 100;
  cpmf2 = cheque2 * 0.38 / 100;
  salario = salario - (cheque1 + cpmf1) - (cheque2 + cpmf2) ;

  printf("O Saldo bancario atual é de: $%.2f\n", salario);
  return 0;
}