#include <stdio.h>

int main(){
    printf("Notas dos alunos\n\n");

    int n, i;
    float nota, soma = 0.0, media;
    float maior = -1, menor = 101;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        do{
            printf("Digite a nota do aluno %d (0 a 100): ", i + 1);
            scanf("%f", &nota);

            if (nota < 0 || nota > 100){
                printf("Nota invalida! Por favor, insira uma nota entre 0 e 100.\n");
            }
        }
        while ( nota < 0 || nota > 100 );

        if ( nota >= 60 ){
            printf("Aluno %d: Aprovado\n", i + 1);
        }
        else{
            printf("Aluno %d: Reprovado\n", i + 1);
        }

        soma += nota;

        if (nota > maior){
            maior = nota;
        }
        if (nota < menor){
            menor = nota;
        }
    }

    media = soma / n;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}