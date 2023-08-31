//dois numeros, verificar

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite dois numeros: ");
	int num1,num2,dif;
	scanf("%d %d",&num1,&num2);
	if (num1>num2){
		printf("\nO numero 1 é maior que o número 2.");
		dif = num1-num2;
		printf("\nA diferença do numero 1 pro numero 2 é de %d",dif);
	} else{
		printf("\nO numero 2 é maior que o número 1.");
		dif = num2-num1;
		printf("\nA diferença do numero 1 pro numero 2 é de %d",dif);
	}
	return 0;
}
