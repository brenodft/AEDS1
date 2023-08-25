//m3 para L

#include <stdio.h>
#include <stdlib.h>

int main(){
	float m3,l;
	printf("Digite o valor em metros cubicos: ");
	scanf("%f",&m3);
	l = 1000*m3;
	printf("\nO valor em litros e igual a %.2f",l);
	return 0;
}
