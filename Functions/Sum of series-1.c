//Sum of the series 
//1/1!+2/2!+⋯+𝑛/𝑛!
#include <stdio.h>

double factorial(int n) {
    if (n == 0) return 1;
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i / factorial(i);
    }

    printf("Sum of the series: %.2lf\n", sum);

    return 0;
}
