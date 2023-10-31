#include <stdio.h>
#include <stdlib.h>

int **prodmat(int i,int j, int k, int l, int m1[i][j], int m2[k][l]){
    if (j != k){
        return 0;
    }
    int **m3 = (int**)malloc(i*sizeof(int));
    for(int b = 0; b< i; b++){
        m3[b] = (int*)malloc(l*sizeof(int));
        for(int c = 0; c<l; c++){
            m3[b][c] =  0;
        }
    }
}