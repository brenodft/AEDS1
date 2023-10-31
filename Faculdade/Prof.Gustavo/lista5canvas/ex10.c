#include <stdio.h>

int pascal(int linha, int coluna) {
    if (coluna == 0 || coluna == linha) {
        return 1;
    } else {
        return pascal(linha - 1, coluna - 1) + pascal(linha - 1, coluna);
    }
}

int main() {
    int n;
    printf("Digite o número de linhas para o Triângulo de Pascal: ");
    scanf("%d", &n);

    for (int linha = 0; linha < n; linha++) {
        for (int esp = 0; esp < n - linha - 1; esp++) {
            printf("  ");
        }
        for (int coluna = 0; coluna <= linha; coluna++) {
            printf("%4d", pascal(linha, coluna));
        }
        printf("\n");
    }

    return 0;
}
