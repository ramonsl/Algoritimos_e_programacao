#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//biblioteca para caracteres especiais
//#include <windows.h>


int main() {
/*
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.*/
 /// setlocale(LC_ALL,NULL) ;
// codigo para cacteres especiais
 // UINT CPAGE_UTF8 = 65001;
  //SetConsoleOutputCP(CPAGE_UTF8);

  float deposito,valorRendimento,valorTotal;
  int taxaJuros;

  printf("Valor do depósito: $");
  scanf("%f%*c", &deposito);
  printf("Taxa de juros: ");
  scanf("%d%*c", &taxaJuros);

   valorRendimento = deposito - (deposito - (deposito*taxaJuros/100));
   valorTotal = deposito + valorRendimento;

  printf("O valor do rendimento é %% $%.2f reais e o total do valor depositado após o rendimento ficou $%.2f reais\n", valorRendimento, valorTotal);
  return 0;
}
