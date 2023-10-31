#include <stdio.h>
#include <stdlib.h>

int* soma (int v1[2],int v2[2]){
    int *s = malloc(sizeof(int) * 2);
    for(int i = 0; i<2; i ++){
        s[i] = v1[i] + v2[i];
    }
    return s;
}

int main(){
    int vet1[2] = {0,1}, vet2[2] = {3,4};
    int* result = soma(vet1,vet2);
    printf("A soma desses vetores e: ");
    for(int i = 0; i<2; i++){
        printf("%d ", result[i]);
    }
    return 0;
}