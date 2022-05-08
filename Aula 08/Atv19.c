#include <stdio.h>
#include <math.h>

int main(){
 float alt, pes;
    char sexo;
    printf("Insira seu sexo \n(H para Homem/M para Mulher)- ");
    scanf("%c%*c", &sexo);
    printf("Insira sua altura (Em cm)- ");
    scanf("%f%*c", &alt);

    if (sexo=='H' || sexo=='h'){
        pes=(72.2*(alt/100))-58;
        printf("Seu peso ideal é %.2f KG", pes);
    }else if( sexo=='M' || sexo=='m'){
        pes=(62.1*(alt/100))-44.7;
        printf("Seu peso ideal é %.2f KG", pes);
    }

	return 0;
}