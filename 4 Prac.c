#include <stdio.h>

int count_equal_divisors(int n) {
    int count = 0;
    for (int m = 1; m <= n; m++) {
        int quotient = n / m;
        int remainder = n % m;
        if (quotient == remainder) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The value of n should be a natural number.\n");
        return 1;
    }

    int result = count_equal_divisors(n);
    printf("The number of equal divisors of %d is: %d\n", n, result);

    return 0;
}
