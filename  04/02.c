/*
    Descreva i = 10;
    Enquanto (i > 0)
        Escrever i;
        i = i - 1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Numeros inteiros de dez até um\n\n");

    int i = 10;
    while( i > 0 ){
        printf("%d\n", i);
        i--;
    }

    return 0;
}