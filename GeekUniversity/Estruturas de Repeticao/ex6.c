//ler 10 inteiros e imprimir a media

#include <stdio.h>

int main(){
    int inteiro, soma = 0;
    for(int i =0; i<10; i++){
        printf("Digite o inteiro de posicao %d: ",i+1);
        scanf("%d",&inteiro);
        soma += inteiro;
    }
    soma = soma/10;
    printf("\nA soma e igual a %d",soma);
    return 0;
}