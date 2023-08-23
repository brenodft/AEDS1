//celsius p kelvin

#include <stdio.h>
#include <stdlib.h>

int main(){
	float celsius,kelvin;
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f",&celsius);
	kelvin = celsius+273.15;
	printf("\nEssa temperatura em graus kelvin e igual a %.2f.",kelvin);
	return 0;
}
