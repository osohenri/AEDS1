#include <stdio.h>

void escreveInvertidoRec(int x) {

    if (x != 0) {
        printf("%d", x % 10);

        escreveInvertidoRec(x / 10);
    }
}

int main()
{
    int x=12345;
    scanf("%d", &x); // entrada verde;
    escreveInvertidoRec(x);
}