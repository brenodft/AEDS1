#include <stdio.h>

int main(){
    printf("Digite um numero inteiro: ");
    int num;
    scanf("%d",&num);
    if (num % 2 == 0 && num == 0){
        printf("O numero é par.");
    }
    return 0;
}