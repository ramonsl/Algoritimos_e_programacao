#include <stdio.h>
#include <string.h>

int main(){

    int numbers[7];
    int i;
    for ( i = 0; i < 7; i++)
    {
        printf("Digite o numero\n");
        scanf("%d",&numbers[i]);

       
    }
    for ( i = 0; i < 7; i++)
    {
    
        if(numbers[i]%2==0 && numbers[i]%3==0){
            printf("Numero %d é multiplo de 2 e 3\n",numbers[i]);
        }else if(numbers[i]%2==0){
            printf("Numero %d é multiplo de 2\n",numbers[i]);
        }else if(numbers[i]%3==0){
            printf("Numero %d é multiplo de 3\n",numbers[i]);
        }
    }
    
    
}