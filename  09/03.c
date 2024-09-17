#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Salarios dos funcionarios\n\n");

    int numfuncionarios;
    float salario;
    int salariominimo = 0, total = 0;
    float maiorsalario = 0, menorsalario = 99999;

    do{
    printf("Qual numero de funcionarios?\n");
    scanf(" %d", &numfuncionarios);
    }
    while ( numfuncionarios <= 0);

    while ( numfuncionarios > 0 ){
        printf("Salario do funcionario: ");
        scanf("%f", &salario);

        if ( salario == 1412){
            salariominimo ++;
        }
        if ( salario > maiorsalario){
            maiorsalario = salario;
        }
        if ( salario < menorsalario){
            menorsalario = salario;
        }
        total ++;
        numfuncionarios --;
    }
    float percentual = (float)salariominimo / total * 100;
    float amplitude = maiorsalario - menorsalario;

    printf("Funcionarios com salario minimo: %.2f%%\n", percentual);
    printf("Amplitude salarial: %.2f\n", amplitude);

    return 0;
}