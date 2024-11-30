//Fibonacci series up to n
#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n) {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\n");
    return 0;
}
