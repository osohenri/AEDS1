#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inicial(){
    printf("Numero primo ou nao\n\n");
}

int lernum(){
    int num;
    printf("Qual seu numero? ");
    scanf("%d", &num);
    return num;
}

bool verificaprimo(int num){
    bool primo = true;
    int i = 2;

    while( i <= num / 2){
        if ( num % i == 0 ){
            primo = false;
        }
        i++;
    }
    return primo;
}

int main(){
    inicial();
    int num = lernum();
    if (verificaprimo(num))
        printf("Numero primo\n");
    else
        printf("Numero primo\n");

    return 0;
}