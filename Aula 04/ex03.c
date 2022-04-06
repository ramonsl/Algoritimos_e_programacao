/*CALCULANDO DE MÉDIA PONDERADA*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main () {
  /*Imprimir acentuação no terminal*/
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  /*Declara as variáveis de peso e soma.*/
  float peso1, peso2, peso3, nota1, nota2, nota3, somaPesos, mediaPonderada, resultado;

  /*Declara variáveis das notas e atribui os valores informados pelo usuario*/
  printf("peso 1: ");
  scanf("%f%*c", &peso1);
  printf("peso 2: ");
  scanf("%f%*c", &peso2);
  printf("peso 3: ");
  scanf("%f%*c", &peso3);
  printf("Nota 1: ");
  scanf("%f%*c", &nota1);
  printf("Nota 2: ");
  scanf("%f%*c", &nota2);
  printf("Nota 3: ");
  scanf("%f%*c", &nota3);

  /*Calculando a média ponderada*/
  somaPesos = peso1 + peso2 + peso3;
  mediaPonderada = (peso1*nota1) + (peso2*nota2) + (peso3*nota3);
  resultado = mediaPonderada / somaPesos;

  /*Imprimi resultado na tela.*/
  printf("A média ponderada das notas do aluno é: %.2f \n", resultado);
  return 0;
}
