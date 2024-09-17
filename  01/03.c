/*
    Descreva A, B, C;
    Leia A;
    Leia B;
    Leia C;
    Se A > B e A > C
        entao Escreva A;
    Senao
        Se B > C
            Escreva B;
        Senao
            Escreva C;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B, C;

    printf("Qual o numero 1? ");
    scanf("%f", &A);

    printf("Qual o numero 2? ");
    scanf("%f", &B);

    printf("Qual o numero 3? ");
    scanf("%f", &C);

    if( A > B && A > C )
        printf("%f \n", A);
    else
        if( B > C )
            printf("%f \n", B);
        else 
            printf("%f \n", C);

    return 0;
}