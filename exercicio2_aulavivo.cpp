#include <stdio.h>
#include <conio.h>

int main(){
    float preco_litro, valor_pago, qtde_litros;
    char combustivel[10];
    
    printf("Entre com o tipo de combustivel: ");
    gets(combustivel);

    printf("Entre com o preco do combustivel: ");
    scanf("%f", &preco_litro);

    printf("Entre com o valor a ser pago: ");
    scanf("%f", &valor_pago);

    qtde_litros = valor_pago / preco_litro;

    printf("Voce vai colocar com %0.2f reais, %0.2f litros de combustivel %s",
     valor_pago, qtde_litros, combustivel);

    return 0;
}
