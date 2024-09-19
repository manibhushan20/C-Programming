#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth element of the Fibonacci series is: %d", n, fibonacci(n));

    return 0;
}
