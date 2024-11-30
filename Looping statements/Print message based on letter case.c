//Print messages based on letter case
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf(" %c", &ch);

    if (isupper(ch))
        printf("You entered an uppercase letter.\n");
    else if (islower(ch))
        printf("You entered a lowercase letter.\n");
    else
        printf("Invalid input. Please enter a letter.\n");

    return 0;
}
