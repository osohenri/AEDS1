/*
    funcao : escreva Area de um triangulo;
    funcao: enquanto valor menor que 0 leia altura;
    funcao: enquanto valor menor que 0 leia base;
    funcao: area;
    funcao: escreva resultado;
*/
#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("Área de um triangulo\n\n");
}

float altura2(){
    float altura;
    do{
    printf("Qual altura do triangulo?\n");
    scanf(" %f", &altura);
    }
    while (altura < 0);
    return altura;
}

float base2(){
    float base1;
    do{
    printf("Qual base do triangulo?\n");
    scanf(" %f", &base1);
    }
    while (base1 < 0);
    return base1;
}

float area2(float x, float y){
    return x * y / 2;
}

void final(float area){
    printf("Area: %.2f\n", area);
}

int main(){
    intro();
    float altura = altura2();
    float base = base2();
    float area = area2(altura, base);
    final(area);

    return 0;
}