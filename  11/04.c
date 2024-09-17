#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("Numero par ou impar\n\n");
}

int numero(){
    int x;
    printf("Qual seu numero?\n");
    scanf("%d", &x);
    return x;
}

int parimpar2(int x){
    if ( x % 2 != 0)
    printf("Numero impar!\n");
    else
    printf("Numero par!\n");
    return x;
}

int main(){
    intro();
    int x = numero();
    int parimpar = parimpar2(x);

    return 0;
}