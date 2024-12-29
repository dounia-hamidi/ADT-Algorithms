#include <stdio.h>

// Function to implement the Extended Euclidean Algorithm
int extended_gcd(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = extended_gcd(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

// Function to find one solution to the equation Ax + By = C
int find_solution(int A, int B, int C, int *x, int *y) {
    int gcd = extended_gcd(A, B, x, y);

    if (C % gcd != 0) {
        return 0; // No solution exists
    }

    *x = *x * (C / gcd);
    *y = *y * (C / gcd);

    return 1; // Solution exists
}

int main() {
    int A, B, C;
    int x, y;

    printf("Enter three integers A, B, and C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (find_solution(A, B, C, &x, &y)) {
        printf("One solution to the equation %dx + %dy = %d is x = %d, y = %d.\n", A, B, C, x, y);
    } else {
        printf("No integer solutions exist for the equation %dx + %dy = %d.\n", A, B, C);
    }

    return 0;
}
