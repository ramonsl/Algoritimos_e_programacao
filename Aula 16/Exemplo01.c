#include <stdio.h>
#include<string.h>
int main(){
//char AGENDA[10][20]; 

char nome[14];
char teste[]= {"ramon"};
char meio[]={'D','o','s','\0'};
char sobrenome[10];
strcpy(sobrenome,"lummertz");
char nomeCompleto[20];
printf("Digite o nome\n");
scanf("%s%*c", nome);
printf("%s %s %s\n", nome, meio, sobrenome);
if (strcmp(nome, "ramon")==0){
    printf("Nomes Iguais\n");
}else{
       printf("Nomes diferentes\n");
}
if (strcmp("Abacaxi", "Banana")>0){
    printf("Abacaxi é maior que Banana\n");
}else{
    printf("Bana é maior que Banana\n");
}
printf("%d\n", strcmp("Banana", "Abacaxi"));
printf("%d\n", strcmp("Banana", "Banano"));
printf("%d\n", strcmp("Abacaxi", "Abacaxi"));
printf("%d\n",strlen(nome));
printf("%d\n", strupr(nome));
}