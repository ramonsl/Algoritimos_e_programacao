#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
  /*Código para mostrar caracteries especiais no console.*/
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

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
