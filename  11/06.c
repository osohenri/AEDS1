#include <stdio.h>
#include <stdlib.h>

void inicial(){
    printf("Potenciacao de um numero\n\n");
}

int lerbase(){
    int base;
    printf("Qual sua base?: ");
    scanf("%d", &base);
    return base;
}

int lerexpo(){
    int expo;
    printf("Qual seu expoente?: ");
    scanf("%d", &expo);
    return expo;
}

int pow2(int x, int y){
    int final = 1;
    for (int i = 1; i < y + 1; i++){
        final *= x;
    }
    return final;
}

void final(int x, int y, int pow){
    printf("Numero de base %d com expoente %d = %d\n", x, y, pow);
}


int main(){
    inicial();
    int x = lerbase();
    int y = lerexpo();
    int pow = pow2(x, y);
    final(x, y, pow);

    return 0;
}