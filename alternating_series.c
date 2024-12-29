#include <stdio.h>

int alternating_series_sum(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i * (i % 2 == 0 ? -1 : 1);
    }
    return sum;
}

int main() {
    int N;

    // Get user input
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum of the alternating series
    int sum = alternating_series_sum(N);
    printf("Sum of the first %d terms of the alternating series: %d\n", N, sum);

    return 0;
}
