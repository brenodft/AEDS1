//ler 10 numeros e escrever o menor e o maior valor lido

#include <stdio.h>

int main(){
    int maior,menor,num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    maior = num;
    menor = num;
    for(int i = 0; i<9 ; i++){
        printf("\nDigite um numero: ");
        scanf("%d",&num);
        if (num < menor){
            menor = num;
        }
        if (num > maior){
            maior = num;
        }
    }
    printf("\nO maior numero e %d e o menor numero e %d",maior,menor);
    return 0;
}