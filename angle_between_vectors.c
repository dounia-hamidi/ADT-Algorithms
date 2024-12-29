#include <stdio.h>
#include <math.h>

double dot_product(int A[], int B[], int n) {
    double product = 0.0;
    for (int i = 0; i < n; i++) {
        product += A[i] * B[i];
    }
    return product;
}

double vector_magnitude(int vector[], int n) {
    double sum_of_squares = 0.0;
    for (int i = 0; i < n; i++) {
        sum_of_squares += vector[i] * vector[i];
    }
    return sqrt(sum_of_squares);
}

double angle_between_vectors(int A[], int B[], int n) {
    double dotProd = dot_product(A, B, n);
    double magnitudeA = vector_magnitude(A, n);
    double magnitudeB = vector_magnitude(B, n);
    double cosTheta = dotProd / (magnitudeA * magnitudeB);
    return acos(cosTheta);  // Angle in radians
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

    // Calculate the angle between the vectors
    double angle = angle_between_vectors(A, B, n);

    // Print the result
    printf("The angle between the vectors (in radians) is: %.6f\n", angle);

    return 0;
}
