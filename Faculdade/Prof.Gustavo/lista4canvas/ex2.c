#include <stdio.h>

int main(){
    int vetor[10],valor,count=0;
    for(int i =0; i<10; i++){
        printf("Digite um valor para a posicao %d do vetor: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("Digite um numero qualquer: ");
    scanf("%d",&valor);
    for(int j = 0;j<10;j++){
        if(valor == vetor[j]){
            count++;
        }
    }
    printf("Esse valor aparece %d vezes no vetor",count);
    return 0;
}