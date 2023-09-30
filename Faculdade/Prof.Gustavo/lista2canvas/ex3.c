#include <stdio.h>

int main(){
    printf("Digite um numero: ");
    int num;
    scanf("%d",&num);
    if (num%2 == 0){
        printf("\nO número é divisivel por 2.");
    }
    if (num%5 == 0){
        printf("\nO número é divisivel por 5.");
    }
    if (num%10 == 0){
        printf("\nO número é divisivel por 10.");
    }  else {
        printf("\nO número não é divisivel por nenhum desses numeros.");
    }
    return 0;
}