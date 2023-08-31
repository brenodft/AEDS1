#include <stdio.h>

int main(){
	printf("Olá\n Digite seu nome: ");
	char nome[200];
	scanf("%s",&nome);
	printf("\nAgora eu sei que voce se chama %s",nome);
	return 0;
}
