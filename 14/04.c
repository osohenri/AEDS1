#include <stdio.h>

void intro() {
    printf("Ordem descrescente ate 0\n\n");
}

int lernum() {
    int num;
    printf("Digite valor: \n");
    scanf("%d", &num);
    return num;
}

void decrescente(int x) {
    if (x == 0) {
        printf("%d, ", x);
    }
    else {
        printf("%d, ", x);
        decrescente(x - 1);
    }


}


int main() {
    intro();
    int num = lernum();
    decrescente(num);


    return 0;
}