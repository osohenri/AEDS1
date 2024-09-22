#include <stdio.h>

int fibonacci(int k) {
    int a = 0;
    int b = 1;
    int fib = 0;

    if (k == 0){
        fib = 0;
    }
    if (k == 1){
        fib = 1;
    }

    for (int i = 1; i < k; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    printf("Fibonacci\n\n");
    printf("%d\n", fibonacci(10));

    return 0;
}