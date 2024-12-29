#include <stdio.h>

int dot_product(int A[], int B[], int n) {
    int product = 0;
    for (int i = 0; i < n; i++) {
        product += A[i] * B[i];
    }
    return product;
}

int main() {
    int n;

    // Get user input for the size of the vectors
    printf("Enter the size of the vectors (n): ");
    scanf("%d", &n);

    int A[n], B[n];

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

    // Calculate the dot product of the vectors
    int product = dot_product(A, B, n);

    // Print the result
    printf("The dot product of the vectors is: %d\n", product);

    return 0;
}
