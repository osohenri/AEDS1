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

void crescente(int x, int y) {
    if ( x == y) {
        printf("%d, ", x);
    }
    else {
        crescente(x - 1, y);
        printf("%d, ", x);
    }
}

void decrescente(int x, int y) {
    if ( x == y) {
        printf("%d, ", x);
    }
    else {
        printf("%d, ", x);
        decrescente(x - 1, y);
    }
}


int main() {
    intro();
    int inferior = limite("inferior");
    int superior = limite("superior");
    crescente(superior, inferior);
    decrescente(superior, inferior);

    return 0;
}