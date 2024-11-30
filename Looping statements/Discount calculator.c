//Discount calculator based on total amount
#include <stdio.h>

int main() {
    float amount, discount, finalAmount;

    printf("Enter the purchase amount: ");
    scanf("%f", &amount);

    if (amount <= 1000)
        discount = 0.05 * amount;
    else if (amount <= 5000)
        discount = 0.10 * amount;
    else if (amount <= 10000)
        discount = 0.20 * amount;
    else
        discount = 0.0; // No discount for amounts beyond 10,000 as per the given table

    finalAmount = amount - discount;

    printf("Discount: %.2f\n", discount);
    printf("Final amount after discount: %.2f\n", finalAmount);

    return 0;
}