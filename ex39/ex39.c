//divisao monetaria

#include <stdio.h>
#include <stdlib.h>

int main(){
	int qtd;
	float inicial,porcento;
	printf("Digite um valor inicial: ");
	scanf("%f",&inicial);
	printf("Digite o numero de pessoas: ");
	scanf("%d",&qtd);
	float montante[qtd];
	for(int i = 0; i<qtd; i++){
		printf("\nQuantos porcento a pessoa numero %d vai receber?: ",i+1);
		scanf("%f",&porcento);
		montante[i] = (porcento/100) * inicial;
	}
	for(int j = 0; j<qtd; j++){
		printf("\nA pessoa %d vai receber %.2f reais",j+1,montante[j]);
	}
	return 0;
}
