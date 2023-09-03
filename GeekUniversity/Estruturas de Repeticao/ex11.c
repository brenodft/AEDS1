//ler um numero inteiro positivo N e imprimir todos os numeros naturais de 0 ate N em ordem crescente
#include <stdio.h>

int main(){
    int N;
    printf("Digite um numero N: ");
    scanf("%d",&N);
    for (int i = 0; i <= N; i++){
        printf("%d ",i);
    }
    return 0;
}