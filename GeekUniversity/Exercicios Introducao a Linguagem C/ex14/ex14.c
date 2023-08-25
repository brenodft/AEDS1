//graus p radianos

#include <stdio.h>
#include <stdlib.h>

int main(){
	float graus,radianos;
	printf("Digite o valor em graus: ");
	scanf("%f",&graus);
	radianos = graus*(3.14/180);
	printf("\nO valor em radianos e igual a %.2f",radianos);
	return 0;
}
