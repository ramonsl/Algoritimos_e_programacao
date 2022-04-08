/*SOMANDO VALORES*/

#include <stdio.h>


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
float media=ap1+ap2+aps;
printf("Sua média é:%.2f\n", media);

if(media>=7){
    printf("Vc foi aprovado\n");
    if(media>9){
        printf("Você está de SUPER parabens!!!!!!");
    }else{
        printf("Você está de  parabens!!!!!!");
    }

}else if(media >6 && media <7){
        printf("Vc pegou recuperação\n");
}else if(media < 3){
        printf("Vc foi reprovado  sumariamente\n");
}else{
    printf("Vc foi reprovado\n");
    printf("refaça sua matricula!\n");
}
  ////saida do if 
 
switch (semestre){
case 1:{
     printf("Semestre 01");
    break;
}
case 2:{
    printf("Semestre 02");
    break;
}
    
default:{
  printf("Outro semestre");  
    break;

}
  
}

return 0;
}