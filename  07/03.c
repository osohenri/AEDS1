#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define flag 0

int main(){
    printf("Numero primo ou nao\n\n");

    int num;
    printf("Qual seu numero?\n");
    scanf(" %d", &num);

    while( num != flag ){
        bool primo = true;
        int i = 2;

        while( i <= num / 2){
        if ( num % i == 0 ){
            primo = false;
        }
        i++;
    }
        if (primo){
            printf("Numero primo\n");
        }
        else
            printf("Numero nao primo\n");

        printf("Qual seu numero?\n");
        scanf(" %d", &num);
    }
    return 0;
}