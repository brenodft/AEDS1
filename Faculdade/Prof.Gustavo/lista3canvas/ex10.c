#include <stdio.h>

int main(){
    int num1,num2,menor,mdc;
    printf("Digite dois numeros: ");
    scanf("%d %d",&num1,&num2);
    if (num1<num2){
        menor = num1;
    } else {
        menor = num2;
    }
    for(int i = 1; i<=menor; i++){
        if(num1 % i == 0 && num2 % i == 0){
            mdc = i;
        }
    }
    if(mdc==1){
        printf("\nO mdc é igual a %d, logo os numeros sao primos entre si.",mdc);
    } else{
        printf("\nO mdc é igual a %d, logo os numeros nao sao primos entre si.",mdc);
    }
    return 0;
}