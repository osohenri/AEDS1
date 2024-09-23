#include <stdio.h>

void tabela( int num) {

    if ( num > 0 && num < 10) {
        for ( int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", i * j);
            }
        printf("\n");
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);
    tabela(num);
    
    return 0;
}