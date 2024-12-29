#include <stdio.h>

void reflection_vector(double A[], double N[], double R[], int n) {
    double dot_product = 0.0;
    for (int i = 0; i < n; i++) {
        dot_product += A[i] * N[i];
    }

    for (int i = 0; i < n; i++) {
        R[i] = A[i] - 2 * dot_product * N[i];
    }
}

int main() {
    int n;

    // Get user input for the size of the vectors
    printf("Enter the size of the vectors (n): ");
    scanf("%d", &n);

    double A[n], N[n], R[n];

    // Get user input for the elements of vector A
    printf("Enter the elements of vector A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
    }

    // Get user input for the elements of vector N
    printf("Enter the elements of vector N:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &N[i]);
    }

    // Calculate the reflection vector
    reflection_vector(A, N, R, n);

    // Print the result
    printf("The reflection vector is:\n");
    for (int i = 0; i < n; i++) {
        printf("%.6f ", R[i]);
    }
    printf("\n");

    return 0;
}
