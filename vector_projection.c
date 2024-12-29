#include <stdio.h>

double dot_product(double A[], double B[], int n) {
    double product = 0.0;
    for (int i = 0; i < n; i++) {
        product += A[i] * B[i];
    }
    return product;
}

double vector_magnitude(double vector[], int n) {
    double sum_of_squares = 0.0;
    for (int i = 0; i < n; i++) {
        sum_of_squares += vector[i] * vector[i];
    }
    return sqrt(sum_of_squares);
}

void vector_projection(double A[], double B[], double projection[], int n) {
    double dotProd = dot_product(A, B, n);
    double magnitudeB = vector_magnitude(B, n);
    double scalar = dotProd / (magnitudeB * magnitudeB);

    for (int i = 0; i < n; i++) {
        projection[i] = scalar * B[i];
    }
}

int main() {
    int n;

    // Get user input for the size of the vectors
    printf("Enter the size of the vectors (n): ");
    scanf("%d", &n);

    double A[n], B[n], projection[n];

    // Get user input for the elements of vector A
    printf("Enter the elements of vector A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
    }

    // Get user input for the elements of vector B
    printf("Enter the elements of vector B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &B[i]);
    }

    // Calculate the projection of vector A onto vector B
    vector_projection(A, B, projection, n);

    // Print the result
    printf("The projection of vector A onto vector B is:\n");
    for (int i = 0; i < n; i++) {
        printf("%.6f ", projection[i]);
    }
    printf("\n");

    return 0;
}
