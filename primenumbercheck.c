#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not a prime number
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime numbers
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Divisible by 2 or 3
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Divisible by i or i + 2
        }
    }
    return 1; // Prime number
}

int main() {
    int n;
    printf("Enter an integer (1 <= N <= 10^9): ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
