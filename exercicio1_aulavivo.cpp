#include <stdio.h>
#include <conio.h>

int main(){
    float v1, v2, v3, med;

    printf("Entre com a nota 1: ");
    scanf("%f", &v1);

    printf("Entre com a nota 2: ");
    scanf("%f", &v2);

    printf("Entre com a nota 3: ");
    scanf("%f", &v3);

    med = (v1 + v2 + v3)/3;

    printf("A media = %0.2f", med);

    return(0);
}