#include <stdio.h>
#include <math.h>

double geometric_series_sum(double a, double r, int N) {
    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += a * pow(r, i);
    }
    return sum;
}

int main() {
    double a, r;
    int N;

    // Get user input
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum
    double sum = geometric_series_sum(a, r, N);
    printf("Sum of the first %d terms of the geometric series: %.2f\n", N, sum);

    return 0;
}
