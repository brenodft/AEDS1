// soma de todos os divisores de um numero inteiro

#include <stdio.h>

int main(){
    printf("Digite um numero inteiro: ");
    int num, soma=0;
    scanf("%d",&num);
    for (int i =0; i<num; i++){
        if ( num % i == 0){
            soma += i;
        }
    }
    printf("\nA soma de todos os divisores do numero %d é igual a %d.",num,soma);
    return 0;
}