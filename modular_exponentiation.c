#include <stdio.h>

long long modular_exponentiation(long long A, long long B, long long M) {
    long long result = 1;
    A = A % M;

    while (B > 0) {
        if (B % 2 == 1) {
            result = (result * A) % M;
        }
        B = B >> 1;
        A = (A * A) % M;
    }

    return result;
}

int main() {
    long long A, B, M;
    printf("Enter three integers A, B, and M: ");
    scanf("%lld %lld %lld", &A, &B, &M);

    printf("The result of (%lld^%lld) mod %lld is %lld.\n", A, B, M, modular_exponentiation(A, B, M));

    return 0;
}
