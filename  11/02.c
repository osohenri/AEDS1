#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("Maior numero\n\n");
}

float lernumero(){
    float x;
    printf("Coloque numero: \n");
    scanf(" %f", &x);
    return x;
}

float maior2(float a, float b){
    if (a > b)
    printf("Maior valor: %.2f\n", a);
    else
    printf("Maior valor: %.2f\n",b);
    return 0;
}

int main(){
    intro();
    float x = lernumero();
    float y = lernumero();
    float maior = maior2(x, y);

    return 0;
}