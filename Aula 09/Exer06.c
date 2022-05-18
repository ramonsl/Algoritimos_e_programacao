
#include <stdio.h>

int main(){
    int n,i;
  
  
    for(i=0;i<5;i++){

        printf("Digite o numero \n");
        scanf("%d%*c",&n);
        if(n==0){
            printf("Numero Nulo\n");
        }else if(n>0){
            printf("Numero Positivo\n");
        }else{
             printf("Numero Negativo\n");
        }
 
    }
}