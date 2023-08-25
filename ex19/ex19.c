//L para m3

#include <stdio.h>
#include <stdlib.h>

int main(){
	float m3,l;
	printf("Digite o valor em litros: ");
	scanf("%f",&l);
	m3 = l/1000;
	printf("\nO valor em m3 e igual a %.2f",m3);
	return 0;
}
