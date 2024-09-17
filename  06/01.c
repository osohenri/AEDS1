#include <stdio.h>

int main(){
    printf("Perfil da turma\n\n");

    int n, i;
    int conthomem = 0, contmulher = 0;
    int contidade = 0;
    int maisvelho = 0, maisnovo = 100;
    int idade;
    char genero;

    printf("Informe o número de alunos da turma: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++ ) {
        do{
            printf("Informe o gênero do aluno %d (m/f): ", i + 1);
            scanf(" %c", &genero);
        }
        while (genero != 'm' && genero != 'f');

        do{
            printf("Informe a idade do aluno %d (0..100): ", i + 1);
            scanf("%d", &idade);
        }
        while (idade < 0 || idade > 100);

        if ( genero == 'm' ){
            conthomem++;
        }
        else
            if (genero == 'f'){
            contmulher++;
            }

        if (idade > 18){
            contidade++;
        }

        if (idade > maisvelho){
            maisvelho = idade;
        }

        if (idade < maisnovo){
            maisnovo = idade;
        }
    }

    printf("Percentual de homens: %.2f%%\n", ( conthomem / (float) n ) * 100);
    printf("Percentual de mulheres: %.2f%%\n", ( contmulher / (float) n ) * 100);
    printf("Percentual de alunos maiores de idade: %.2f%%\n", ( contidade / (float) n ) * 100);
    printf("Idade da pessoa mais velha: %d\n", maisvelho);
    printf("Idade da pessoa mais nova: %d\n", maisnovo);

    return 0;
}