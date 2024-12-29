#include <stdio.h>

// Function to find the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the modular inverse of a with respect to m using the Extended Euclidean algorithm
int mod_inverse(int a, int m) {
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1) return 0;

    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0) x1 += m0;

    return x1;
}

// Function to solve the system of simultaneous congruences using the Chinese Remainder Theorem
int chinese_remainder_theorem(int n[], int r[], int k) {
    int prod = 1;
    for (int i = 0; i < k; i++) {
        prod *= n[i];
    }

    int result = 0;
    for (int i = 0; i < k; i++) {
        int pp = prod / n[i];
        result += r[i] * mod_inverse(pp, n[i]) * pp;
    }

    return result % prod;
}

int main() {
    int k;
    printf("Enter the number of pairs (n, r): ");
    scanf("%d", &k);

    int n[k], r[k];
    for (int i = 0; i < k; i++) {
        printf("Enter pair %d (n, r): ", i + 1);
        scanf("%d %d", &n[i], &r[i]);
    }

    int X = chinese_remainder_theorem(n, r, k);
    printf("The smallest integer X such that:\n");
    for (int i = 0; i < k; i++) {
        printf("X mod %d = %d\n", n[i], r[i]);
    }
    printf("is X = %d\n", X);

    return 0;
}

