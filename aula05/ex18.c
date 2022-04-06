#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float pesoRacao, racaoDiaria, gastoRacao, quantidadeRestante;
  printf("Digite o peso do saco de ração: Kg");
  scanf("%f%*c", &pesoRacao);
  printf("Digite a quantidade de ração diaria em gramas: ");
  scanf("%f%*c", &racaoDiaria);

  pesoRacao *= 1000;
  gastoRacao = racaoDiaria * 5;
  quantidadeRestante = (pesoRacao - gastoRacao) / 1000;
  printf("A quantidade de ração restante após 5 dias é de: %.1fKg\n", quantidadeRestante);
  return 0;
}