#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    printf("Ano bissexto\n\n");

    int ano;
    char repetir;

    do{
        printf("Digite o ano: ");
        scanf ("%d", &ano) ;

        if(ano % 400 == 0)
            printf("%d ano bissexto\n", ano);
        else
            if(ano % 100== 0)
                printf("%d nao bissexto\n", ano);
            else
                if(ano % 4 == 0)
                    printf("%d ano bissexto\n", ano);
        else
            printf("%d nao bissexto\n", ano);

    printf("Verificar novo ano? [S/N]\n");
    scanf(" %c", &repetir);
    repetir = toupper(repetir);
    }
    while( repetir == 'S' );

return 0;
}