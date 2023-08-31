//receber dois numeros e msostrar qual é o maior

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite dois numeros: ");
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	if(num1>num2){
		printf("\nO numero %d é maior",num1);
	} else {
		printf("\nO numero %d é maior",num2);
	}
	return 0;
}
