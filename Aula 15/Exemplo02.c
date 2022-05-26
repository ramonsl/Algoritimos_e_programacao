#include <stdio.h>

int main(){
	int numero[10], soma, media;
	int vetor[]={6,6,6,6,6,6,6,6,6};
	soma=0;
	int i;
	for (i=1; i<10; i++)	{
	printf("Digite um numero\n");
	scanf("%d%*c", &numero[i]);
	soma=soma+numero[i];
		
	}
	
	media=soma/10;
	printf("A soma dos 10 numeros: %d\n", soma);
	printf("A media dos 10 numeros: %d\n", media);

    printf("Quais numeros estão acima da media?\n");
    for(i=0;i<10;i++){
        if(numero[i]>media){
            printf("Valor[%d] é maior que media\n",numero[i]);
        }
    }

    printf("Exibir o vetor?\n");
    for(i=0;i<9;i++){
        printf("Valor[%d] posicao %d\n",vetor[i],(i+1600));
    }
}