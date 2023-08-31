//dois numeros e mostrar o maior, ou falar se sao iguais

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite dois numeros: ");
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	if (num1>num2){
		printf("\nO primeiro número é maior");
	} else if(num2>num1){
		printf("\nO segundo número é maior");
	} else if(num1==num2){
		printf("\nOs numeros sao iguais");
	}
	return 0;
}
