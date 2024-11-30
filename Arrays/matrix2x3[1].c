#include <stdio.h>

int main() 
{
    int matrix[2][3];
    printf("Enter 6 elements for a 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]); 
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]); 
        }
        printf("\n"); 
    }

   }
