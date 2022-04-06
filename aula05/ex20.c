#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


  float anguloEscada, altura, radiano, escada; 
  float pi = 3.14;
  printf("Digite a medida do ângulo formado pela escada na parede: ");
  scanf("%f%*c", &anguloEscada);
  printf("Digite a altura alcançada pela escada: ");
  scanf("%f%*c", &altura);

  radiano = anguloEscada * pi / 180;
  escada = altura / radiano;
  printf("A escada tem: %.1f metros de compriment. \n", escada);
  return 0;
}