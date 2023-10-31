#include <stdio.h>
#include <stdlib.h>

int fibonacci(int termos){
    if(termos <= 1){
        return termos;
    }
    return fibonacci(termos-1) + fibonacci(termos-2);
}

int main(){
    printf("Digite o numero de termos da seq de fibonacci: ");
    int t;
    scanf("%d",&t);
    printf("A sequencia e: \n");
    for(int i =0; i<t; i++){
        printf("%d ",fibonacci(i));
    }   
    return 0;
}