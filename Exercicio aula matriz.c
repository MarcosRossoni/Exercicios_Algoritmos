#include <stdio.h>

int main(){
     int mat[7][5];
     int soma = 0, L, C;
     
     for (L = 0; L <= 6; L++) {
         soma = 0;
         for(C = 0; C <= 4; C++){
             scanf("%d", &mat[L][C]);
             
             soma = soma + mat[L,C];
         }
         printf("%d", soma);
     }
     
     return(0);
}