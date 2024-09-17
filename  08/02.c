#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Dez primeiros numeros da sequencia\n\n");

    int num1 = 10;
    int den1 = 100;
    int num2 = 99;
    int den2 = 11;

    for( int i = 0; i < 10; i++ ){
        if( i % 2 == 0){
            printf("%d/%d\n", num1, den1);
            num1 += 2;
            den1 -= 2;
        }
        else{
            printf("%d/%d\n", num2, den2);
            num2 -= 2;
            den2 += 2; 
        }
    }
    return 0;
}