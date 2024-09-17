#include <stdio.h>
#include <stdlib.h>

#define flag 0

int main(){
    printf("Media dos valores lidos\n\n");

    float num;
    float media;
    int soma = 0;
    float total = 0;

    printf("Digite um numero\n");
    scanf("%f", &num);

    while( num != flag ){
        soma++;
        total += num;
        media = total / soma;
        printf("Digite numero\n");
        scanf("%f", &num);
    }
    printf("Média dos valores: %f\n", media);
    
    return 0;
}