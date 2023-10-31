#include <stdio.h>
#include <string.h>

int main() {
    printf("Digite uma frase: ");
    int count = 0, i = 0, palin = 0;
    char frase[100];
    scanf(" %99[^\n]", frase); 

    printf("Os palíndromos são: ");
    
    char aux[100];

    while (frase[i] != '\0') {
        int j = 0;
        while (frase[i] != ' ' && frase[i] != '\0') {
            aux[j] = frase[i];
            j++;
            i++;
        }
        aux[j] = '\0'; 
        int len = strlen(aux);
        int isPalindrome = 1;

        for (int k = 0; k < len / 2; k++) {
            if (aux[k] != aux[len - k - 1]) {
                isPalindrome = 0;
                break;
            }
        }

        if (isPalindrome) {
            palin++;
            printf("%s ", aux);
        }

        if (frase[i] == ' ') {
            i++; 
        }

        count++;
    }

    printf("\nA frase digitada foi: %s\nEla tem %d palíndromos\n", frase, palin);
    return 0;
}
