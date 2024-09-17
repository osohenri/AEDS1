/*
    Descreva a, b , c, delta, raiz 1, raiz 2;
    Leia a;
    Leia b;
    Leia c;
    delta = pow(b(2)) - 4*a*c;
    raiz 1 = (- b + sqrt(delta)) / 2*a;
    raiz 2 = (- b - sqrt(delta)) / 2*a;
    Escreva raizes = raiz 1 e raiz 2;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("Equacao de segundo grau\n\n");

    int a, b, c;
    double delta, raiz1, raiz2;

    printf("Escreva a da equaçao: ");
    scanf("%i", &a);

    printf("Escreva b da equaçao: ");
    scanf("%i", &b);

    printf("Escreva c da equaçao: ");
    scanf("%i", &c);

    delta = pow (b, 2) - 4 * a * c;
    
    raiz1 = ( -b + sqrt(delta) ) / 2 * a;
    raiz2 = ( -b - sqrt(delta) ) / 2 * a;

    printf("Raizes = %lf e %lf \n", raiz1, raiz2);
    return 0;
}