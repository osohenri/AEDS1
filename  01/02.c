/*
    Descreva A;
    Leia A;
    Se A % 2 = 0
        Escreva numero par;
    Senao 
        Escreva numero impar;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    
    printf("Digite seu numero ");
    scanf("%i", &A);

    if( A % 2 == 0 )
        printf("Numero par\n");
    else
        printf("Numero impar\n");

    return 0;
}