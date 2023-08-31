//ler 2 notas, checar se elas sao validas e fazer a media delas

#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1,num2,media;
	printf("Digite duas notas: ");
	scanf("%f %f",&num1,&num2);
	if (num1 >=0 && num1 <= 10){
		if (num2 >=0 && num2 <= 10){
			media = (num1+num2)/2;
			printf("\nA media dessas duas notas é igual a %.2f",media);
		} else {
			printf("\nOcorreu um erro. A segunda nota está errada!");
		}
	} else {
		printf("\nOcorreu um erro. A primeira nota está errada!");
	}
	return 0;
}
