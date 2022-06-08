#include <stdio.h>
#include <math.h>
/*
3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/
int main()
{
   
   
    double valor[10];
    int i;
    double quad[10];
    for (i = 0; i < 10; i++)
    {
        printf("Digite %dº posição vetor valor\n", i + 1);
        scanf("%lf%*c", &valor[i]);
        quad[i] = (pow(valor[i],2)); // com pow resultado ficou quadrado -1
    }
    for (i = 0; i < 10; i++)
    {
        printf("Vetor quad %d pos = %lf\n", i + 1, quad[i]);
    }
    return 0;
}