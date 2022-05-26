#include <stdio.h>

int main(){

    int notas[10];
    int notas2[]={5,6,7,8,9};
    int soma=0;
    int media;
    printf("%d - %d\n",notas2[0],notas2[4]);
    notas2[0]=10;
    notas2[4]=10;
    int i;
    for(i=0;i<5;i++){
        printf("Digite o valor da posição %d\n",i+1);
        scanf("%d%*c",&notas2[i]);
    }

     for(i=0;i<5;i++){
        printf("Valor: %d\n",notas2[i]);
    }

      for(i=4;i>=0;i--){
          soma+=notas2[i];
          if(notas2[i]%2!=0){
            printf("Impar: %d\n",notas2[i]);
          }
    }

printf("Soma: %d\n",soma);
media=soma/5;
printf("Media: %d\n",media);

 for(i=4;i>=0;i--){
          
          if(notas2[i]>media){
            printf("Acima da media: %d\n",notas2[i]);
          }
      
    }
    





}