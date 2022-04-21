#include <stdio.h>

int main(){
    int n1,n2,n3;
    scanf("%d%*c",n1);
    scanf("%d%*c",n2);
    scanf("%d%*c",n3);

    if((n1 < n2) && (n1<n3)){
        //n1 menor n2 e n3
        if (n2<n3){
            //n1 n2 n3
            printf("%d - %d - %d",n1,n2,n3);
        }else{
            //n1 n3 n2
            printf("%d - %d - %d",n1,n3,n2);
        }
    }else if((n2<n1)&&(n2<n3)){
        //n2 é o menor
        if(n1<n3){
            printf("%d - %d - %d",n2,n1,n3);
            //n2 n1n3
        }else{
            printf("%d - %d - %d",n2,n3,n1);
        }
    }else{
        //n3 menor
        if(n1<n2){
            //n3 n1 n2
            printf("%d - %d - %d",n3,n1,n2);
        }else{
           // n3 n2 n1
           printf("%d - %d - %d",n3,n2,n1);
        }
    }

}