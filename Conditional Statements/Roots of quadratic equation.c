//lab ques 1 Roots of quadratic equation 
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct: %.2f, %.2f\n", root1, root2);
            break;
        case 0:
            switch (discriminant == 0) {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and equal: %.2f, %.2f\n", root1, root2);
                    break;
                case 0:
                    realPart = -b / (2 * a);
                    imagPart = sqrt(-discriminant) / (2 * a);
                    printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi\n",
                           realPart, imagPart, realPart, imagPart);
                    break;
            }
            break;
    }

    return 0;
}