#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5    // Number of rows in the seating chart
#define COLS 5    // Number of seats per row

// Function to display the seating chart
void displaySeats(char seats[ROWS][COLS]) {
    printf("Seating Chart:\n");
    printf("   "); // Header spacing
    for (int i = 0; i < COLS; i++) {
        printf("%3d", i + 1);
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%2d ", i + 1); // Row numbers
        for (int j = 0; j < COLS; j++) {
            printf(" %c ", seats[i][j]);
        }
        printf("\n");
    }
}

// Function to book a random seat
void bookRandomSeats(char seats[ROWS][COLS], int numSeats) {
    int booked = 0;
    srand(time(NULL)); // Initialize random number generator
    while (booked < numSeats) {
        int row = rand() % ROWS; // Random row index
        int col = rand() % COLS; // Random column index

        if (seats[row][col] == 'A') { // 'A' means Available
            seats[row][col] = 'B';   // 'B' means Booked
            printf("Seat booked: Row %d, Seat %d\n", row + 1, col + 1);
            booked++;
        }
 }
}

int main() {
    char seats[ROWS][COLS];
    int numSeats;

    // Initialize all seats to 'A' (Available)
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'A';
        }
    }

    printf("Welcome to the Seat Booking System!\n");
    displaySeats(seats);

    // Ask user how many seats they want to book
    printf("Enter the number of seats to book randomly: ");
    scanf("%d", &numSeats);

    if (numSeats > ROWS * COLS) {
        printf("Error: Not enough seats available.\n");
        return 1;
    }

    // Book random seats
    bookRandomSeats(seats, numSeats);

    // Display the updated seating chart
    printf("\nUpdated ");
    displaySeats(seats);

    return 0;
}