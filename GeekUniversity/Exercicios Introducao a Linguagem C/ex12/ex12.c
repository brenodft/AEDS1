//milhas para km

#include <stdio.h>
#include <stdlib.h>

int main(){
	float milhas,km;
	printf("Digite o valor em milhas: ");
	scanf("%f",&milhas);
	km = 1.61*milhas;
	printf("\nO valor em km e igual a %.2f.",km);
	return 0;
}
