// se o numero for positivo, calcule a raiz quadrada dele, caso seja negativo mostre uma mensagem de erro
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Digite um número: ");
	int num1;
	scanf("%d",&num1);
	if(num1>0){
		num1 = sqrt(num1);
		printf("\nA raíz quadrada desse número é igual a %d",num1);
	} else{
		printf("\nOpção Inválida! Encerrando o programa...");
	}
	return 0;
}
