//teorema de pitagoras

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float cat1,cat2,hip;
	printf("Digite o valor do cateto 1: ");
	scanf("%f",&cat1);
	printf("Digite o valor do cateto 2: ");
	scanf("%f",&cat2);
	hip = sqrt(pow(cat1,2) + pow(cat2,2));
	printf("A hipotenusa desse triangulo e igual a %.2f",hip);
	return 0;
}
