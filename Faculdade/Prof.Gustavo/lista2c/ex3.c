#include <stdio.h>

int main(){
    int num1,num2;
    printf("Digite dois numeros: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("%d é maior que %d",num1,num2);
    } else if(num1 < num2){
        printf("%d é menor que %d",num1,num2);
    } else {
        printf("%d é igual a %d",num1,num2);
    }
    return 0;
}