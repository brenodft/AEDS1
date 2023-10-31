#include <stdio.h>
#include <stdlib.h>

int* soma (int v1[3], int v2[3]){
    int *v3 = (int*)malloc(3*sizeof(int));
    for(int i = 0; i<3; i++){
        v3[i] = v1[i]+v2[i];
    }
    return v3;
}

int main(){
    int v1[3] = {1,2,3}, v2[3] = {4,5,6};
    int *v = soma(v1,v2);
    printf("\nResultado: ");
    for(int i = 0; i<3; i++){
        printf("%d ",v[i]);
    }
    return 0;
}