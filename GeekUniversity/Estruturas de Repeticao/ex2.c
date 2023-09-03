// escrever de 1 a 100 3 vezes, 1 vez com for, 1 vez com while, 1 vez com do while

#include <stdio.h>

int main(){
    int x = 1;
    printf("Usando for: ");
    for(int i = 1; i<=100; i++){
        printf("%d ",i);
    }
    printf("\nUsando while: ");
    while(x<=100){
        printf("%d ",x);
        x++;
    }
    x = 1;
    printf("\nUsando do while: ");
    do{
        printf("%d ",x);
        x++;
    } while (x<=100);
    return 0;
}