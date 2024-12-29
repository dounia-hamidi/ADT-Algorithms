#include <stdio.h>

int sum_of_squares(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int N;

    // Get user input
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum of squares
    int sum = sum_of_squares(N);
    printf("Sum of the squares of the first %d natural numbers: %d\n", N, sum);

    return 0;
}
