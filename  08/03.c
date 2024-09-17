#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Numero de divisores\n\n");

    int num;
    int div = 0;

    do{
    printf("Qual seu numero: ");
    scanf("%d", &num);
    }
    while ( num <= 0);
    for ( int i = 1; i <= num; i++){
        if ( num % i == 0){
            div ++;
        }
    }
    printf("\nDivisores: %d\n", div);

    return 0;
}