//celsius para farenheit

#include <stdio.h>
#include <stdlib.h>

int main(){
	float celsius,faren;
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f",&celsius);
	faren = celsius*(9.0/5.0)+32;
	printf("A temperatura em graus farenheit e igual a %.2f.",faren);
	return 0;
}
