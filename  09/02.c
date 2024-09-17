#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define flag 0

int main(){
    printf("Numeros pares lidos no intervalo entre 1000 e 10000\n\n");

    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    float par = 0, total = 0;

    while( num != flag ){
        if( (int)num % 2 == 0 && num > 1000 && num < 10000 ){
            par ++;
        }
        total++;
    
        printf("Digite um numero: ");
        scanf("%f", &num);
    }
    float porcentagem = par / total * 100;

    printf("Numeros pares lidos no intervalo entre 1000 e 10000 = %.2f%%\n", porcentagem);

    return 0;
}