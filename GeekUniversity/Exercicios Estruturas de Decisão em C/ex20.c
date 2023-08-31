//verificar se o triangulo é escaleno isosceles ou equilatero

#include <stdio.h>

int main(){
    int lado1,lado2,lado3;
    printf("Digite os lados do triangulo: ");
    scanf("%d %d %d",&lado1,&lado2,&lado3);
    if (lado1 == lado2 && lado1 == lado3){
        printf("\nO triangulo é equilatero.");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("\nO triangulo é isosceles.");
    } else {
        printf("\nO triangulo é escaleno");
    }
    return 0;
}