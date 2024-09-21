#include <stdio.h>

void intro() {
    printf("Escrever sequencia de 1 a 5\n");
}

void sequencia(int x) {
    if (x == 1){
        printf("%d, ", x);
    }
    else {
        sequencia(x - 1);
        printf("%d, ", x);
    }
}


int main() {
    intro();
    sequencia(5);

    return 0;
}