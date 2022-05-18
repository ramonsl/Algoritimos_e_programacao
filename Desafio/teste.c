#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAIOR_IDADE 18

int main() {
  
  int idade;
  char alfabetizado[10];
  printf("Digite sua idade: ");
  scanf("%d%*c", &idade);
  printf("Alfabetizado - [S/N]: ");
  gets(alfabetizado);
  while(idade <= 0) {
    printf("Idade inválida\nDigite sua idade novamente: ");
    scanf("%d%*c", &idade);
  }

  if (idade >= MAIOR_IDADE) {
    if (idade >= 70 ){
      printf("Você tem %d anos\nVoto - Facultativo", idade);
    } 
    else {
      printf("Você tem %d anos - Maior de idade\nVoto - Obrigatório\n", idade);
    }
  }
  else if (idade < MAIOR_IDADE && idade >= 16 && strcmp(alfabetizado, "N") == 0){
    printf("Você tem %d anos - Menor de idade\nAnalfabeto\nVoto - Facultativo", idade);
  }  

  return 0;
}