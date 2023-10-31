#include <stdio.h>

int main(){
    int l,c;
    printf("Digite o valor de linhas e colunas: ");
    scanf("%d %d",&l,&c);
    int m[l][c];
    for(int i = 0;i<l;i++){
        for(int j=0; j<c; j++){
            printf("Digite o elemento da linha %d e coluna %d: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nA diagonal secundaria eh: ");
    for(int i = 0; i<l; i++){
        for(int j = 0; j<c; j++){
            if((i+j) == (l-1)){
                printf("%d ",m[i][j]);
            }
        }
    }
    return 0;
}