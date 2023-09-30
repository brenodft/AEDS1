#include <stdio.h>

int main(){
    printf("Digite um numero: ");
    int num;
    scanf("%d",&num);
    if (num == 2 || num == 3 || num == 5 || num == 7){
        printf("\nEsse numero é primo");
    } else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0){
        printf("\nEsse número não é primo.");
    } else{
        printf("\nEsse número é primo.");
    }
    return 0;   
}