#include <stdio.h>

void cross_product(int A[], int B[], int C[]) {
    C[0] = A[1] * B[2] - A[2] * B[1];
    C[1] = A[2] * B[0] - A[0] * B[2];
    C[2] = A[0] * B[1] - A[1] * B[0];
}

int main() {
    int A[3], B[3], C[3];

    // Get user input for the elements of vector A
    printf("Enter the elements of vector A (a1, a2, a3):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

    // Get user input for the elements of vector B
    printf("Enter the elements of vector B (b1, b2, b3):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &B[i]);
    }

    // Calculate the cross product of the vectors
    cross_product(A, B, C);

    // Print the result
    printf("The cross product of the vectors is:\n");
    printf("[%d, %d, %d]\n", C[0], C[1], C[2]);

    return 0;
}
