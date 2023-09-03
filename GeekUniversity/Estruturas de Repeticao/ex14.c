//faça um programa que leia um numero positivo par N e imprima todos os numeros positivos e pares ate N em ordem decrescente

#include <stdio.h>

int main(){
    int N;
    printf("Digite o valor de N (tem que ser positivo e par): ");
    scanf("%d",&N);
    if (N < 0 || N % 2 != 0){
    printf("\nDigite o valor de N (tem que ser positivo e par): ");
    scanf("%d",&N);
    }
    for (int i = N; i >= 0; i = i-2){
        printf("%d ",i);
    }
    return 0;
}