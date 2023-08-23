//ler num real e imprimir a quinta parte desse numero

#include <stdio.h>
#include <stdlib.h>

int main(){
	float real,quinta;
	printf("Digite um numero real: ");
	scanf("%f",&real);
	quinta = real/5;
	printf("\nA quinta parte de %.2f e igual a %.2f.",real,quinta);
	return 0;
}
