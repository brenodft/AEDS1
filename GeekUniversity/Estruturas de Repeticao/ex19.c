// ler um numero inteiro entre 100 e 999 e imprimir na saida cada um dos algarismos que compoem o numero

#include <stdio.h>

int main(){
    int num, alg[3], resto;
    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%d",&num);
    if (num < 100 || num > 999){
    printf("\nDigite um numero inteiro entre 100 e 999: ");
    scanf("%d",&num);
    }   
    for(int i = 0; i<3; i++){
        resto = num%10;
        alg[i] = resto;
        num = num/10;
    }
    for(int j = 2; j >= 0; j--){
        printf("%d ", alg[j]);
    }
    return 0;
}