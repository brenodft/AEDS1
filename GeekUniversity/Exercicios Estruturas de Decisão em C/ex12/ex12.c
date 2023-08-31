//ler um numero inteiro, se for negativo, mostrar mensagem (numero invalido), se for positivo, calcular o log desse numero

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Digite um numero inteiro: ");
	int num;
	scanf("%d",&num);
	if (num>0){
		double result = log((double)num);
		printf("\nO log desse numero e igual a %lf",result);
	} else {
		printf("\nNumero Invalido!");
	}
	return 0;
}
