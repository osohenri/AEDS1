/*
    Descreva lado, perimetro;

    lado = 7;
    perimetro = lado x 4;

    Escreva perimetro;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Perimetro de um quadrado\n\n");

    float lado = 7;
    float perimetro = lado * 4;
    
    printf("Perimetro do quadrado = %.f \n", perimetro);
    return 0;
}