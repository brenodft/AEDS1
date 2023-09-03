// incrementar 1000 em um programa ate ele chegar em 100000

#include <stdio.h>

int main(){
    int inteiro = 0;
    while (inteiro <= 100000){
        printf("\nValor de inteiro: %d",inteiro);
        inteiro = inteiro + 1000;
    }
    return 0;
}