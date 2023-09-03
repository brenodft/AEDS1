//ler um numero inteiro positivo N e imprimir todos os numeros naturais de 0 ate N em ordem decrescente
#include <stdio.h>

int main(){
    int N;
    printf("Digite o numero N: ");
    scanf("%d",&N);
    for (int i = N; i >= 0; i--){
        printf("%d ",i);
    }
    return 0;
}