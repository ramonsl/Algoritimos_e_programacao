

#include <stdio.h>

int main(){
    int i =1000;
    do{
        if(i%2!=0){
            printf("Numero impar:%d\n",i);
        }
    i++;
}while(i<1500);
}