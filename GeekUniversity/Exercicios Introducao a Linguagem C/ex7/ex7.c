//farenheit para celsius

#include <stdio.h>
#include <stdlib.h>

int main(){
	float celsius,faren;
	printf("Digite a temperatura em graus farenheit: ");
	scanf("%f",&faren);
	celsius = 5.0*(faren-32.0)/9.0;
	printf("\nA temperatura em graus celsius e igual a %.2f.",celsius);
	return 0;
}
