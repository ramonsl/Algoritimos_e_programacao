#include <stdio.h>
int main()
{
    int tLogica[5];
    int tLinguagem[3];
    for (int i = 0; i < 5; i++){
      printf("Digite o Código do aluno de Logica\n");
      scanf("%d%*c",&tLogica[i]);
    }
    
      for (int i = 0; i < 3; i++){
      printf("Digite o Código do aluno de Linguagem\n");
      scanf("%d%*c",&tLinguagem[i]);
    }
    for (int i = 0; i < 3; i++){
        for(int j=0;j<5;j++){
            if( tLinguagem[i]==tLogica[j]) {
                printf("Aluno nas duas turmas:%d\n",tLinguagem[i]);
            }
        }
      
    }
    
    

}
