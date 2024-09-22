#include <stdio.h>

int fibonacci(int k) {
    int fib = 0;
    if (k == 0) {
        fib = 0;
    }
    else if (k == 1) {
        fib = 1;
    }
    else {
        fib = fibonacci(k - 1) + fibonacci(k - 2);
    }
    return fib;
}


int main() {
    printf("Fibonacci\n\n");
    printf("%d\n", fibonacci(10));

    return 0;
}