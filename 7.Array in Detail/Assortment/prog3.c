/*
Q.3 Transpose of 2D Array
Develop a Program to find the transpose matrix of a given 2D array.
*/
#include <stdio.h>
void main()
{
    int sz;
    printf("\nInput:\nEnter the array's row & column size: ");
    scanf("%d", &sz);

    int a[sz][sz];

    printf("\nEnter array's elements:\n");

    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOutput:\nThe transpose matrix of an array:\n");

    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    printf("\n\n");
}