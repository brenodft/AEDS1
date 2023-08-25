//kg para libras

#include <stdio.h>
#include <stdlib.h>

int main(){
	float kg,lb;
	printf("Digite o valor em quilogramas: ");
	scanf("%f",&kg);
	lb = kg/0.45;
	printf("\nEsse valor em libras e igual a %f",lb);
	return 0;
}
