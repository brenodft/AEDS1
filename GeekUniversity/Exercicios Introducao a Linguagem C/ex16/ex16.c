// polegadas para centimetros

#include <stdio.h>
#include <stdlib.h>

int main(){
	float pg,cm;
	printf("Digite o valor em polegadas: ");
	scanf("%f",&pg);
	cm = pg*2.54;
	printf("\nO valor digitado em centimetros e igual a: %.2f",cm);
	return 0;
}
