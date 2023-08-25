//cm para pol

#include <stdio.h>
#include <stdlib.h>

int main(){
	float cm,pg;
	printf("Digite o valor em centimetros: ");
	scanf("%f",&cm);
	pg = cm/2.54;
	printf("\nTal valor em polegadas e igual a %.2f",pg);
	return 0;
}
