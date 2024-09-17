/*
    70% abaixo 500
    60% 500 e 3000
    50% acima 3000

    Escrever valor com desconto
*/


#include <stdio.h>
#include <stdlib.h>

#define flag 0

int main(){
    printf("Itens em promocao\n\n");

    float item, promo;
    printf("Qual o valor do produto?\n");
    scanf("%f", &item);

    while( item != 0 ){
        promo = item * 0.4;
        if ( item < 500){
            promo = item * 0.3;
        }
        else
            if ( item > 3000){
                promo = item * 0.5;
            }
        printf("Valor promocional: %.2f\n", promo);

        printf("Qual o valor do produto?\n");
        scanf("%f", &item);
    }
    return 0;
}