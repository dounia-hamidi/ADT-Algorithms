#include <stdio.h>

void scalar_multiply(int A[], int B[], int k, int n) {
    for (int i = 0; i < n; i++) {
        B[i] = A[i] * k;
    }
}

int main() {
    int n, k;

    // Get user input for the size of the vector
    printf("Enter the size of the vector (n): ");
    scanf("%d", &n);

    int A[n], B[n];

    // Get user input for the elements of vector A
    printf("Enter the elements of vector A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Get user input for the scalar k
    printf("Enter the scalar (k): ");
    scanf("%d", &k);

    // Calculate the resulting vector
    scalar_multiply(A, B, k, n);

    // Print the result
    printf("The resulting vector is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
