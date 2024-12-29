#include <stdio.h>
#include <math.h>

double euclidean_distance(double A[], double B[], int n) {
    double sum_of_squares = 0.0;
    for (int i = 0; i < n; i++) {
        sum_of_squares += pow(A[i] - B[i], 2);
    }
    return sqrt(sum_of_squares);
}

int main() {
    int n;

    // Get user input for the size of the vectors
    printf("Enter the size of the vectors (n): ");
    scanf("%d", &n);

    double A[n], B[n];

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

    // Calculate the Euclidean distance between the vectors
    double distance = euclidean_distance(A, B, n);

    // Print the result
    printf("The Euclidean distance between the vectors is: %.6f\n", distance);

    return 0;
}
