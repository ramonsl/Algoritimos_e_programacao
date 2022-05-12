#include <stdio.h>

int main(){

int idade,media,total, cont;
//ler 5 idades e calcular a media

total=0;
cont=0;
for(int i=1;i<=5;i++){
    printf("Digite a idade da pessoa %d\n",i);
    scanf("%d%*c",&idade);
    total=total+idade;
    cont++;
}
media=total/cont;
printf ("Media =%d",media);

//ler idades e calcular a media ate a idade digitadas for 0
int j=0;
total=0;
cont=0;
do{
    printf("Digite a idade da pessoa %d\n",j);
    scanf("%d%*c",&idade);
    if(idade!=0){
    total=total+idade;
    cont++;
    }
}while(idade!=0);

media=total/cont;
printf ("Media =%d",media);
}