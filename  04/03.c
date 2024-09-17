/*
    Para i = 10 até i > 0, decremente i
    Escrever i;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Numeros inteiros de dez até um\n\n");

    for( int i = 10; i > 0; i-- )
        printf("%d\n", i);

    return 0;
}