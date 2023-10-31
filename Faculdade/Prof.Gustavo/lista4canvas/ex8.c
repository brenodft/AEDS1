#include <stdio.h>

int main(){
    printf("Digite um valor n: ");
    int n;
    scanf("%d",&n);
    int matriz[n][n];
    for(int i =0; i<n; i++){
        for(int j = 0; j <n; j++){
            printf("Digite o elemento linha %d na coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Diagonal principal: ");
    for(int i = 0; i<n; i++){
            printf("%d ",matriz[i][i]);
    }
    return 0;
}