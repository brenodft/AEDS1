#include <stdio.h>

int main(){
    int vetor[10];
    for(int i = 0; i<10; i++){
        printf("Digite um numero inteiro para a posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }
    for(int i = 0; i<10; i++){
        for(int j =0; j<10; j++){
            if (vetor[i] < vetor[j]){
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    printf("O vetor organizado e: ");
    for(int i =0; i<10; i++){
        printf("%d ",vetor[i]);
    }
    return 0;
}