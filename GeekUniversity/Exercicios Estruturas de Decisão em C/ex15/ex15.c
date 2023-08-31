// atribuir um numero para cada dia da semana

#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao;
	printf("Digite um numero de 1 a 7: ");
	scanf("%d",&opcao);
	switch(opcao){
	case 1: printf("\nDomingo"); break;
	case 2: printf("\nSegunda"); break;
	case 3: printf("\nTerca"); break;
	case 4: printf("\nQuarta"); break;
	case 5: printf("\nQuinta"); break;
	case 6: printf("\nSexta"); break;
	case 7: printf("\nSabado"); break;
	}
	return 0;
}
