#include<stdio.h>
int main(){
    int n1,n2;
    printf("digite o primeiro numero: \n");
    scanf("%d",&n1);
    printf("digite o segundo numero: \n");
    scanf("%d",&n2);
    while (n1<=n2)
    {
        if (n1%2!=0)
        {
            printf("numero impar:%d \n",n1);
        }  
        n1++;  
    } 
}
