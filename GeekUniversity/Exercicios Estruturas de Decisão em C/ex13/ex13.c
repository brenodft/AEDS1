//calcular a media ponderada de 3 notas, pesos: 1,1,2 MEDIA PARA PARA PASSAR DE ANO = 60

#include <stdio.h>
#include <stdlib.h>

int main(){
	double nota1,nota2,nota3,mediap;
	printf("Digite tres notas: ");
	scanf("%lf %lf %lf",&nota1,&nota2,&nota3);
	mediap = (nota1+nota2+(nota3*2))/4;
	printf("\nA media ponderada dessas notas e igual a %.2lf",mediap);
	if (mediap >= 60){
		printf("\nLogo, o aluno foi APROVADO!");
	} else {
		printf("\nLogo, o aluno foi REPROVADO.");
	}
	return 0;
}
