/*SOMANDO VALORES*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /*Imprimir acentuação no terminal*/


  int n1, n2, n3, n4;
  int soma;

  printf("Digite um número: \n");
  scanf("%d%*c", &n1);
  printf("Digite outro número: \n");
  scanf("%d%*c", &n2);
  printf("Digite outro número: \n");
  scanf("%d%*c", &n3);
  printf("Digite só mais um número: \n");
  scanf("%d%*c", &n4);
  soma = (n1 + n2 + n3 + n4);

  printf("A soma dos números %d, %d, %d e %d é: %d \n", n1, n2, n3, n4, soma);
  return 0;
}
