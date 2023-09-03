//programa para calcular a soma dos 50 primeiros numeros pares

#include <stdio.h>

int main(){
    int count =0, soma=0, par=0;
    do{
        soma += par;
        par += 2;
        count ++;
    } while(count <= 50);
    printf("Soma: %d",soma);
    return 0;
}