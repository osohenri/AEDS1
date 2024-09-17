#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Numeros pares e impares\n\n");

    int quant;
    printf("Quantidade de numeros: ");
    scanf(" %d", &quant);

    int num, par = 0, impar = 0;

    while( quant > 0){
        printf("\nNumero: ");
        scanf(" %d", &num);

        if ( num % 2 == 0){
            par ++;
        }
        else{
            impar ++;
        }
        quant --;
    }
    printf("Quantidade de numeros pares = %d e numeros impares = %d\n", par, impar);

    return 0;
}