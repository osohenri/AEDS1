/*
    funcao: escreva peso ideal;
    funcao: faca ler genero[M/F] enquanto genero diferente;
    funcao: faca ler idade enquanto idade negativa;
    funcao: peso ideal;
    funcao: resultado;
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void intro(){
    printf("Peso ideal\n\n");
}

char lergenero(){
    char genero;
    do{
        printf("Qual seu genero?\n");
        scanf(" %c", &genero);
        genero = toupper(genero);
    }
    while (genero != 'M' && genero != 'F');
    return genero;
}

float leridade(){
    int idade;
    do{
        printf("Qual sua idade?\n");
        scanf("%d", &idade);
    }
    while (idade < 0);
    return idade;
}

float calcularpesoideal(char gen, int idade){
    float pesoideal;
    if (gen == 'M'){
        if ( idade < 30 ){
            pesoideal = 72.7 * 1.75 - 58;
        } 
        else{
            pesoideal = 72.7 * 1.7 - 58;
        }
    }
    else{
        if ( idade < 30 ){
            pesoideal = 62.1 * 1.65 - 44.7;
        }
        else{
            pesoideal = 62.1 * 1.6 - 44.7;
        }
    }
    return pesoideal;
}

void final(float ideal){
    printf("Peso ideal: %f\n", ideal);
}

int main(){
    intro();
    char gen = lergenero();
    int idade = leridade();
    float pesoideal = calcularpesoideal(gen, idade);
    final(pesoideal);

    return 0;
}