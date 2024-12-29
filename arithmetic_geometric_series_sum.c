#include <stdio.h>
#include <math.h>

double arithmetic_geometric_series_sum(double a, double d, double r, int N) {
    double sum = 0.0;
    for (int n = 1; n <= N; n++) {
        sum += (a + (n - 1) * d) * pow(r, n - 1);
    }
    return sum;
}

int main() {
    double a, d, r;
    int N;

    // Get user input
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common difference (d): ");
    scanf("%lf", &d);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum of the arithmetic-geometric series
    double sum = arithmetic_geometric_series_sum(a, d, r, N);
    printf("Sum of the first %d terms of the arithmetic-geometric series: %.6f\n", N, sum);

    return 0;
}
