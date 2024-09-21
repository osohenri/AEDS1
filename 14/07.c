#include <stdio.h>

void inicial() {
    printf("Fatorial usando recursividade\n\n");
}

int lernum() {
    int num;
    printf("Qual seu numero?\n");
    scanf("%d", &num);
    return num;
}

int fatorial(int x) {
    int fat = 1;
    if (x == 1){
        fat = 1;
    }
    else {
    fat = x * fatorial(x - 1);
    }
    return fat;
}

void final(int  x) {
    printf("Fatorial = %d", fatorial(x));
}

int main() {
    inicial();
    int x = lernum();
    final(x);

    return 0;
}