//Triangle of stars
c
Copy 



#include <stdio.h>

int main() {
    int rows, i, j, stars;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        stars = 2 * i + 1;
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
