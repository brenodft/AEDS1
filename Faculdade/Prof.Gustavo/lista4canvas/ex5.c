#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100],palavra2[100];
    int j = 0;
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    for(int i = (strlen(palavra)-1); i>=0;i--){
        palavra2[i] = palavra[j];
        j++;
    }
    if(strcmp(palavra,palavra2) == 0){
        printf("Palindromo.");
    } else{
        printf("Nao palindromo.");
    }
    return 0;
}