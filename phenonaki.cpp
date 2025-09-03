#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("%d is in Fibonacci series\n", n);
        return 0;
    }

    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == n) {
        printf("%d is in Fibonacci series\n", n);
    } else {
        printf("%d is NOT in Fibonacci series\n", n);
    }

    return 0;
}
