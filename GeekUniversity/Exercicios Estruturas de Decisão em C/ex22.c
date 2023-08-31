#include <stdio.h>

int main(){
    printf("Digite a idade e tempo de servico de um trabalhador: ");
    int idade,anoserv;
    scanf("%d %d",&idade, &anoserv);
    if ((idade >= 65) || (anoserv >= 30) || (idade >= 60 && anoserv >= 25) ){
        printf("\nO usuario pode aposentar.");
    } else {
        printf("\nO usuario nao pode aposentar.");
    }
    return 0;
}