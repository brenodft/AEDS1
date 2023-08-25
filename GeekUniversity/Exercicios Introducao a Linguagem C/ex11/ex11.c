//ms para kmh

#include <stdio.h>
#include <stdlib.h>

int main(){
	float ms,kmh;
	printf("Digite o valor da velocidade em m/s: ");
	scanf("%f",&ms);
	kmh = ms*3.6;
	printf("A velocidade em km/h e igual a %.2f",kmh);
	return 0;
}
