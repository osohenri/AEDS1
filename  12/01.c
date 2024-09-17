#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("Numero de dias vividos ate ultimo aniversario\n\n");
}

int idade2(){
    int idade;
    printf("Qual sua idade?\n");
    scanf("%d", &idade);
    return idade;
}

int dias(int idade){
    return idade * 365;
}

int main(){
    intro();
    int idade = idade2();
    printf("%d dias vividos\n", dias(idade));

    return 0;
}