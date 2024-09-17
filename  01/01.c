/*
    Descreva A, B;
    Leia A, B;
    Se A>B
        entao Escreva A;
    Senao
    Escreva B;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Maior valor\n\n");

    float A, B;
    
    printf("Escreva numero 1 ");
    scanf("%f", &A);

    printf("Escreva numero 2 ");
    scanf("%f", &B);

    if( A > B )
        printf("%f \n", A);
    else
        printf("%f \n", B);

    return 0;
}