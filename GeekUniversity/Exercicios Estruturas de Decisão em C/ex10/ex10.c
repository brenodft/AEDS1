// receber altura e sexo de uma pessoa e calcular o peso ideal
#include <stdio.h>
#include <stdlib.h>

int main(){
	float altura,pesoideal;
	char genero;
	printf("Digite a altura (EM METROS) e o genero do usuario (M/F): ");
	scanf("%f %c",&altura, &genero);
	if (genero == 'm' || genero =='M'){
		pesoideal = (72.7 * altura) - 58;
		printf("\nO peso ideal para um homem de %.2f é igual a %.2f",altura,pesoideal);
	} else if (genero == 'f' || genero == 'F'){
		pesoideal = (62.1 * altura) - 44.7;
		printf("\nO peso ideal para uma mulher de %.2f é igual a %.2f",altura,pesoideal);
	}
	return 0;
}
