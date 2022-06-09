#include <stdio.h>
#include <conio.h>

int main(){

    int vet[9], i;
    
    vet [8] = 0;
    for (i=0; i<=8; i++) {
        printf("Entre com um valor: ");
        scanf("%d", &vet[i]);
        printf("%d", i * 3);
        vet[8] = vet[8] + vet[i];
    }
    printf("A soma do vetor: %d", vet[8]);
    
    return(0);
}