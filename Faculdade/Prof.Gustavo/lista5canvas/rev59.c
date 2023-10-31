#include <stdio.h>

int fib(int termos){
    if(termos <=1){
        return termos;
    }
    return fib(termos-1) +  fib(termos-2);
}

int main(){
    printf("Digite o n de termos: ");
    int n;
    scanf("%d",&n);
    printf("\nSequencia: \n");
    for(int i =0; i<n; i++){
        printf("%d ",fib(i));
    }
    return 0;
}