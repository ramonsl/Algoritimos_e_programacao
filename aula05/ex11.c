#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main() {

  
  int numero;
  printf("Digite um número: ");
  scanf("%d%*c", &numero);

  int aoQuadrado = pow(numero, 2);
  int aoCubo = pow(numero, 3);
  float raizQuadrada = sqrt(numero);
  float raizCubica = cbrt(numero);

  printf("O número %d ao quadrado é: %d\n", numero, aoQuadrado);
  printf("O número %d ao cubo é: %d\n", numero, aoCubo);
  printf("A raiz quadrada do número %d é: %.2f\n", numero, raizQuadrada);
  printf("A raiz cubica do número %d é: %.2f\n", numero, raizCubica);
  return 0;
}
