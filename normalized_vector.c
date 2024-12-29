#include <stdio.h>
#include <math.h>

void normalize_vector(double A[], double normalized_A[], int n) {
    double magnitude = 0.0;

    // Calculate the magnitude of the vector
    for (int i = 0; i < n; i++) {
        magnitude += A[i] * A[i];
    }
    magnitude = sqrt(magnitude);

    // Normalize the vector
    for (int i = 0; i < n; i++) {
        normalized_A[i] = A[i] / magnitude;
    }
}

int main() {
    int n;

    // Get user input for the size of the vector
    printf("Enter the size of the vector (n): ");
    scanf("%d", &n);

    double A[n], normalized_A[n];

    // Get user input for the elements of the vector
    printf("Enter the elements of the vector:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
    }

    // Normalize the vector
    normalize_vector(A, normalized_A, n);

    // Print the normalized vector
    printf("The normalized vector is:\n");
    for (int i = 0; i < n; i++) {
        printf("%.6f ", normalized_A[i]);
    }
    printf("\n");

    return 0;
}
