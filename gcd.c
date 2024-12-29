#include <stdio.h>

int gcd(int A, int B) {
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int main() {
    int A, B;
    printf("Enter two integers: ");
    scanf("%d %d", &A, &B);

    printf("The GCD of %d and %d is %d.\n", A, B, gcd(A, B));

    return 0;
}
