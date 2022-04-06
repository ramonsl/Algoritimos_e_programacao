#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(void) {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  float alturaDegrau, alturaObjetivo, quantidadeDegraus;
  printf("Digite a altura em metros do degrau da escada: ");
  scanf("%f%*c", &alturaDegrau);
  printf("Digite a altura que você deseja alcançar: ");
  scanf("%f%*c", &alturaObjetivo);

  quantidadeDegraus = alturaObjetivo / alturaDegrau;
  printf("Você precisa-rá subir %.0f degraus para alcançar %.0f metros de altura\n", quantidadeDegraus, alturaObjetivo);
  return 0;
}
