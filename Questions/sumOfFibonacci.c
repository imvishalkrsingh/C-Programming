#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        sum += next;
    }

    printf("Sum of the first %d terms of Fibonacci Series: %d\n", n, sum);

    return 0;
}
