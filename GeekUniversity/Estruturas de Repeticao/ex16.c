// ler um numero inteiro positivo e impar N  e imprima todos os numeros impares de 1 ate N em ordem decrescente

#include <stdio.h>

int main(){
    int N;
    printf("Digite um numero inteiro positivo e impar: ");
    scanf("%d",&N);
    if ( N < 0 || N %2 == 0){
    printf("Digite um numero inteiro positivo e impar: ");
    scanf("%d",&N);        
    }
    for (int i = N; i >= 1; i = i-2){
        printf("%d ",i);
    }
    return 0;
}