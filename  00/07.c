/*
    Descreva altura, peso;
    Leia altura;
    peso = 72.7 * altura - 58;
    Escreva peso;
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("Peso ideal masculino\n\n");

    float altura, peso;

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    peso = 72.7 * altura - 58;
    printf("Peso ideal = %.2f \n", peso);

    return 0;
}