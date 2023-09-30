#include <stdio.h>

int main(){
    int idade;
    printf("Digite a idade da pessoa: ");
    scanf("%d",&idade);
    if (idade < 16){
        printf("\nA pessoa não é eleitora.");
    } else if(idade <= 17){
        printf("\nA pessoa é uma eleitora facultativa");
    } else if(idade <= 64){
        printf("\nEleitor obrigatorio.");
    } else{
        printf("\nEleitor facultativo maior de idade.");
    }
    return 0;
}