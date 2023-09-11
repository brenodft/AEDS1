#include <stdio.h>
#include <math.h>

int main(){
    int cat1,cat2,hip,area,perimetro;
    printf("Informe o valor dos catetos de um triangulo retangulo: ");
    scanf("%d %d",&cat1,&cat2);
    hip = sqrt(pow(cat1,2) + pow(cat2,2));
    area = (cat1*cat2)/2;
    perimetro =  cat1+cat2+hip;
    printf("Hipotenusa: %d Area: %d Perimetro: %d",hip,area,perimetro);
    return 0;
}