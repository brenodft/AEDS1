// digitar 3 valores inteiros e imprimir a soma deles

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,num3,soma;
	printf("Digite 3 valores inteiros: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	soma = num1+num2+num3;
	printf("\nA soma dos 3 valores inteiros digitados e igual a %d",soma);
	return 0;
}
