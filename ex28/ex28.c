//leitura de 3 valores e apresentar como resultado a soma dos quadrados dos 3 valores lidos

#include <stdio.h>
#include <stdlib.h>

int main(){
	float v1,v2,v3,soma;
	printf("Digite tres valores: ");
	scanf("%f %f %f"&v1,&v2,&v3);
	soma = (v1*v2)+(v2*v2)+(v3*v3);
	printf("A soma do quadrado desses tres valores e igual a %.2f.",soma);
	return 0;
}
