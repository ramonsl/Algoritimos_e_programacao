#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
  /*Código para mostrar caracteries especiais no console.*/
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  float pes, polegada, jarda, milha;
  printf("Digite uma medida em pes: ");
  scanf("%f%*c", &pes);

  polegada = pes * 12;
  jarda = pes / 3;
  milha = jarda / 1.760;

  printf("Letra a) %.1f\n", polegada);
  printf("Letra b) %.1f\n", jarda);
  printf("Letra c) %.1f\n", milha);
  return 0;
}
