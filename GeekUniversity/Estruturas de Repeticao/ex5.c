//pedir para o usuario digitar 10 valores e somar

#include <stdio.h>

int main(){
    int valor,soma = 0;
    for(int i =0; i<10; i++){
        printf("\nDigite o %d valor: ",i+1);
        scanf("%d",&valor);
        soma += valor;
    }
    printf("\nA soma desses 10 valores e igual a %d",soma);
    return 0;
}