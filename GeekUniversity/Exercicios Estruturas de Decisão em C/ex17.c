//calcular e mostrar a area de um trapezio

#include <stdio.h>

int main(){
    float basema,baseme,altura,trapezio;
    printf("Digite a base maior: ");
    scanf("%f",&basema);
    printf("\nDigite a base menor: ");
    scanf("%f",&baseme);
    printf("\nDigite a altura: ");
    scanf("%f",&altura);
    trapezio = ((basema+baseme)*altura)/2;
    printf("\nA area do trapezio e igual a %.2f",trapezio);
    return 0;
}