// ler numero real, se positivo imprima a raiz quadrada e se negativo, eleve ao quadrado

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Digite um numero real: ");
	float num1;
	scanf("%f",&num1);
	if (num1>0){
		printf("\nA raíz quadrada desse numero é igual a %.2f",sqrt(num1));
	} else {
		printf("\nEsse numero elevado ao quadrado é igual a %.2f",pow(num1,2));
	}
	return 0;
}
