#include <stdio.h>

int main(){
    int a,b;
    printf("Digite 2 numeros naturais: ");
    scanf("%d %d",&a,&b);
    if(a%b == 0){
        printf("a divisivel por b");
    } else if (b%a==0){
        printf("b divisivel por a");
    } else{
        printf("ninguem divisivel por ninguem");
    }
    return 0;
}