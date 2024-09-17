#include <stdio.h>

int main()
{
    int n;
    float preco,
    maior_preco_abaixo2000 = 0,
    maior_preco_apartir2000 = 0;

    printf("Maior preco mercadoria");
    
    printf("\nQual numero de mercadoria?\n");
    scanf("%d", &n);

    printf("Preco da mercadoria: \n");
    scanf(" %f", &preco);

    for(int i = 1; i < n; i++){   
        if (preco < 2000){
            if (maior_preco_abaixo2000 < preco)
            maior_preco_abaixo2000 = preco;
        }
        else if (preco >= 2000){
            if(maior_preco_apartir2000 < preco)
            maior_preco_apartir2000 = preco;
        }
        else{
        printf("Valor invalido\n");
        }
        printf("Preco da mercadoria: \n");
        scanf(" %f", &preco);
    }
    printf("Maior preco a partir de 2000 = %.2f\n", maior_preco_apartir2000);
    printf("Maior preco abaixo de 2000 = %.2f\n", maior_preco_abaixo2000);

    return 0;
}