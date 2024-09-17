#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("Perimetro de um quadrado\n\n");
}

float lado(){
    float x;
    printf("Qual lado do quadrado?\n");
    scanf(" %f", &x);
    return  x;
}

float perimetro(float x){
    x = x * 4;
    printf("Perimetro: %.2f\n", x);
    return x;
}

int main(){
    intro();
    float l = lado();
    perimetro(l);

    return 0;
}