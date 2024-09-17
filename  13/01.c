#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lerlado(int x) {
    int lado;
    printf("Qual o lado %d do triangulo: ", x);
    scanf("%d", &lado);

    return lado;
}

bool ehtriangulo(int a, int b, int c) {
    bool triangulo = false;
    if ( a + b > c && a + c > b && b + c > a){
        triangulo = true;
    }
    return triangulo;
}

int tipotriangulo(int a, int b, int c) {
    int tipo = 0;
    if ( a == b && b == c) {
        tipo = 1;
    }
    else
        if ( a == b || b == c || a == c) {
            tipo = 2;
        }
        else tipo = 3;
    return tipo;
}

void qualtriangulo(int tipo) {
    switch(tipo) {
    case 1: printf(" Triangulo equilatero\n");
    break;
    case 2: printf(" Triangulo isosceles\n");
    break;
    case 3: printf(" Triangulo escaleno\n");
    break;
}
}
    
int main() {
    printf("Tipo do triangulo\n\n");

    int a = lerlado(1);
    int b = lerlado(2);
    int c = lerlado(3);

    if (ehtriangulo(a, b, c)) {
        int tipo = tipotriangulo(a, b, c);
        qualtriangulo(tipo);
    }

    return 0;
}