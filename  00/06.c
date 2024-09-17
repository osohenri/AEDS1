/*
    Descreva farenheit, celsius;
    Leia celsius;
    farenheit = celsius * 1.8 + 32;
    Escreva farenheit;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Celsius para farenheit\n\n");
    float farenheit, celsius;
    
    printf("Qual o valor de celsius? ");
    scanf("%f", &celsius);

    farenheit = celsius * 1.8 + 32;
    printf("%.2f \n", farenheit);

    return 0;
}