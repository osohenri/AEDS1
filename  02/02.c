/*
    Descreva A, B, C;
    Leia A;
    Leia B;
    Leia C;
    Se A = B = C
        Escreva triangulo equilatero;
        Senao
            Se A = B ou B = C ou C = A
                Escreva triangulo isosceles;
    Senao
        Escreva triangulo escaleno;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Qual tipo de triangulo\n\n");

    int A, B, C;

    printf("Escreva lado 1 ");
    scanf("%i", &A);

    printf("Escreva lado 2 ");
    scanf("%i", &B);

    printf("Escreva lado 3 ");
    scanf("%i", &C);

    if( A + B > C && A + C > B && B + C > A ) {
        if( A == B && A == C )
            printf("Triangulo Equilatero \n");
        else
            if( A == B || B == C || C == A )
                printf("Triangulo Isoscele \n");
    }
    else
        printf("Triangulo Escaleno \n");

    return 0;
}