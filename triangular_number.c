#include <stdio.h>

int triangular_number(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    // Get user input
    printf("Enter an integer (n): ");
    scanf("%d", &n);

    // Calculate the n-th triangular number
    int result = triangular_number(n);
    printf("The %d-th triangular number is: %d\n", n, result);

    return 0;
}
