// ler um numero inteiro positivo N e calcular a soma dos N primeiros numeros naturais

#include <stdio.h>

int main(){
    int N,soma = 0;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d",&N);
    if ( N < 0){
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d",&N);
    }
    for(int i = 0; i<=N ; i++){
        soma += i;
    }
    printf("A soma dos %d primeiros numeros inteiros e igual a %d",N,soma);
    return 0;
}