#include <stdio.h>

int main(){
    int num, fat = 1;
    printf("Digite um numero: ");
    scanf("%d",&num);
    for(int i = num;i>=1; i--){
        fat *= i;
    }
    printf("O fatorial de %d é %d",num,fat);
    return 0;
}