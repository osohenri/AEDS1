#include <stdio.h>

void intro() {
    printf("Funcao de Ackermann\n\n");
}

int ler(int n) {
    int num;
    printf("Digite numero %d\n", n);
    scanf(" %d", &num);
    return num;
}

int ackerman(int m, int n) {
    int func = 0;
    if (m == 0) {
        func = n + 1;
    }
    else if (m > 0 && n == 0) {
        func = ackerman(m - 1, 1);
    }
    else if (m > 0 && n > 0) {
        func = ackerman(m - 1, ackerman(m, n - 1));
    }

    return func;
}




int main() {
    intro();

    int m = ler(1);
    int n = ler(2);

    printf("%d\n", ackerman(m, n));

    return 0;
}