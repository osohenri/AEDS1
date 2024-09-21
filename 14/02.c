#include <stdio.h>

void intro() {
    printf("Escrever sequencia de 1 a 5 e depois de 5 a 1\n");
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
    ordenar(1, 5);

    return 0;
}