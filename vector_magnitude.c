#include <stdio.h>
#include <math.h>

double vector_magnitude(int vector[], int n) {
    double sum_of_squares = 0.0;
    for (int i = 0; i < n; i++) {
        sum_of_squares += vector[i] * vector[i];
    }
    return sqrt(sum_of_squares);
}

int main() {
    int n;

    // Get user input for the size of the vector
    printf("Enter the size of the vector (n): ");
    scanf("%d", &n);

    int vector[n];

    // Get user input for the elements of the vector
    printf("Enter the elements of the vector:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    // Calculate the magnitude of the vector
    double magnitude = vector_magnitude(vector, n);

    // Print the result
    printf("The magnitude of the vector is: %.6f\n", magnitude);

    return 0;
}
