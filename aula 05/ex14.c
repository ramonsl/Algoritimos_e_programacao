#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


  int anoNascimento, anoAtual, idade, idadeFuturo;
  printf("Digite o ano de nascimento: ");
  scanf("%d%*c", &anoNascimento);
  printf("Digite o ano atual: ");
  scanf("%d%*c", &anoAtual);

  idade = anoAtual - anoNascimento;
  idadeFuturo = 2050 - anoNascimento;
  printf("Sua idade é: %d\n.", idade);
  printf("Você terá %d anos em 2050.\n", idadeFuturo);
  return 0;
}
