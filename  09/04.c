#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("Dois numeros naturais sao primos entre si\n\n");

    int num1, num2;

    while(num1 < 2 || num2 < 2){
    printf("Valor numero 1\n");
    scanf("%d", &num1);

    printf("Valor numero 2\n");
    scanf("%d", &num2);
    }
    
    while ( num2 != 0){
        int aux = num2;
        num2 = num1 % num2;
        num1 = aux;
    }

   if ( num1 == 1 ) {
        printf("Sao primos entre si.\n");
    }
    else{
        printf("Nao sao primos entre si.\n");
    }
    return 0;
}