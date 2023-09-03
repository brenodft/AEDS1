//programa que le um valor N positivo e impar e imprime todos os numeros de 1 a N impares de forma crescente

#include <stdio.h>

int main(){
    int N;
    printf("Digite o valor de N (Tem que ser impar a positivo): ");
    scanf("%d",&N);
    if (N < 0 || N % 2 == 0){
    printf("\nDigite o valor de N (Tem que ser impar a positivo): ");
    scanf("%d",&N);
    }
    for (int i = 1; i <= N; i = i+2){
        printf("%d ",i);
    }
    return 0;   
}