#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14 /// constante

int main() {
 
/*
Faça um programa que calcule e mostre a área de um círculo. 
Sabe-se que: Área = p * R*R
*/
  float raio;
  //float pi = 3.14;
  
  printf("Raio do circulo: ");
  scanf("%f%*c", &raio);

  float areaCirculo = PI *(raio*raio);
  printf("O a area do circulo é %.1f \n", areaCirculo);

}
