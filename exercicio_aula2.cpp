#include <stdio.h>
#include <conio.h>

int main(void){
	float n1, n2, soma, media;
	scanf("%f", &n1);
	scanf("%f", &n2);
	soma = n1 +n2;
	media = soma/2;
	printf("A media = %f", media);
	getch();
	return(0);
}