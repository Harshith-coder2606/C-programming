//Nature of roots and points awarded
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant;
    int points = 0;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("The equation has real roots.\n");
        points = 20;
    } else if (discriminant == 0) {
        printf("The equation has equal roots.\n");
    } else {
        printf("The equation has imaginary roots.\n");
        points = 10;
    }

    printf("You scored %d points.\n", points);
    return 0;
}
