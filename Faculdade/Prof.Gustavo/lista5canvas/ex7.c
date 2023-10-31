#include <stdio.h>

int recursao(int tamanho) {
    if (tamanho > 0) {
        recursao(tamanho - 1); 
        for (int i = 0; i < tamanho; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int size;
    printf("Digite um numero: ");
    scanf("%d", &size);
    recursao(size); 
    return 0;
}
