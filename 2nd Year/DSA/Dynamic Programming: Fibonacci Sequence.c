#include <stdio.h>

// Function to calculate the nth Fibonacci number using dynamic programming
int fibonacci(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int n = 9; // You can change this value to calculate the nth Fibonacci number
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
