#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main() {
  /*Imprimir acentuação no terminal*/
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  float base, altura, area;
  
  printf("Base do triângulo: ");
  scanf("%f%*c", &base);
  printf("Altura do triângulo: ");
  scanf("%f%*c", &altura);
  area = (base * altura) / 2;
  printf("A area de um triângulo com base de %.1fm e altura de %.1fm é igual a: %.1f\n", base, altura, area);
}
