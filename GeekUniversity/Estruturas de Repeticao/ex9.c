//ler um numero inteiro N e imprimir os N primeiros numeros naturais impares

#include <stdio.h>

int main(){
    int N;
    printf("Digite o valor de N: ");
    scanf("%d",&N);
    for(int i =0; i<N; i++){
        if (i%2 != 0){
            printf("%d ",i);
        }
    }
    return 0;
}