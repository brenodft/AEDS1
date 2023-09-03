//programa para encontrar o primeiro multiplo de 11,13 ou 17 apos um numero dado
#include <stdio.h>

int main(){
    printf("Digite um numero: ");
    int num,opcao;
    scanf("%d",&num);
    printf("\nSELECIONE UMA OPCAO: \n1 - Primeiro multiplo de 11 \n2 - Primeiro multiplo de 13 \n3 - Primeiro multiplo de 17 \n0 - Sair do programa\n Opcao: ");
    scanf("%d",&opcao);
    for (int i =1; i<=num; i++){
        switch(opcao){
            case 1: 
            
            if(i%11 == 0 && i != 11){
                printf("\nO primeiro multiplo de 11 é %d",i);
                return 0;  
            }
             break;
            case 2:
            if(i%13 == 0 && i != 13){
                printf("\nO primeiro multiplo de 13 é %d",i);
                return 0;
            }
            break;
            case 3:
            if(i%17 == 0 && i != 17){
                printf("\nO primeiro multiplo de 17 é %d",i);
                return 0;
            }break;
            case 0:
            printf("Saindo do programa...");
            return 0;
            break; 
        }
        
    }
    switch(opcao){
        case 1: printf("\nNão foram encontrados multiplos de 11 nesse numero."); break;
        case 2: printf("\nNão foram encontrados multiplos de 13 nesse numero."); break;
        case 3: printf("\nNão foram encontrados multiplos de 17 nesse numero."); break;
    }
    return 0;
}