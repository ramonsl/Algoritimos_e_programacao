#include <stdio.h>

int main(){
 int numero;
 printf ("Digite o numero\n");
 scanf("%d%*c",&numero);
 if(numero%2==0){
     printf("Numero par %d", numero);
 }else{
    printf("Numero impar %d", numero);
 }


}