#include <stdio.h>

int main(){

    float n1, n2;
    printf("Digite a numero 01\n");
    scanf("%f%*c",&n1);
    printf("Digite a numero  02\n");
    scanf("%f%*c",&n2);
  
    if (n1>n2){
        printf("N1 = %f Maior que N2 = %f",n1,n2);
    } else if (n2>n1){
        printf("N2 = %f Maior que N1 = %f",n2,n1);
    }else {
        printf("N1 = %f Valore iguais = %f",n1,n2);
    }
   
}