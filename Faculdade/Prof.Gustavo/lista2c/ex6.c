#include <stdio.h>

int main(){
    printf("Digite a altura e largura: ");
    int altura,largura,per,area;
    scanf("%d %d",&altura,&largura);
    per = altura+altura+largura+largura;
    area = altura * largura;
    printf("Perimetro: %d Area: %d",per,area);
    return 0;
}