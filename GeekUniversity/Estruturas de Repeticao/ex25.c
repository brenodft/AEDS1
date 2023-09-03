// soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5

#include <stdio.h>

int main(){
    int soma= 0;
    for (int i = 0; i<=1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }
    printf("A soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 é igual a %d",soma);
    return 0;
}