/*
Q3.Write a Program to find the sum of diagonal elements from a given 2D array.
*/
#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the array's row & column size:");
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += (i == j) ? a[i][j] : 0;
        }
    }

    printf("\nThe sum of diagonal elements of an Array: %d", sum);
}

