#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int sum_of_factorials(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += factorial(i);
    }
    return sum;
}

int main() {
    int N;

    // Get user input
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum of the factorials
    int sum = sum_of_factorials(N);
    printf("Sum of the factorials of the first %d natural numbers: %d\n", N, sum);

    return 0;
}
