/*
    Descreva altura, peso;
    Leia altura;
    peso = 62.1 * altura - 44.7;
    Escreva peso;
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("Peso ideal feminino\n\n");

    float altura, peso;

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    peso = 62.1 * altura - 44.7;
    printf("Peso ideal = %.2f \n", peso);

    return 0;
}