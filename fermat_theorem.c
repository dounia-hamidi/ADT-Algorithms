#include <stdio.h>

long long modular_exponentiation(long long A, long long B, long long P) {
    long long result = 1;
    A = A % P;

    while (B > 0) {
        if (B % 2 == 1) {
            result = (result * A) % P;
        }
        B = B >> 1;
        A = (A * A) % P;
    }

    return result;
}

int main() {
    long long A, B, P;
    printf("Enter three integers A, B (power), and P (prime divisor): ");
    scanf("%lld %lld %lld", &A, &B, &P);

    printf("The result of (%lld^%lld) mod %lld is %lld.\n", A, B, P, modular_exponentiation(A, B, P));

    return 0;
}
