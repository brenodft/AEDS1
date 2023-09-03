//faça um programa que leia um numero positivo N par e imprima todos os numeros pares de 0 ate N em ordem crescente

#include <stdio.h>

int main(){
    int N;
    printf("Digite o valor de N (tem que ser positivo e par): ");
    scanf("%d",&N);
    if (N < 0 || N%2 != 0){
        printf("Digite o valor de N (tem que ser positivo e par): ");
        scanf("%d",&N);
    }
    for (int i = 0; i<=N; i = i+2){
        printf("%d ",i);
    }
    return 0;
}