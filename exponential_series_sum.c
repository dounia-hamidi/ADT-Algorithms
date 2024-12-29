#include <stdio.h>

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double exponential_series_sum(double x, int N) {
    double sum = 1.0;  // Start with the first term of the series
    for (int i = 1; i <= N; i++) {
        sum += pow(x, i) / factorial(i);
    }
    return sum;
}

int main() {
    double x;
    int N;

    // Get user input
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum of the exponential series
    double sum = exponential_series_sum(x, N);
    printf("Sum of the first %d terms of the exponential series e^%.2f: %.6f\n", N, x, sum);

    return 0;
}
