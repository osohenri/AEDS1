/*
    Descreva pesomasc, pesofem, genero, altura;
    Leia genero;
    Leia altura;
    pesomasc = 72.7 * altura - 58;
    pesofem = 62.1 * altura - 44.7;
    Se genero = M
        entao escreva pesomasc
    Senao escreva pesofem;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Peso ideal\n\n");

    float pesomasc, pesofem, altura;
    char genero;

    printf("Qual seu genero? \n");
    scanf("%c", &genero);
    
    if ( genero == 'M' ){
        printf("Qual sua altura? \n");
        scanf("%f", &altura);
    
        pesomasc = 72.7 * altura - 58;
        printf("%.2f \n", pesomasc);
    }
    else{
        printf("Qual sua altura? \n");
        scanf("%f", &altura);

        pesofem = 62.1 * altura - 44.7;
        printf("%.2f \n", pesofem);
    }
    return 0;
}