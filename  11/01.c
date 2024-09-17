#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("Soma de dois valores reais\n\n");
}

float leiavalor(){
    float x;
    printf("Qual valor: \n");
    scanf(" %f", &x);
    return x;
}

float soma2(float x, float y){
    return x + y;
}

void final(float x, float y, float z){
    printf("Soma de %.2f e %.2f = %.2f\n", x, y, z);
}

int main(){
    intro();
    float x = leiavalor();
    float y = leiavalor();
    float soma = soma2(x, y);
    final(x, y, soma);

    return 0;
}