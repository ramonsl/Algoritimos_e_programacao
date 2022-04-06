#include <stdio.h> /*Adição da biblioteca imput and output*/
int main(){ 
  int alunoA;
  int alunoB;
  int alunoC;
  int media;
  
  /*Perguntando dados ao usuário e armazenando nas respectivas variáveis*/
  printf("Digite a idade do aluno A: \n");
  scanf("%d%*c", &alunoA);
  printf("Digite a idade do aluno B: \n");
  scanf("%d%*c", &alunoB);
  printf("Digite a idade do aluno C: \n");
  scanf("%d%*c", &alunoC);

  /*Calculo da média das idades e escrevendo na tela para o usuário*/
  media = (alunoA + alunoB + alunoC)/3;
  printf("A média da idade dos alunos é: %d \n", media);
  return 0;
}
