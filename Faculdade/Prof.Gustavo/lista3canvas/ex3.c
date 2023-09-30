#include <stdio.h>

int main(){
    int a,soma = 0,count=0,media;
    do{
        printf("\nDigite um numero: ");
        scanf("%d",&a);
        if (a != 0){
            soma += a;
            count++;
        }
    }while(a != 0);
    media = soma/count;
    printf("\nA media e igual a %d",media);
    return 0;
}