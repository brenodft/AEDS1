/*escreva um algoritmo que leia certa quantidade de numeros
e imprima o maior deles e quantas vezes o maior numero foi lido
a quantidade de numeros a serem lidos sera informada pelo usuario

*/
#include <stdio.h>

int main(){
    int qtd,maior,menor,n,count = 0;
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d",&qtd);
    printf("Digite um numero: ");
    scanf("%d",&n);
    maior = n;
    menor = n;
    for(int i = 1; i<qtd; i++){
    printf("\nDigite um numero: ");
    scanf("%d",&n);
    if (n > maior){
        maior = n;
        count ++;
    }
    if (n < menor){
        menor = n;
    }
    }
    printf("\nO maior numero é %d e foi lido %d vezes, ja o menor numero é %d",maior,count,menor);
    return 0;
}