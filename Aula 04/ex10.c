#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main() {
  /*Imprimir acentuação no terminal*/
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  int raio;
  float pi = 3.14;

  printf("Raio do circulo: ");
  scanf("%d%*c", &raio);

  float areaCirculo = pi *(raio*raio);
  printf("O a area do circulo é %.1f \n", areaCirculo);
}
