#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    float   salario,
            media,
            total = 0,
            soma = 0;
    char    continuar;

    printf("Reajuste de salarios\n\n");

    do{
    printf("Qual seu salario?\n");
    scanf("%f", &salario);

    if( salario < 1000){
        salario = salario + salario * 0.1;
        printf("Acrescimo de 10%%\n");
        printf("Salario reajustado = %.2f\n", salario);
    }
    else if( salario >= 1000 && salario < 2000){
        salario = salario + salario * 0.08;
        printf("Acrescimo de 8%%\n");
        printf("Salario reajustado = %.2f\n", salario);
    }
    else if( salario >= 2000){
        salario = salario + salario * 0.07;
        printf("Acrescimo de 7%%\n");
        printf("Salario reajustado = %.2f\n", salario);
    }

    soma += salario;
    total ++;

    printf("Deseja continuar? [S/N]\n");
    scanf(" %c",&continuar);
    continuar = toupper(continuar);
    }
    while (continuar == 'S');

    media = soma / total;

    printf("Salario medio = %.2f\n", media);

    return 0;
}