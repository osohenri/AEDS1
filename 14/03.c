#include <stdio.h>

void intro() {
    printf("Ler na tela de n ate 1 e depois de 1 ate n\n\n");
}

int limite(char *x) {
    int valor;
    printf("Digite limite %s\n", x);
    scanf("%d", &valor);
    return valor;
}

void ordenar(int x, int y) {
    if (x <= y) {
        printf("%d, ", x);
        ordenar(x + 1, y);
    
    if (x > 1) {
        printf("%d, ", x);
    }
    else if (x == 1) {
        printf("%d", x);
    }
    }
}


int main() {
    intro();
    int inferior = limite("inferior");
    int superior = limite("superior");
    ordenar(inferior, superior);

    return 0;
}