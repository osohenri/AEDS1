#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Calcular valor de H\n\n");

    int n;
    double d = 1;
    double h = 0;

    printf("Digite numero de termos\n");
    scanf("%d", &n);

    for( int i = 0; i < n; i++){
        h += 1 / d;
        d *= 3;
    }
    printf("Valor: %f\n", h);

    return 0;
}