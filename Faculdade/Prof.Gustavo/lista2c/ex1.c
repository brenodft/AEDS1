#include <stdio.h>
#include <string.h>

int main(){
    printf("Escreva uma mensagem de texto: ");
    char msg1[50],msg2[50];
    scanf("%s",&msg1);
    printf("\nEscreva outra mensagem de texto: ");
    scanf("%s",&msg2);
    strcat(msg1,msg2);
    printf("As duas mensagens juntas resultam em: %s",msg1);
    return 0;
}