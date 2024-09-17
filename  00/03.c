/*
    Descreva farenheit, celsius;
    celsius = 37,777777;
    farenheit = celsius * 1.8 + 32;
    Escreva farenheit;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Celsius para farenheit\n\n");

    float celsius = 37.7777777;
    float farenheit = celsius * 1.8 + 32;

    printf("Valor igual a: %.2f \n", farenheit);
    return 0;
}