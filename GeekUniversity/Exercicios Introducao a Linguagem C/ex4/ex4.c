// ler real e imprimir resultado ao quadrado

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite um numero real: ");
	float real,quadrado;
	scanf("%f",&real);
	quadrado = real*real;
	printf("\nO quadrado do numero real digitado e igual a %.2f",quadrado);
	return 0;
}
