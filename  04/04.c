/*
    Descreva genero, altura, pesoidealmasc, pesoidealfem;
    Leia genero;
    Leia altura;
    pesoidealmasc = (72,7 x altura) – 58;
    pesoidealfem = (62,1 x altura) – 44,7;
    Escreva pesoideal;
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    printf("Peso ideal\n\n");

    float altura;
    char genero;

    printf("Qual seu genero? [M/F]\n");
    scanf("%c", &genero);
    genero = toupper(genero);

    while( genero != 'M' && genero !='F' ){
        printf("Utilize apenas M ou F\n");
        scanf(" %c", &genero);
        genero = toupper(genero);
    }

    printf("Qual sua altura? (em metros)\n");
    scanf(" %f",&altura);

    while(altura < 0 || altura > 2.5){
        printf("Utilize a altura correta\n");
        scanf(" %f", &altura);
    }

    float pesomasc = (72.7 * altura) - 58;
    float pesofem = (62.1 * altura) - 44.7;

    if( genero == 'M' )
        printf(" Peso ideal = %.f\n", pesomasc);
    else
        printf(" Peso ideal = %.f\n", pesofem);

    return 0;
}