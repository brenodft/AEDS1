#include <stdio.h>

void triangulodec(int n){
    if(n==0){
        return;
    }
    for(int i = 0; i<n;i++){
        printf("*");
    }
    printf("\n");
    return(triangulodec(n-1));
}

int main(){
    int n;
    printf("Digite o numero de linhas: ");
    scanf("%d",&n);
    triangulodec(n);
    return 0;
}