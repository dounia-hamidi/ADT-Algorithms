#include <stdio.h>

long long sum_of_divisors(int N) {
    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int N;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    printf("The sum of all divisors of %d is %lld.\n", N, sum_of_divisors(N));

    return 0;
}
