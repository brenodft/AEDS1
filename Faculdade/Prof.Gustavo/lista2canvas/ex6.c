#include <stdio.h>

int main(){
    printf("Digite um numero inteiro: ");
    int num;
    scanf("%d",&num);
    switch (num){
        case 1: printf("Domingo."); break;
        case 2: printf("Segunda."); break;
        case 3: printf("Terça."); break;
        case 4: printf("Quarta."); break;
        case 5: printf("Quinta."); break;
        case 6: printf("Sexta."); break;
        case 7: printf("Sabado."); break;
        default: printf("Opcao Invalida.");
    } 
    return 0;
}