#include <stdio.h>

int main(){
   /*
    int i;
    i=0;
    while (i<10){
          printf("%d- Escrevam um algoritmo\n",i+1);
          i++; // i=i+1;
    }*/
    /*
int d=0;
int vezes;
printf("Digite a quantidade de vezes a reepetir");
scanf("%d%*c",&vezes);
    do{
            printf("%d- Escreva um do-while\n",d+1345);
            d++;
    } while (d<vezes);
    */
   /*
   int count;
   int acumulador=0;
printf("Digite a quantidade de vezes a reepetir");

scanf("%d%*c",&count);
printf("Some os valores entre f e Count");
   for (int f = 0; f < count; f++)
   {
    printf("%d- Escreva um for\n",f+1);
   acumulador=f+acumulador;
   // acumulador+=f;
   }
       printf("A soma entre 0 e %d eh:%d\n",count,acumulador);

   
    */


   //escreva um algoritmo para calcular a media da turma de 10 alunos

float nota, soma,media;
soma=0;
for (int  i = 0; i < 10; i++)
{
   printf("Digite a nota:\n");
   scanf("%f%*c",&nota);
   soma=soma+nota;
}
media=soma/10;
printf("A media é:%f",media);
}