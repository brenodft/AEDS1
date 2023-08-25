//km para milhas

#include <stdio.h>
#include <stdlib.h>

int main(){
	float km,miles;
	printf("Digite o valor em km: ");
	scanf("%f",&km);
	miles = km/1.61;
	printf("\nO valor em milhas e igual a %.2f.",miles);
	return 0;
}
