#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("Alunos aprovados e reprovados\n\n");

    float nota = 0, soma = 0, aprovado = 0, reprovado = 0, somaalunos = 0, percaprovado = 0, percreprovado = 0;
    bool erro;
    bool foradodominio;

    do{   
        do{
            printf("\nNota do aluno: \n");
            scanf(" %f", &nota);
        }
        while (foradodominio);

        foradodominio = ( nota < 0 || nota > 100 );
        somaalunos ++;
        soma += nota;
        if( nota >= 60 )
        aprovado++;
        else
        reprovado ++;

        percaprovado = aprovado / somaalunos * 100;
        percreprovado = reprovado / somaalunos * 100;

        erro = ( nota=0 );
        if (erro)
            printf("Programa encerrado\n");
        else{
            printf("Alunos aprovados: %.2f%%\n", percaprovado);
            printf("Alunos reprovados: %.2f%%\n", percreprovado);
        }
    } while (!erro);

    return 0;
}