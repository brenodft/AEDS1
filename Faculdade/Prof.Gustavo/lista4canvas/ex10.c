#include <stdio.h>

int main() {
    int n;

    printf("Digite o número de linhas para o triângulo de Pascal: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número de linhas deve ser um número natural.\n");
    } else {
        for (int linha = 0; linha < n; linha++) {
            for (int espaco = 0; espaco < n - linha - 1; espaco++) {
                printf("   ");
            }

            int coeficiente = 1;
            for (int coluna = 0; coluna <= linha; coluna++) {
                printf("%6d   ", coeficiente);
                coeficiente = coeficiente * (linha - coluna) / (coluna + 1);
            }
            printf("\n");
        }
    }

    return 0;
}
