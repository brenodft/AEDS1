#include <stdio.h>

int main(){
    printf("Digite tres valores (a,b e c): ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a < b && a < c){
        if(b>c){
            printf("\nOrdem crescente: %d %d %d",a,c,b);
        } else{
            printf("\nOrdem crescente: %d %d %d",a,b,c);
        }
    } else if(a>b && a>c){
        if(b>c){
            printf("\nOrdem crescente: %d %d %d",c,b,a);
        } else{
            printf("\nOrdem crescente: %d %d %d",b,c,a);
        }
    } else{
        if(a == b){
            if(b>c){
                printf("\nOrdem crescente: %d %d %d",c,b,a);
            } else{
                printf("\nOrdem crescente: %d %d %d",a,b,c);
            }
        } 
        else if( a == c){
            if(a>b){
                printf("\nOrdem crescente: %d %d %d",b,a,c);
            }
            else{
                printf("\nOrdem crescente: %d %d %d",a,c,b);
            }
        }
    }
    return 0;
}
