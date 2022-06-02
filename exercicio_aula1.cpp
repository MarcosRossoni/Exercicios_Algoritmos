#include <stdio.h>
#include <conio.h>

int main(void){
    int num1, num2, soma;

    printf("Entre com valor 1: ");
    scanf("%i", &num1);

    printf("Entre com valor 2: ");
    scanf("%i", &num2);
    
    soma = num1 + num2;
    printf("Somatoria = %i", soma);
    
    getch();
    return(0);
}