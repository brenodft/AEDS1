//caso o numero seja positivo imprima a raiz quadrada e o quadrado do numero digitado

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Digite um numero: ");
	float num1;
	scanf("%f",&num1);
	if(num1>0){
		printf("\nRaíz quadrada: %.2f, Quadrado: %.2f",sqrt(num1),pow(num1,2));
	}
	return 0;
}
