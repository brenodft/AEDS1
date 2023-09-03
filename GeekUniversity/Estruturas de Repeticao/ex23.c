//ler um numero positivo e imprimir seus divisores

#include <stdio.h>

int main(){
    printf("Digite um numero inteiro e positivo: ");
    int num;
    scanf("%d",&num);
    for(int i =0; i<=num; i++){
        if( num %i == 0 ){
            printf("%d ",i);
        }
    }
    return 0;
}