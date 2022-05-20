#include <stdio.h> /*Adição da biblioteca input and output*/


int main(){ 
  
    int numero;
    do
    {
      printf( "Digita um numero?\n");
      scanf("%d%*c",&numero);
      if(numero>0){
          printf( "Numero Positivo\n");
      }else if(numero<0){
        printf("Numero Negativo\n");
      }else{
       break;
      }
    } while (numero!=0);
    


}