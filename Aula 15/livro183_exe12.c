#include <stdio.h>
#include <string.h>
int main(){
    int vetor[5];
    int total=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº number\n", i+1);
        scanf("%d",&vetor[i]);
        total+=vetor[i];
    }
    for (int i = 0; i < 5; i++){
        if(i!=0){
            printf(" + ");
        }
        printf("%d",vetor[i]);
    }
    printf(" =  %d",total);
    
    
}