#include <stdio.h>

int main(){
    printf("Digite dois numeros: ");
    int num1,num2,maior,i,mmc;
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        maior = num1;
    } else{
        maior = num2;
    }
    i = maior;
    while(1){
        if (i % num1 == 0 && i % num2 == 0){
            mmc = i;
            break;
        }
        i++;
    }
    printf("O MMC de %d e %d é: %d\n", num1, num2, mmc);
    return 0;
}