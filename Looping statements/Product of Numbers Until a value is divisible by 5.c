//Product of numbers until a value divisible by 5 is entered
#include <stdio.h>

int main() {
    int num;
    long long product = 1;

    printf("Enter numbers (enter a number divisible by 5 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num % 5 == 0)
            break;
        product *= num;
    }

    printf("Product of entered numbers: %lld\n", product);

    return 0;
}
