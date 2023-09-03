//ler 10 inteiros positivos, ignorando os negativos e imprimir a media

#include <stdio.h>

int main(){
    float inteiro,soma=0;
    for(int i = 0; i<10; i++){
        printf("\nDigite um numero inteiro positivo de posicao %d: ",i+1);
        scanf("%f",&inteiro);
        if (inteiro > 0){
            soma += inteiro;
        } else {
            printf("\nVoce escreveu um numero negativo, voltando...");
            i--;
        }
    }
    soma = soma/10;
    printf("\nA media dos numeros inteiros positivos e igual a %.2f",soma);
    return 0;
}