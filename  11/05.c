#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("Fatorial\n\n");
}

int lernumero(){
    int numero;
    printf("Digite seu numero\n");
    scanf(" %d", &numero);
    return numero;
}

int fatorial2(int numero){
    int numfinal = 1;
    for (int i = numero; i > 1; i--){
        numfinal *= i;
    }
    return numfinal;
}

void final(int numfinal){
    printf("Fatorial do numero: %d\n", numfinal);
}


int main(){
    intro();
    int num = lernumero();
    int numfinal = fatorial2(num);
    final(numfinal);

    return 0;
}