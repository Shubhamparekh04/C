/*
Q.4 Sum of Elements in Row & Column of 2D Array
Develop a Program to print and find the sum of all elements of a given row & column from a 2D array.
*/

#include <stdio.h>
void main()
{
    int r, c, ur, uc, urs = 0, ucs = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int a[r][c];

    printf("\nEnter array's elements:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOutput:\nEnter row number: ");
    scanf("%d", &ur);

    printf("Elements of row %d:", ur);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (i == ur)
            {
                urs += a[ur][j];
                printf(" %d, ", a[ur][j]);
            }
        }
    }

    printf("\nThe sum of a row %d: %d", ur, urs);

    printf("\n\nEnter column number: ");
    scanf("%d", &uc);

    printf("Elements of column %d:", uc);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (j == uc)
            {
                ucs += a[i][uc];
                printf(" %d, ", a[i][uc]);
            }
        }
    }

    printf("\nThe sum of a column %d: %d\n\n", uc, ucs);
}