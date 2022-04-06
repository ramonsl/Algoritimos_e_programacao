#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
/*
Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.
*/
  float base, altura, area;
  
  printf("Base do triângulo: ");
  scanf("%f%*c", &base);
  printf("Altura do triângulo: ");
  scanf("%f%*c", &altura);
  area = (base * altura) / 2;
  printf("A area de um triângulo com base de %.1fm e altura de %.1fm é igual a: %.1f\n", base, altura, area);
}
