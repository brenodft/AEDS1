//verificar se o numero é par ou impar

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite um numero: ");
	int num1;
	scanf("%d",&num1);
	if(num1%2 == 0){
		printf("\nO número é par");
	} else{
		printf("\nO número é ímpar");
	}
	return 0;
}
