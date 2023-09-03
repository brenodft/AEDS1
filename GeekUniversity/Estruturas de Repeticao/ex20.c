/*
Digitar uma sequencia de numeros inteiros e determinar se sao pares ou nao
Devera ser informado o numero de dados lidos e o numero de valores pares.
O processo terminara quando for digitado o numero 1000
*/

#include <stdio.h>

int main(){
    int seq,numval = 0,numpar = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&seq);
    while (seq != 1000){
        numval++;
        printf("Digite um numero inteiro: ");
        scanf("%d",&seq);
        if (seq %2 == 0){
            numpar++;
        }
    }
    printf("\nO numero de dados lidos é %d, o numero de valores pares é %d",numval,numpar);
    return 0;
}
