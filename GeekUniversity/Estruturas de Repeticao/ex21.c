/*
    receber 2 numeros
    mostrar a soma dos numeros pares desse intervalo de numeros
    a multiplicaçao dos numeros impares desse intervalo
*/

#include <stdio.h>

int main(){
    int x,y,somapar=0,multimpar = 1;
    printf("Digite dois numeros: ");
    scanf("%d %d",&x,&y);
    for(int i = x; i<=y; i++){
        if (i%2 == 0){
            somapar += i;
        } else {
            multimpar = multimpar * i;
        }

    }
    printf("\nA soma dos numeros pares desse intervalo de numeros é: %d \nA multiplicacao dos numeros impares desse intervalo de numeros é: %d",somapar,multimpar);
    return 0;
}