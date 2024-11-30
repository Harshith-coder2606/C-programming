//Factorial of numbers in a range
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int start, end, i;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        printf("Factorial of %d is %d\n", i, factorial(i));
    }

    return 0;
}
