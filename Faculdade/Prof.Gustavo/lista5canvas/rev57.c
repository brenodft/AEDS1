#include<stdio.h>

void triangulo(int n, int linha){
    if (linha == n){
        return;
    }

    for(int i = 0; i<=linha;i++){
        printf("*");
    }
    printf("\n");
    return (triangulo(n,linha+1));
}

int main(){
    printf("Digite um numero: ");
    int n;
    scanf("%d",&n);
    triangulo(n,0);
    return 0;
}