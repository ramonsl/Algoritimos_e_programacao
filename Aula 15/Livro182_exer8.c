#include <stdio.h>
int main(){
    int TAM=3;
    char nomes[TAM][10];
    float notas[TAM];
 for (int i = 0; i < TAM; i++)
    {
        printf("Digite o nome %dº \n", i+1);
        scanf("%s",nomes[i]);
        printf("Digite a nota %dº \n", i+1);
        scanf("%f",&notas[i]);
    }
    int maiorMedia=0;

    for (int i = 0; i < TAM; i++){
        if(notas[i]<7){
            float nota=10-notas[i];
            printf("Aluno %s precisa %f\n",nomes[i],nota);
        }

        if(notas[maiorMedia]<notas[i]){
            maiorMedia=i;
        }

    }
    

    for (int i = 0; i < TAM; i++) {
       printf("%s\n ",nomes[i]);
    }

    printf("A maior media é do %s - %f",nomes[maiorMedia],notas[maiorMedia]);
    
}

