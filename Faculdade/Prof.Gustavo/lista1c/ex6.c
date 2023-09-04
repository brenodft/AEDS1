#include <stdio.h>

int main(){
    float a,b,area,perimetro;
    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f",&a,&b);
    area = a*b;
    perimetro = a+a+b+b;
    printf("\nArea: %.2f Perimetro: %.2f",area,perimetro);
    return 0;
}