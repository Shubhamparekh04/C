/*
Q.2 Largest Element in 2D Array
Develop a Program to find the largest element from a given 2D array.
*/

#include <stdio.h>
void main()
{
    int r, c, lg;
    printf("\nEnter the array's row size: ");
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

    lg = a[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(a[i][j]>lg)lg=a[i][j];
        }
    }

    printf("\nOutput:\nThe largest element is: %d\n\n",lg);
}