#include <stdio.h>

long long sum_of_arithmetic_series(int a, int d, int N) {
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += a + i * d;
    }
    return sum;
}

int main() {
    int a, d, N;
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    printf("The sum of the first %d terms of the arithmetic series is %lld.\n", N, sum_of_arithmetic_series(a, d, N));

    return 0;
}
