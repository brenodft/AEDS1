#include <stdio.h>
#include <stdlib.h>

int* prodmat(int i, int j, int k, int l, int mat[i][j], int mat2[k][l]) {
    if (j != k) {
        printf("Impossível calcular o produto.\n");
        return NULL;
    }

    int* prodmat = (int*)malloc(i * l * sizeof(int));
    
    for (int t = 0; t < i; t++) {
        for (int m = 0; m < l; m++) {
            prodmat[t * l + m] = 0;
            for (int p = 0; p < j; p++) {
                prodmat[t * l + m] += mat[t][p] * mat2[p][m];
            }
        }
    }
    return prodmat;
}

int main() {
    int lin1, col1, lin2, col2;
    printf("Digite o número de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &lin1, &col1);
    printf("Digite o número de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &lin2, &col2);

    if (col1 != lin2) {
        printf("As dimensões das matrizes não são compatíveis para multiplicação.\n");
        return 1;
    }

    int mat[lin1][col1], mat2[lin2][col2];
    for (int i = 0; i < lin1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Digite o elemento da linha %d e coluna %d da primeira matriz: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < lin2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Digite o elemento da linha %d e coluna %d da segunda matriz: ",i,j);
            scanf("%d", &mat2[i][j]);
        }
    }

    int *result = prodmat(lin1, col1, lin2, col2, mat, mat2);
    if (result != NULL) {
        printf("A matriz resultante é:\n");
        for (int i = 0; i < lin1; i++) {
            for (int j = 0; j < col2; j++) {
                printf("%d ", result[i * col2 + j]);
            }
            printf("\n");
        }
        free(result);
    } else {
        printf("Não foi possível calcular o produto da matriz.\n");
    }

    return 0;
}
