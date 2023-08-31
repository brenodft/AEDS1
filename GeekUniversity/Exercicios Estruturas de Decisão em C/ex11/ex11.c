//escrever numero maior que 0 e devolver a soma de todos os algarismos desse numero

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite um numero: ");
	int num,digito,soma = 0;
	scanf("%d",&num);
	while (num > 0){
		digito = num % 10;
		soma = soma + digito;
		num = num/10;
	}
	printf("\nSoma dos digitos do numero digitado: %d",soma);
	return 0;
}
