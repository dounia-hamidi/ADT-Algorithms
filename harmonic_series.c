#include <stdio.h>

double harmonic_series_sum(int N) {
    double sum = 0.0;
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int N;

    // Get user input
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum of the harmonic series
    double sum = harmonic_series_sum(N);
    printf("Sum of the first %d terms of the harmonic series: %.6f\n", N, sum);

    return 0;
}
