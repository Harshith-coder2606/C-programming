//Points scored based on character type
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int points = 0;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isdigit(ch))
        points = 10;
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        points = 5;

    printf("You scored %d points.\n", points);
    return 0;
}
