#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int numero, tamanho = 0, soma = 0;

    do {
        printf("Digite um número natural (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero != 0) {
            int *novoArray = (int *)realloc(array, (tamanho + 1) * sizeof(int));
            array = novoArray;
            array[tamanho] = numero;
            soma += numero;
            tamanho++;
        }
    } while (numero != 0);

    if (tamanho == 0) {
        printf("Nenhum número foi inserido.\n");
        free(array);
        return 1;
    }

    // Ordena o array para facilitar o cálculo da mediana
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    int media = soma / tamanho;

    int mediana;
    if (tamanho % 2 == 0) {
        mediana = (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2;
    } else {
        mediana = array[tamanho / 2];
    }

    int moda = array[0];
    int modaFrequencia = 1;
    int frequenciaAtual = 1;

    for (int i = 1; i < tamanho; i++) {
        if (array[i] == array[i - 1]) {
            frequenciaAtual++;
        } else {
            frequenciaAtual = 1;
        }

        if (frequenciaAtual > modaFrequencia) {
            modaFrequencia = frequenciaAtual;
            moda = array[i];
        }
    }

    printf("Media: %d\nModa: %d\nMediana: %d\n", media, moda, mediana);
    free(array);
    return 0;
}
