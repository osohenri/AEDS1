/*
    Declarar potencia = 1, base, expo;
    Ler base;
    Ler expo;
    Para i = 1 ate expo incremente
        potencia = potencia * base;
    Escreva potencia;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Potenciacao\n\n");

    double pot = 1, base;
    int expo; 

    printf("Escreva sua base\t");
    scanf(" %lf", &base);

    printf("Escreva seu expoente\t");
    scanf(" %i", &expo);

    for( int i = 1; i<=expo ; i++){
    pot *= base;
    }

    printf(" %.2lf\n", pot);
    return 0;
}