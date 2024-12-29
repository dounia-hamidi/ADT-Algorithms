#include <stdio.h>

void vector_sum(int A[], int B[], int C[], int n) {
    for (int i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    int n;

    // Get user input for the size of the vectors
    printf("Enter the size of the vectors (n): ");
    scanf("%d", &n);

    int A[n], B[n], C[n];

    // Get user input for the elements of vector A
    printf("Enter the elements of vector A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Get user input for the elements of vector B
    printf("Enter the elements of vector B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    // Calculate the sum of the vectors
    vector_sum(A, B, C, n);

    // Print the result
    printf("The sum of the vectors is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
