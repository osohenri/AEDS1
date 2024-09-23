#include <stdio.h>

int minimoDeViagens(int C, int A) {
    int alunos_por_viagem = C - 1;

    int viagens = (A + alunos_por_viagem - 1) / alunos_por_viagem;

    return viagens;
}

int main() {
    int C; scanf("%i", &C);
    int A; scanf("%i", &A);
    printf("%i", minimoDeViagens(C, A));
    return 0;
}
