#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int euler_totient(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (gcd(N, i) == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    printf("The number of integers from 1 to %d that are coprime with %d is %d.\n", N, N, euler_totient(N));

    return 0;
}
