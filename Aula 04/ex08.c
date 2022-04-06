#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {

 

  float deposito;
  int taxaJuros;

  printf("Valor do depósito: $");
  scanf("%f%*c", &deposito);
  printf("Taxa de juros: ");
  scanf("%d%*c", &taxaJuros);

  float valorRendimento = deposito - (deposito - (deposito*taxaJuros/100));
  float valorTotal = deposito + valorRendimento;

  printf("O valor do rendimento é $%.2f reais e o total do valor depositado após o rendimento ficou $%.2f reais\n", valorRendimento, valorTotal);
  return 0;
}
