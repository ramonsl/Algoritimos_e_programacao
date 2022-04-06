#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  float precoFabrica, perceLucro, percImposto, lucroDistribuidor, imposto, precoFinal;
  printf("Digite o preço de fábrica do veiculo: $");
  scanf("%f%*c", &precoFabrica);
  printf("Digite o percentual de lucro do distribuidor: ");
  scanf("%f%*c", &perceLucro);
  printf("Digite o percentual de imposto : ");
  scanf("%f%*c", &percImposto);

  lucroDistribuidor = precoFabrica * perceLucro / 100;
  imposto = precoFabrica * percImposto / 100;
  precoFinal = precoFabrica + lucroDistribuidor + imposto;
  printf("O lucro do distribuidor sobre um veiculo no valor de $%.2f será de $%.2f \n",precoFabrica, lucroDistribuidor);
  printf("O valor do imposto será de $%.2f \n", imposto);
  printf("O preço final do veiculo ficará no valor de $%.2f\n",precoFinal);
  return 0;
}
