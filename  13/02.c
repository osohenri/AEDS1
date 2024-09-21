#include <stdio.h>

void intro() {
    printf("Ordenar valor em ordem descrescente\n\n");
}

float leiavalor(int n) {
    float valor;

    printf("Digite valor %d\n", n);
    scanf("%f", &valor);

    return valor;
}

void trocar(float *x, float *y) {
    float temp = *x;
    *x = *y;
    *y = temp;
}

void descrescente(float *a, float *b, float *c){
    if (*a < *b){
        trocar(a, b);
    }
    if (*a < *c){
        trocar(a, c);
    }
    if (*b < *c){
        trocar(b, c);
    }
}

void final(float a, float b, float c) {
    printf("Em ordem descrescente: %.2f, %.2f, %.2f\n", a, b, c);
}

int main() {
    intro();

    float num1 = leiavalor(1);
    float num2 = leiavalor(2);
    float num3 = leiavalor(3);

    descrescente(&num1, &num2, &num3);

    final(num1, num2, num3);

    return 0;
}