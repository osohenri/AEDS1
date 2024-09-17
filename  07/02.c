#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Fibonacci\n\n");

    int numeros,
    a = 0,
    b = 1;
    printf("Quantos numeros deverao aparecer na sequencia? ");
    scanf("%d", &numeros);

    for( int i = 0; i < numeros; i++){
        printf("%d\n", a);
        int aux = a + b;
        a = b;
        b = aux;
    }
}