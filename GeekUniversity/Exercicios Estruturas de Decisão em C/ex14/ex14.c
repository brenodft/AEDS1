/*estudante tem que atribuir 3 notas de 0 a 10
 pesos 2 3 5
 reprovado : media entre 0 e 2.9
 recuperacao: media entre 3 e 4.9
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite tres notas de 0 a 10: ");
	float nota1,nota2,nota3,mediap;
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	if ((nota1 < 0 || nota1 >10) || (nota2<0 || nota2>10) || (nota3<0 || nota3>10)){
		printf("\nERRO! Alguma das notas nao pertence ao intervalo 0,10");
		printf("\nDigite tres notas de 0 a 10: ");
		scanf("%f %f %f",&nota1,&nota2,&nota3);
	}
	mediap = ((nota1*2) + (nota2*3) + (nota3*5))/10;
	if (mediap <= 2.9){
		printf("\nInfelizmente o aluno foi REPROVADO.");
	} else if (mediap <= 4.9){
		printf("\nInfelizmente o aluno está de RECUPERACAO.");
	} else {
		printf("\nParabéns! O aluno foi APROVADO!");
	}
	return 0;
}
