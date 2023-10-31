#include <stdio.h>

int main(){
    int vetor[10],maior;
    for(int i =0; i<10; i++){
        printf("Digite um numero para a posicao %d do vetor: ",i);
        scanf("%d",&vetor[i]);
    }
    maior = vetor[0];
    for(int j =0; j<10; j++){
        if (vetor[j]>maior){
            maior = vetor[j];
        }
    }
    printf("O maior numero desse vetor e %d",maior);
    return 0;
}