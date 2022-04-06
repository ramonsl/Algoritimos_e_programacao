/*AUMENTO DE 25% NO SALÁRIO*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  

  /*Variáveis*/
  float salario, aumento, novoSalario;

  /*Recebe e guarda os dados informados pelo usuário*/
  printf("Digite o valor do seu salário para receber seu merecido aumento: $");
  scanf("%f%*c", &salario);

  /*Calculo aumento..*/
  aumento = salario * 25/100;
  novoSalario = salario + aumento;

  printf("Seu novo salário é: $%.2f\n", novoSalario);
  return 0;
}



