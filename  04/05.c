 /*
    Descreva operador, numero1, numero2;
    Leia operador;
    Leia numero1;
    Leia numero2;
    Para operador = + faca ( numero 1 + numero 2 );
    Para operador = - faca ( numero 1 - numero2 );
    Para operador = * faca ( numero1 * numero2 );
    Para operador = / faca ( numero1 / numero2 );
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Calculadora\n\n");

    char operador;
    float num1, num2, result;
    int opcao;

    do{
        if (opcao != 1){
            printf("0 - Sair do programa\n");
        }
        printf("1 - Adicao (+)\n");
        printf("2 - Subtracao (-)\n");
        printf("3 - Multiplicacao (*)\n");
        printf("4 - Divisao (/)\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0){
            printf("Obrigado por usar este programa.\n");
        }

        switch(opcao){
            case 1: operador = '+';
                break;
            case 2: operador = '-';
                break;
            case 3: operador = '*';
                break;
            case 4: operador = '/';
                break;
            default: 
                printf("Opcao invalida! Tente novamente.\n");
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch(operador){
            case '+': result = num1 + num2;
                printf("Resultado: %.2f\n", result);
                break;
            case '-': result = num1 - num2;
                printf("Resultado: %.2f\n", result);
                break;
            case '*': result = num1 * num2;
                printf("Resultado: %.2f\n", result);
                break;
            case '/': 
                if ( num2 != 0 ){
                    result = num1 / num2;
                    printf("Resultado: %.2f\n", result);
                }
                else{
                    printf("Erro: Divisao por zero!\n");
                }
                break;
            default:
                printf("Operador nao valido \n");
        }
    } while (opcao != 0);

    return 0;
}