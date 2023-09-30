#include <stdio.h>

int main() {
    int v1, v2, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    do {
        printf("Escreva dois valores inteiros: ");
        scanf("%d %d", &v1, &v2);

        if (v1 == 0 || v2 == 0) {
            if(v1 || v2 != 0){
                if(v1 <= 25 && v1 != 0){
                    c1++;
                } else if(v1<=50 && v1 != 0){
                    c2++;
                } else if(v1<=75 && v1 != 0){
                    c3++;
                } else if(v1<=100 && v1 != 0){
                    c4++;
                }
                if(21 <= 25 && v2 != 0){
                    c1++;
                } else if(v2<=50 && v2 != 0){
                    c2++;
                } else if(v2<=75 && v2 != 0){
                    c3++;
                } else if(v2<=100 && v2 != 0){
                    c4++;
                }
            }
            break; 
        }

        if (v1 < 0 || v2 < 0 || v1 > 100 || v2 > 100) {
            printf("Digite novamente: ");
            scanf("%d %d", &v1, &v2);
        }

        if (v1 <= 25 && v2 <= 25) {
            c1 += 2;
        } else if (v1 <= 25) {
            c2 += 1;
        } else if (v2 <= 25) {
            c2 += 1;
        } else if (v1 <= 50 && v2 <= 50) {
            c2 += 2;
        } else if (v1 <= 50) {
            c3 += 1;
        } else if (v2 <= 50) {
            c3 += 1;
        } else if (v1 <= 75 && v2 <= 75) {
            c3 += 2;
        } else if (v1 <= 75) {
            c4 += 1;
        } else if (v2 <= 75) {
            c4 += 1;
        } else if (v1 <= 100 && v2 <= 100) {
            c4 += 2;
        } else if (v1 <= 100) {
            c4 += 1;
        } else if (v2 <= 100) {
            c4 += 1;
        }

    } while (1); 

    printf("\nA porcentagem de valores lidos no intervalo [1...25] é %.2f ", (float)c1 / 100);
    printf("\nA porcentagem de valores lidos no intervalo [26...50] é %.2f ", (float)c2 / 100);
    printf("\nA porcentagem de valores lidos no intervalo [51...75] é %.2f ", (float)c3 / 100);
    printf("\nA porcentagem de valores lidos no intervalo [76...100] é %.2f ", (float)c4 / 100);

    return 0;
}
