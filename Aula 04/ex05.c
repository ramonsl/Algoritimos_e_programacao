#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main() {
  /*Imprimir acentuação no terminal*/
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  float salario, novoSalario;
  int percentualAumento, aumento;

  /*Recebe dados do usuario*/
  printf("Salario: $");
  scanf("%f%*c", &salario);
  printf("Percentual de aumento: ");
  scanf("%d%*c", &percentualAumento);

  /*Calculo aumento*/
  aumento = salario*percentualAumento/100;
  novoSalario = salario + aumento;

  /*Mostra resultado na tela.*/
  printf("Valor do aumento: $%d\n", aumento);
  printf("Novo salario %.2f\n", novoSalario);
  return 0;
}
