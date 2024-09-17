/*
    Descreva codigo, salario, novo salario, aumento;
    Leia codigo;
    Leia salario;

    Escolha codigo
    Caso 1
    novosalario = salario * 1.5,
    aumento = novosalario - salario,
    Escreva cargo escriturario, aumento, novosalario;
    Quebrar;

    Caso 2
    novosalario = salario * 1.35,
    aumento = novosalario - salario,
    Escreva secretário, aumento, novosalario;
    Quebrar;

    Caso 3
    novosalario = salario * 1.2,
    aumento = novosalario - salario,
    Escreva caixa, aumento, novosalario;
    Quebrar;

    Caso 4
    novosalario = salario * 1.1,
    aumento = novosalario - salario,
    Escreva gerente, aumento, novosalario;
    Quebrar;

    Caso 5
    novosalario = salario,
    aumento = novosalario - salario,
    Escreva diretor, aumento, novosalario;
    Quebrar;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Salario dos funcionarios\n\n");

    int codigo, salario, novosalario, aumento;

    printf("Escreva código ");
    scanf("%i", &codigo);

    printf("Qual seu salario atual? ");
    scanf("%i", &salario);

    switch(codigo){
        case (1): novosalario = salario * 1.5,
        aumento = novosalario - salario,
        printf("Cargo Escriturario, aumento de %i, novo salario de %i \n", aumento, novosalario);
        break;

        case (2): novosalario = salario * 1.35,
        aumento = novosalario - salario,
        printf("Secretario, aumento de %i, novo salario de %i \n", aumento, novosalario);
        break;

        case (3): novosalario = salario * 1.2,
        aumento = novosalario - salario,
        printf("Caixa, aumento de %i, novo salario de %i \n", aumento, novosalario);
        break;

        case (4): novosalario = salario * 1.1,
        aumento = novosalario - salario,
        printf("Gerente, aumento de %i, novo salario de %i \n", aumento, novosalario);
        break;

        case (5): novosalario = salario,
        aumento = novosalario - salario,
        printf("Diretor, aumento de %i, novo salario de %i \n", aumento, novosalario);
        break;
    }
    return 0;
}