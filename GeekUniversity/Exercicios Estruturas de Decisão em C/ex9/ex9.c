//ler o salario de um trabalhador e o valor da prestaçao de um emprestimo. se a prestaçao for maior que 20% do salario imprima: emprestimo nao concedido, caso contrario imprima: emprestimo concedido

#include <stdio.h>
#include <stdlib.h>

int main(){
	int salario,prestacao;
	printf("\n--- MENU EMPRÉSTIMO ---\n");
	printf("Digite o salario de um trabalhador: ");
	scanf("%d",&salario);
	printf("Digite o valor da prestação: ");
	scanf("%d",&prestacao);
	if (prestacao > salario*1.2){
		printf("\nEmpréstimo não concedido!");
	} else{
		printf("\nEmpréstimo concedido!");
	}
	return 0;
}
