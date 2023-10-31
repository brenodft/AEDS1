#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[100],palavra2[100];
    printf("Digite uma palavra: ");
    scanf("%s",palavra1);
    int j = 0;
    for(int i = (strlen(palavra1))-1; i >= 0; i--){
        palavra2[i] = palavra1[j];
        j++;
    }
    if(strcmp(palavra1,palavra2) == 0){
        printf("Palindromo");
    }else{
        printf("Nao palindromo");
    }
    return 0;
}