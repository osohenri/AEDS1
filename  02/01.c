/*
    Descreva A;
    Leia A;
    Se A % 4 = 0
        Escreva ano bissexto;
    Senao
        Escreva ano nao bissexto;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Ano bissexto\n\n");

    int A;
    
    printf("Escreva ano: ");
    scanf("%i", &A);

    if ( A % 4 == 0 )
        printf("Ano bissexto\n");
    else
        printf("Ano não bissexto\n");

    return 0;
}