//kelvin p celsius

#include <stdio.h>
#include <stdlib.h>

int main(){
	float kelvin,celsius;
	printf("Digite uma temperatura em graus kelvin: ");
	scanf("%f",&kelvin);
	celsius = kelvin - 273.15;
	printf("A temperatura em graus celsius e igual a %.2f.",celsius);
	return 0;
}
