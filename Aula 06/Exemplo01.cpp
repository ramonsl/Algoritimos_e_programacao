/*SOMANDO VALORES*/

#include <stdio.h>
#include <math.h>

int main() {

float ap1,ap2,aps;
int semestre;
printf("Digite sua nota de AP1\n");
scanf("%f%*c",&ap1);
printf("Digite sua nota de AP2\n");
scanf("%f%*c",&ap2);
printf("Digite sua nota de AS\n");
scanf("%f%*c",&aps);
printf("Digite seu semestre\n");
scanf("%d%*c",&semestre);
float media=(ap1+ap2+aps)/3;
printf("Sua média é:%.2f !\n", media);
if(media>=7)  { //media=7.0   7.0>=7 ? TRUE
    printf("Você foi aprovado !\n");//ela so acontece quando a condição é verdade
    printf("Parabens !\n");//ela so acontece quando a condição é verdade 
    if(semestre==1){
        printf("Você vai para o segundo semestre");
    }else{
               printf("Você vai para o proximo semestre");
 
    }
} else if ( (media>=5) && (media <7) ){  // && E/AND || OR
      printf("Você vai precisar fazer exame!!!!!\n");//ela so acontece quando a condição é verdade
}else{
      printf("Você foi reprovado !\n");//ela so acontece quando a condição é verdade
}
printf("Feliz Férias");



}