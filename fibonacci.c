#include <stdio.h>

void generate_fibonacci(int N) {
    int fib[N];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("The first %d numbers in the Fibonacci series are:\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int N;

    // Get user input
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Generate and print the Fibonacci series
    generate_fibonacci(N);

    return 0;
}
