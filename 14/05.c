#include <stdio.h>

void intro() {
    printf("Calcular a soma dos numeros de n ate m\n\n");
}

int lervalor(char *msg) {
    int num;
    printf("Qual limite %s\n", msg);
    scanf("%d", &num);
    return num;
}

int somador(int n, int m) {
    int soma;
    if (n > m){
        soma = 0;
    }
    else {
        soma = n + somador(n + 1, m);
    }
    return soma;
}

void final(int x, int y) {
    printf("Valor final = %d\n", (somador(x, y)));
}

int main() {
    intro();
    int n = lervalor("inferior");
    int m = lervalor("superior");
    final(n, m);


    return 0;
}