/*
    Descreva area, raio;
    Leia raio;
    area = 2 * 3.14 * r;
    Escreva area;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Area de um circulo\n\n");
    float area, raio;

    printf("Qual valor do raio? \n");
    scanf("%f", &raio);

    area = 2 * 3.14 * raio;

    printf("Valor da area do circulo = %.2f \n", area);
    return 0;
}