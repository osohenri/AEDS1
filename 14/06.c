#include <stdio.h>

void intro() {
    printf("Potenciacao usando recursividade\n\n");
}

int lernum(char *msg) {
    int num;
    printf("Qual %s", msg);
    scanf("%d", &num);
    return num;
}

int potencia(int b, int e) {
    int pot = 0;
    if (e == 0){
        pot = 1;
    }
    else {
        pot += b * potencia(b, e - 1);
    }
    return pot;
}

void final(int b, int e) {
    printf("Potencia = %d", potencia(b, e));
}


int main() {
    intro();
    int base = lernum("sua base\n");
    int expoente = lernum("seu expoente\n");
    final(base, expoente);

    return 0;
}