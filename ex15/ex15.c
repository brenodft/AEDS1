//radianos p graus

#include <stdio.h>
#include <stdlib.h>

int main(){
	float radianos,graus;
	printf("Digite o valor em radianos: ");
	scanf("%f",&radianos);
	graus = radianos * (180/3.14);
	printf("\nO valor em graus e igual a %.2f.",graus);
	return 0;
}
