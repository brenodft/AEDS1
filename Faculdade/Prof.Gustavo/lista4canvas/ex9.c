#include <stdio.h>

int main() {
    int m, n, p, q;


    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &n);

    printf("Digite o número de linhas da matriz B: ");
    scanf("%d", &p);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &q);

    if (n != p) {
        printf("A multiplicação de A e B não é possível, pois o número de colunas de A não é igual ao número de linhas de B.\n");
    } else {

        int A[m][n], B[p][q];


        printf("Digite os elementos da matriz A (%dx%d):\n", m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("A[%d][%d]: ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("Digite os elementos da matriz B (%dx%d):\n", p, q);
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", &B[i][j]);
            }
        }

        int C[m][q];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                C[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }


        printf("Resultado da multiplicação de A e B (%dx%d):\n", m, q);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
