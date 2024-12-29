#include <stdio.h>

int gcd(int A, int B) {
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

long long lcm(int A, int B) {
    return (long long)A * B / gcd(A, B);
}

int main() {
    int A, B;
    printf("Enter two integers: ");
    scanf("%d %d", &A, &B);

    printf("The LCM of %d and %d is %lld.\n", A, B, lcm(A, B));

    return 0;
}
