//verificar se um numero e divisivel por 3 ou por 5 

#include <stdio.h>

int main(){
    printf("Digite um numero inteiro: ");
    int num;
    scanf("%d",&num);
    if (num % 3  == 0){
        printf("\nNumero divisivel por 3");
    } else if (num % 5 == 0){
        printf("\nNumero divisivel por 5");
    }
    return 0;
}