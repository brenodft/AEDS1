// relacionar um numero a um mes

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite um numero inteiro: ");
	int opcao;
	scanf("%d",&opcao);
	switch(opcao){
	case 1: printf("\nJaneiro"); break;
	case 2: printf("\nFevereiro"); break;
	case 3: printf("\nMarço"); break;
	case 4: printf("\nAbril"); break;
	case 5: printf("\nMaio"); break;
	case 6: printf("\nJunho"); break;
	case 7: printf("\nJulho"); break;
	case 8: printf("\nAgosto"); break;
	case 9: printf("\nSetembro"); break;
	case 10: printf("\nOutubro"); break;
	case 11: printf("\nNovembro"); break;
	case 12: printf("\nDezembro"); break;
	return 0;
	}
}
