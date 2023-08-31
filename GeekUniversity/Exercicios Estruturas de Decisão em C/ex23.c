//determinar se um ano é bissexto

#include <stdio.h>

int main(){
    int ano;
    printf("Digite o ano para checar se ele é bissexto: ");
    scanf("%d",&ano);
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
        printf("\nAno bissexto.");
    } else {
        printf("\nNao é bissexto.");
    }
    return 0;
}