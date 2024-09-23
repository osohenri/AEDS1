#include <stdio.h>

void escreveInvertido(int num) {
    int numInvertido = 0;
    scanf("%d", &num); // entrada verde
  
    while (num > 0) {
        int digito = num % 10;
        numInvertido = numInvertido * 10 + digito;
        num /= 10;
    }
    printf("%d\n", numInvertido);
}

int main()
{
     int x=12345;
     escreveInvertido(x);
}