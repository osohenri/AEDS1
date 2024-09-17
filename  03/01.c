/*
    Descreva A, B, C;
    Leia A;
    Leia B;
    Leia C;
    Descreva aux;
    Se A > B
        aux = B; A = B; B = aux;
    Se B > C
        aux = B; B = C, C = aux;
    Se A > B
        aux = B; A = B; B = aux;
    Escreva C, B, A;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Ordem decrescente\n\n");

    float A;
    printf("\nDigite valor 1:");
    scanf("%f", &A);

     float B;
    printf("\nDigite valor 2:");
    scanf("%f", &B);

     float C;
    printf("\nDigite valor 3:");
    scanf("%f", &C);

    float aux;
    
    if ( A > B ) { aux = A; A = B; B = aux; }
    if ( B > C ) { aux = B; B = C; C = aux; }
    if ( A > B ) { aux = A; A = B; B = aux; }
    
    printf("\nEm ordem decrecente: %.f, %.f, %.f \n", C, B, A);

    return 0;
}   
