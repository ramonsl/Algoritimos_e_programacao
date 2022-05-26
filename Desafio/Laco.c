#include <stdio.h>

int main(){
int x,f;
f=10;
for(x=1;x<f;x++){
    if (x%2==0){
        f++;
        continue;
    }
    if(f==x){
        break;
    }
}
printf("Valor de x=%d\n",x);
printf("Valor de f=%d\n",f);



}